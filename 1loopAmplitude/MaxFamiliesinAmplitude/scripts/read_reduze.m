linearizeSP = {sp[a_ + b_, c__] :> sp[a, c] + sp[b, c], 
   sp[-a_, b_] :> -sp[a, b]};

KinStoL[in_String] := Module[{kinlist, eq, sol},
   kinlist = ReadString[in];
   kinlist = StringSplit[kinlist, "\n"];
   kinlist = StringDelete[kinlist, " "];
   kinlist = Select[kinlist, StringMatchQ[#, "-[[" ~~ ___] &];
   kinlist = Map[StringDelete[#, "-[[" | "]" | "\""] &, kinlist];
   kinlist = Map[StringSplit[#, ","] &, kinlist];
   kinlist = Map[ToExpression[#] &, kinlist, {2}];
   
   eq = Map[sp[#[[1]], #[[2]]] == #[[3]] &, kinlist];
   eq = eq //. linearizeSP;
   sol = Flatten[Solve[eq, Union[Cases[eq, _sp, {0, Infinity}]]]];
   
   Return[{kinlist, sol}];
   ];
   
FamStoL[in_String] := 
  Module[{famlist, posfname, topos, tid, pstart, pstop, prop, top},
   famlist = ReadString[in];
   famlist = StringSplit[famlist, "\n"];
   famlist = StringDelete[famlist, "\r"];
   famlist = StringDelete[famlist, " "];
   famlist = 
    Select[famlist, ! StringMatchQ[#, "integralfamilies:" ~~ ___] &];
   famlist = Select[famlist, ! StringMatchQ[#, "loop" ~~ ___] &];
   famlist = 
    Select[famlist, ! StringMatchQ[#, "propagators:" ~~ ___] &];
   famlist = DeleteCases[famlist, ""];
   posfname = 
    Flatten[Position[
      Map[If[StringMatchQ[#, "-name:" ~~ ___], 1, 0] &, famlist], 
      1]];
   famlist = Map[StringDelete[#, "-name:"] &, famlist];
   famlist = Map[StringDelete[#, "-[" | "]" | "\""] &, famlist];
   topos = {};
   For[tid = 1, tid <= Length[posfname], tid++,
    pstart = posfname[[tid]] + 1;
    pstop = 
     If[tid === Length[posfname], Length[famlist], 
      posfname[[tid + 1]] - 1];
    prop = 
     Map[ToExpression[StringSplit[#, ","]] /. Power[a_, b_] :> a &, 
      famlist[[pstart ;; pstop]]];
    top = {famlist[[posfname[[tid]]]], prop};
    AppendTo[topos, top];
    ];
   Return[topos];
   ];
   
CrossingsToL[in_String] := Module[{crossings},
   crossings = ReadString[in];
   crossings = StringDelete[crossings, " "];
   crossings = StringCases[crossings, "Sector(" ~~ RegularExpression["[a-z,A-Z,0-9]*"] ~~ ")"];
   crossings = Map[ToExpression[StringReplace[#, {"(" -> "[", ")" -> "]"}]] &, crossings];
   crossings = Union[crossings[[;; , 1]]];
   crossings = Map[ToString[#] &, crossings];
   crossings = Select[crossings, ! StringFreeQ[#, "x"] &];
   Return[crossings];
   ];
   
CrossingsyamlToL[in_String] := Module[{crossings},
   crossings = ReadString[in];
   crossings = StringDelete[crossings, " "];
   crossings = StringCases[crossings, "#name:" ~~ RegularExpression["[a-z,A-Z,0-9]*"]];
   crossings = Map[StringDelete[#, "#name:"] &, crossings];
   Return[crossings];
];

ShiftsToL[in_String,nint_Integer,next_Integer] := Module[{shifts,repmom,i},
   shifts = ReadString[in];
   
   shifts = StringSplit[shifts, "\n"];
   shifts = StringDelete[shifts, "\r"];
   shifts = StringDelete[shifts, " "];
   shifts = StringDelete[shifts, "id"];
   shifts = StringDelete[shifts, ";"];
   shifts=  Map[StringSplit[#,")="]&,shifts];
   shifts=  Map[{StringDelete[#[[1]],"DiaMatch("],StringReplace[#[[2]],{"[]"->"delim"}]}&,shifts];
   
   repmom = Join[
      Table["k"<>ToString[i]->"k["<>ToString[i]<>"]",{i,nint}],
      Table["p"<>ToString[i]->"p["<>ToString[i]<>"]",{i,next}]
   ];
   shifts = Map[{#[[1]],StringReplace[#[[2]],repmom]}&,shifts];
   shifts = Map[StringReplace[#,{"("->"[",")"->"]"}]&,shifts,{2}];
   shifts = Map[ToExpression[#]&,shifts,{2}];
   
   Return[shifts];
];
