allSP := 
  Join[Union[Map[Apply[sp, #] &, Tuples[{qint, qint}]]], 
   Union[Map[Apply[sp, #] &, Tuples[{qext, qint}]]]];
   
rephalf = {Rational[-1, 2] -> -half, Rational[1, 2] -> half};

linearizeSP = {sp[a_ + b_, c__] :> sp[a, c] + sp[b, c], 
   sp[-a_, b_] :> -sp[a, b]};

ClearAll[KinPropToFORM];
KinPropToFORM[fnameIN_String, fnameOUT_String] := Module[
   {kinlist, plugkin, tmp,linkombP, ii, v, vS, vmS,vsq},
   
   {kinlist, plugkin} = KinStoL[fnameIN];
   tmp = "";
   tmp = tmp <> "argument Prop;\n";
   tmp = tmp <> "  id "<>ToString[qext[[-1]]]<>" = "<>ToString[-Total[qext[[1 ;; -2]]]]<>";\n";
   tmp = tmp <> "endargument;\n";
   
   linkombP = Subsets[qext[[1;;-2]],{1,4}];
   
   For[ii=1,ii<=Length[linkombP],ii++,
      v   = Total[linkombP[[ii]]];
      vS  = ToString[v];
      vmS = ToString[-v];
      vsq = ReplaceAll[ReplaceRepeated[sp[v,v],linearizeSP],plugkin];
      
      tmp = tmp <> "repeat id Prop(" <>  vS <> ",0,?args) = den(" <> ToString[InputForm[vsq]] <> ");\n";
      tmp = tmp <> "repeat id Prop(" <> vmS <> ",0,?args) = den(" <> ToString[InputForm[vsq]] <> ");\n";
   ];
   
   tmp = StringReplace[tmp, {"mt^2" -> "mtsq"}];
   tmp = StringReplace[tmp, {"mw^2" -> "mwsq"}];
   myWriteString[tmp, fnameOUT];
   ];

ClearAll[KinNumToFORM];
KinNumToFORM[fnameIN_String, fnameOUT_String] := Module[
   {kinlist, plugkin, tmp, ii, kin, vS, vmS, fout, v1S, v2S, rhsS},
   
   {kinlist, plugkin} = KinStoL[fnameIN];
   tmp = "";
   tmp = tmp <> "repeat id "<>ToString[qext[[-1]]]<>" = "<>ToString[-Total[qext[[1 ;; -2]]]]<>";\n";
   For[ii = 1, ii <= Length[plugkin], ii++,
    {v1S, v2S} = Map[ToString[#] &, Apply[List, plugkin[[ii, 1]]]];
    rhsS = Expand[Expand[plugkin[[ii, 2]]] /. rephalf];
    rhsS = ToString[InputForm[rhsS]];
    tmp = 
     tmp <> "repeat id " <> v1S <> "." <> v2S <> " = " <> rhsS <> 
      ";\n";
    ];
   tmp = StringReplace[tmp, {"m^2" -> "msq"}];
   myWriteString[tmp, fnameOUT];
];
   
PropToFORM[fnameIN_String, fnameOUT_String] := Module[
   {
    topos, tmp,
    tid, famnameS, props,
    ii, vec, mass, vecS, vecmS, massS,
    fout
    },
   topos = FamStoL[fnameIN];
   tmp = "";
   For[tid = 1, tid <= Length[topos], tid++,
    {famnameS, props} = topos[[tid]];
    For[ii = 1, ii <= Length[props], ii++,
     {vec, mass} = props[[ii]];
     vecS = StringDelete[ToString[vec], " "];
     vecmS = StringDelete[ToString[-vec], " "];
     massS = ToString[InputForm[mass]];
     tmp = 
      tmp <> "repeat id Sector(sDUM1?fam" <> famnameS <> 
       ",?argsS)*Prop(" <> vecS <> "," <> massS <> ",?argsP) = D" <> 
       ToString[ii] <> "*Sector(sDUM1,?argsS);\n";
     tmp = 
      tmp <> "repeat id Sector(sDUM1?fam" <> famnameS <> 
       ",?argsS)*Prop(" <> vecmS <> "," <> massS <> ",?argsP) = D" <> 
       ToString[ii] <> "*Sector(sDUM1,?argsS);\n";
     ];
    tmp = tmp <> "\n";
    ];
   myWriteString[tmp, fnameOUT];
   ];
   
   
PropXToFORM[famfnameIN_String, shiftfnameIN_List, fnameOUT_String] :=
   Module[
   {tmp, topos, xingID, xing, xingALL,
    ii, x, top, xrule,
    jj, repT, repF, rep,
    topdef, props,
    kk, vec, mass, vecS, vecmS, massS,
    fout},
   tmp = "";
   topos = FamStoL[famfnameIN];
   xingID = Map[# <> "x11" &, topos[[;; , 1]]];
   xing = Flatten[Map[CrossingsToL[#]&,shiftfnameIN]];
   xingALL = Union[xingID, xing];
   For[ii = 1, ii <= Length[xingALL], ii++,
    x = xingALL[[ii]];
    top = StringSplit[x, "x"][[1]];
    xrule = StringSplit[x, "x"][[2 ;;]];
    x = StringReplace[x, {"x11" -> ""}];
    rep={};
    For[jj = 1, jj <= Length[xrule], jj++,
     (*FAM x i_1 ... i_n represents the family*)
     (* 
     with crossing p_(i_1)\[Rule]p_(i_2), ... ,  
     p(i_n-1)\[Rule]p(i_n) *)
     
     repF = Flatten[ToExpression[Characters[xrule[[jj]]]]];
     repT = RotateLeft[repF, 1];
     repF = Map[ToExpression["p" <> ToString[#]] &, repF];
     repT = Map[ToExpression["p" <> ToString[#]] &, repT];
     AppendTo[rep,Thread[repF -> repT]];
     ];
     rep = Flatten[rep];
      
    topdef = Select[topos, #[[1]] === top &][[1]];
    props = topdef[[2]] /. rep/.p5->-p1-p2-p3-p4;
    For[kk = 1, kk <= Length[props], kk++,
     {vec, mass} = props[[kk]];
     vecS = StringDelete[ToString[vec], " "];
     vecmS = StringDelete[ToString[-vec], " "];
     massS = ToString[InputForm[mass]];
     tmp = 
      tmp <> "repeat id Sector(" <> x <> ",?argsS)*Prop(" <> vecS <> 
       "," <> massS <> ",?argsP) = D" <> ToString[kk] <> "*Sector(" <>
        x <> ",?argsS);\n";
     tmp = 
      tmp <> "repeat id Sector(" <> x <> ",?argsS)*Prop(" <> vecmS <> 
       "," <> massS <> ",?argsP) = D" <> ToString[kk] <> "*Sector(" <>
        x <> ",?argsS);\n";
     ];
    tmp = tmp <> "\n";
    ];
   myWriteString[tmp, fnameOUT];
   ];
   
NumToFORM[loop_Integer, kinfnameIN_String, famfnameIN_String, 
   fnameOUT_String] := Module[
   {kinlist, plugkin, invvec, spvec, Nsp, topos, tmp="", tid, famnameS, 
    props, Dvec, eq, NN, NNrr, spsol, ii, v1S, v2S, rhsS},
   
   {kinlist, plugkin} = KinStoL[kinfnameIN];
   invvec = Flatten[Map[If[Head[#] === Plus, Apply[List, #], #] &,  Expand[kinlist[[;; , 3]]]]];
   invvec = Flatten[Map[If[Head[#] === Times, Apply[List, #], #] &, Factor[invvec]]];
   invvec = Select[Union[invvec], ! NumericQ[#] &];
   
   spvec = allSP;
   Nsp = Length[spvec];
   topos = FamStoL[famfnameIN];
   
   For[tid = 1, tid <= Length[topos], tid++,
    {famnameS, props} = topos[[tid]];
    Dvec = Table[Den[i], {i, Length[props]}];
    (*write  0 = DDvec - M.spev = N.(spvec,Dvec,invvec)*)
    
    eq = Dvec - Map[sp[#[[1]], #[[1]]] - #[[2]]^2 &, props];
    eq = eq //. linearizeSP /. plugkin;
    NN = Normal[CoefficientArrays[eq, Join[spvec, Dvec, invvec]]][[2]];
    NNrr = RowReduce[NN];
    If[NNrr[[1 ;; Nsp, 1 ;; Nsp]] === IdentityMatrix[Nsp], Nothing[], 
     Print["insufficient topology"]; Return[];];
    spsol = -NNrr[[1 ;; Nsp, Nsp + 1 ;;]].Join[Dvec, invvec];
    spsol = 
     spsol /. Den[i_] :> den[ToExpression["D" <> ToString[i]]];
    For[ii = 1, ii <= Length[spsol], ii++,
     {v1S, v2S} = Map[ToString[#] &, Apply[List, spvec[[ii]]]];
     rhsS = Expand[Expand[spsol[[ii]]] /. rephalf];
     rhsS = ToString[InputForm[rhsS]];
     rhsS = StringReplace[rhsS, {"[" -> "(", "]" -> ")"}];
     tmp = 
      tmp <> "repeat id Sector(sDUM1?fam" <> famnameS <> ",?argsS)*" <>
        v1S <> "." <> v2S <> " = (" <> rhsS <> 
       ")*Sector(sDUM1,?argsS);\n";
     ];
    tmp = tmp <> "\n";
    ];
   tmp = StringReplace[tmp, {"m^2" -> "msq"}];
   myWriteString[tmp, fnameOUT];
   ];

NumXToFORM[loop_Integer, kinfnameIN_String, famfnameIN_String, 
   shiftfnameIN_List, fnameOUT_String] := Module[
   {tmp, kinlist, plugkin, invvec, spvec, Nsp, topos, xingID, xing, 
    xingALL,
    ii, x, top, xrule,
    jj, repT, repF, rep,
    topdef, props, Dvec, eq, NN, NNrr, spsol,
    kk, v1S, v2S, rhsS},
   
   tmp = "";
   
   {kinlist, plugkin} = KinStoL[kinfnameIN];
   invvec = 
    Flatten[Map[If[Head[#] === Plus, Apply[List, #], #] &, 
      Expand[kinlist[[;; , 3]]]]];
   invvec = 
    Flatten[Map[If[Head[#] === Times, Apply[List, #], #] &, 
      Factor[invvec]]];
   invvec = Select[Union[invvec], ! NumericQ[#] &];
   spvec = allSP;
   
   Nsp = Length[spvec];
   topos = FamStoL[famfnameIN];
   
   xingID = Map[# <> "x11" &, topos[[;; , 1]]];
   xing = Flatten[Map[CrossingsToL[#]&,shiftfnameIN]];
   xingALL = Union[xingID, xing];
   For[ii = 1, ii <= Length[xingALL], ii++,
    x = xingALL[[ii]];
    top = StringSplit[x, "x"][[1]];
    xrule = StringSplit[x, "x"][[2 ;;]];
    x = StringReplace[x, {"x11" -> ""}];
    rep={};
    For[jj = 1, jj <= Length[xrule], jj++,
     (*FAM x i_1... i_n represents the family*)
     (*with crossing p_(i_1)->p_(i_2),...,p(i_n-1)->p(i_n)*)
     
     repF = Flatten[ToExpression[Characters[xrule[[jj]]]]];
     repT = RotateLeft[repF, 1];
     repF = Map[ToExpression["p" <> ToString[#]] &, repF];
     repT = Map[ToExpression["p" <> ToString[#]] &, repT];
     AppendTo[rep,Thread[repF -> repT]];
     ];
     rep=Flatten[rep];
     
    topdef = Select[topos, #[[1]] === top &][[1]];
    props = topdef[[2]] /. rep /. p5 -> -p1 - p2 - p3 - p4;
    Dvec = Table[Den[i], {i, Length[props]}];
    (*write 0=DDvec-M.spev=N.(spvec,Dvec,invvec)*)
    
    eq = Dvec - Map[sp[#[[1]], #[[1]]] - #[[2]]^2 &, props];
    eq = eq //. linearizeSP /. plugkin;
    NN = Normal[CoefficientArrays[eq, Join[spvec, Dvec, invvec]]][[2]];
    NNrr = RowReduce[NN];
    If[NNrr[[1 ;; Nsp, 1 ;; Nsp]] === IdentityMatrix[Nsp], Nothing[], 
     Print["insufficient topology"];];
    spsol = -NNrr[[1 ;; Nsp, Nsp + 1 ;;]].Join[Dvec, invvec];
    spsol = 
     spsol /. Den[i_] :> den[ToExpression["D" <> ToString[i]]];
    For[kk = 1, kk <= Length[spsol], kk++,
     {v1S, v2S} = Map[ToString[#] &, Apply[List, spvec[[kk]]]];
     rhsS = Expand[Expand[spsol[[kk]]] /. rephalf];
     rhsS = ToString[InputForm[rhsS]];
     rhsS = StringReplace[rhsS, {"[" -> "(", "]" -> ")"}];
     tmp = 
      tmp <> "repeat id Sector(" <> x <> ",?argsS)*" <> v1S <> "." <> 
       v2S <> " = (" <> rhsS <> ")*Sector(" <> x <> ",?argsS);\n";
     ];
    tmp = tmp <> "\n";
    ];
   tmp = StringReplace[tmp, {"m^2" -> "msq"}];
   myWriteString[tmp, fnameOUT];
   ];
   
CrossingToFORM[fnameIN_String, fnameOUT_String] := Module[
   {
    xingS, tmp="",
    ii, xhere, xrule,
    jj, rep
    },
   xingS = CrossingsToL[fnameIN];
   For[ii = 1, ii <= Length[xingS], ii++,
    xhere = xingS[[ii]];
    tmp = 
     tmp <> "id Sector(" <> xhere <> ",?args) = Sector(" <> xhere <> 
      ",?args)";
    xrule = StringSplit[xhere, "x"][[2 ;;]];
    For[jj = 1, jj <= Length[xrule], jj++,
     (* x123 corresponds to 1\[Rule]2 , 2\[Rule]3, 
     3\[Rule]1 on the family*)
     
     rep = ToExpression[Characters[xrule[[jj]]]];
     rep = Reverse[Flatten[Map[{#, #} &, rep]]];
     rep = RotateLeft[rep, 1];
     rep = Map["p" <> ToString[#] &, rep];
     rep = StringRiffle[rep, ","];
     rep = " * replace_(" <> rep <> ")";
     tmp = tmp <> rep;
     ];
    tmp = tmp <> ";\n";
    ];
   myWriteString[tmp, fnameOUT];
   ];
   
FamDefToFORM[famfnameIN_String,xingfnameIN_List,famextra_List, fnameOUT_String] := Module[
   {
    xingS, famS,
    tmp = "",
    ii, xhereS, symbolsS
    },
   topos = FamStoL[famfnameIN];
   xingS = Flatten[Map[CrossingsToL[#]&,xingfnameIN]];
   xingS = Union[xingS,famextra ];
   famS = Map[StringSplit[#, "x"][[;; 1]] &, xingS];
   famS = Union[Flatten[famS],topos[[;;,1]]];
   
    For[ ii = 1, ii <= Length[famS], ii++,
        xhereS = Select[xingS, StringMatchQ[#, famS[[ii]] ~~ __] &];
        symbolsS = Join[{famS[[ii]]}, xhereS];
        tmp = tmp <> "S " <> StringRiffle[symbolsS, ","] <> ";\n";
    ];
   
    For[ii = 1, ii <= Length[famS], ii++,
        xhereS = Select[xingS, StringMatchQ[#, famS[[ii]] ~~ __] &];
        symbolsS = Join[{famS[[ii]]}, xhereS];
        tmp = tmp <> "Set fam" <> famS[[ii]] <> " : " <>StringRiffle[symbolsS, ","] <> ";\n";
    ];
    myWriteString[tmp, fnameOUT];
];
   
ProjToFORM[mmINV_List, TCC_String, fnameOUT_String] := 
  Module[
   {
    tmp = "", mm = mmINV, dim,
    ii,
    jj, mmijS
    },
   If[Length[Dimensions[mm]] === 2, Nothing[], 
    Print["mmINV not matrix"]; Return[]];
   If[Dimensions[mm][[1]] === Dimensions[mm][[2]], Nothing[], 
    Print["mmINV not quadratic"]; Return[]];
   dim = Dimensions[mm][[1]];
   
   (*
   mm = mm /. denfunc[a_] :> denfunc[Factor[a]];
   mm = mm //. denfunc[a_*b_] -> denfunc[a]*denfunc[b];
   mm = mm /. denfunc[a_] :> denfunc[Factor[a]];
   mm = mm //. denfunc[Power[a_,b_]] :>Power[denfunc[a],b];
   mm = mm /. denfunc[a_Integer] -> 1/a;
   *)
   
   For[ii = 1, ii <= dim, ii++,
    (*tmp=tmp<>"G Proj["<>ToString[ii]<>"] = ";*)
    tmp = tmp <> "G Proj" <> ToString[ii] <> " = ";
    For[jj = 1, jj <= dim, jj++,
     mmijS = ToString[InputForm[mm[[ii, jj]]]];
     mmijS = StringDelete[mmijS, " "];
     mmijS = StringReplace[mmijS, {"[" -> "(", "]" -> ")"}];
     tmp = tmp <> " + (" <> mmijS <> ") * " <> TCC <> ToString[jj];
     ];
    tmp = tmp <> ";\n\n";
    ];
    
    tmp = tmp <> ".sort\n\n";
    
    (*
    tmp = tmp <> "repeat id msq*den(msq) = 1;\n";
    tmp = tmp <> "repeat id u*den(u) = 1;\n";
    tmp = tmp <> "repeat id s*den(s) = 1;\n";
    tmp = tmp <> "repeat id t*den(t) = 1;\n";
    *)
    
    (*
    tmp = tmp <> "id den(-4*msq+s+t) = -den(u);\n";
    tmp = tmp <> "id den(4*msq-s-t) = den(u);\n";
    tmp = tmp <> "ChainIn den;\n";
    tmp = tmp <> "id sDUM1?*den(?args1,sDUM1?,?args2) = den(?args1,?args2);\n";
    tmp = tmp <> "ChainOut den;\n";
    *)
    
    tmp = tmp <> ".sort\n\n";
    
    tmp = tmp <> "Hide " <> StringRiffle[ Table[ "Proj" <> ToString[ii] , {ii,1,dim}] , " , " ] <> ";\n";
    tmp = tmp <> ".sort\n";
    
   myWriteString[tmp, fnameOUT];
];

MMIToFORM[MMINV_List, MMIij_String, fnameOUT_String] := 
  Module[
   {
    tmp = "", mm = MMINV, dim,
    ii,jj,me,meS
    },
   If[Length[Dimensions[mm]] === 2, Nothing[],Print["mmINV not matrix"]; Return[]];
   If[Dimensions[mm][[1]] === Dimensions[mm][[2]], Nothing[],Print["mmINV not quadratic"]; Return[]];
   dim = Dimensions[mm][[1]];
   
   tmp = tmp <> "#do i= 1, "<>ToString[dim]<>"\n";
   tmp = tmp <> "  #do j= 1, "<>ToString[dim]<>"\n";
   (*tmp = tmp <> "    #define "<>MMIij<>"`i'`j' \"0\";\n"; *)
   tmp = tmp <> "    G "<>MMIij<>"`i'`j' = 0;\n";
   tmp = tmp <> "  #enddo\n";
   tmp = tmp <> "#enddo\n";
   tmp = tmp <> "\n";
   
   For[ii = 1, ii <= dim, ii++,
      For[jj = 1, jj <= dim, jj++,
         me = mm[[ii, jj]];
         If[ me === 0 , Continue[] , Nothing[] ];
         meS = ToString[InputForm[me]];
         meS = StringDelete[meS, " "];
         meS = StringReplace[meS, {"[" -> "(", "]" -> ")"}];
         (*tmp  = tmp <> "#redefine " <> MMIij<>ToString[ii]<>ToString[jj] <> " \"" <> meS <> "\"\n";*)
         tmp  = tmp <> "G " <> MMIij<>ToString[ii]<>ToString[jj] <> " = "<>meS<>";\n";
       ];
    ];
    tmp = tmp <> "\n\n";
    tmp = tmp <> ".sort\n";
    tmp = tmp <> "\n\n";
   myWriteString[tmp, fnameOUT];
];


FuncToSymbolToFORM[args_List,func_String,prefix_String,doperm_,fnameOUT_String] :=
  Module[
   {
    tmp = "", dim=Length[args],
    ii,arg,argL,
    jj,argS
    },

   For[ii = 1, ii <= dim, ii++,
      arg = Expand[args[[ii]]];
      If[ doperm ,
         argL = Permutations[ If[ Head[arg]===Plus,Apply[List,arg],{arg}] ];
         ,
         argL = { If[ Head[arg]===Plus,Apply[List,arg],{arg}] };
      ];
      For[ jj=1 , jj<=Length[argL],jj++,
         argS = Map[ToString[InputForm[#]]&,argL[[jj]]];
         argS = StringReplace[argS,{" " -> "","("->"",")"->""}];
         argS = StringRiffle[argS , "+" ];
         argS = StringReplace[argS,{"+-"->"-"}];
         tmp  = tmp <> "id "<>func<>"("<>argS<>") = "<>prefix<>ToString[ii]<>";\n";
      ];
      tmp = tmp <> "\n";
   ];
   tmp = tmp <> "\n";
   tmp = tmp <> ".sort\n";
   tmp = tmp <> "\n";
   myWriteString[tmp, fnameOUT];
];

SymbolToFuncToFORM[args_List,prefix_String,func_String,fnameOUT_String] :=
  Module[
   {
    tmp = "", dim=Length[args],
    ii,arg,argS
    },

   For[ii = 1, ii <= dim, ii++,
      arg  = Expand[args[[ii]]];
      arg  = If[ Head[arg]===Plus,Apply[List,arg],{arg}];
      argS = Map[ToString[InputForm[#]]&,arg];
      argS = StringReplace[argS,{" " -> "","("->"",")"->""}];
      argS = StringRiffle[argS , "+" ];
      argS = StringReplace[argS,{"+-"->"-"}];
      tmp  = tmp <> "id "<>prefix<>ToString[ii]<>"= "<>func<>"("<>argS<>");\n";
   ];
   tmp = tmp <> "\n";
   tmp = tmp <> ".sort\n";
   tmp = tmp <> "\n";
   myWriteString[tmp, fnameOUT];
];
