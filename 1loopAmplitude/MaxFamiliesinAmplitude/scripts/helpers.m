myWriteString[out_String, fname_String] := Module[{fout},
   If[FileExistsQ[fname], DeleteFile[fname], Nothing[]];
   fout = CreateFile[fname];
   WriteString[fout, out];
   Close[fout];
];

rescaleINVS = {msq -> lam*msq, s -> lam*s, t -> lam*t};
rescaleINTS = {INT[f_, ind__] :> INT[f, ind]*lam^(-Total[List[ind]])};

xingweight[exprS_String, fmordS_List, xingordS_List,nhead_Integer:3] := Module[
   {sl = StringLength[exprS], posf, posx}
   ,
   posf = Flatten[Position[fmordS, StringTake[exprS, {1,nhead}]]][[1]];
   posx = 
    Flatten[Position[Join[{""}, xingordS], 
       StringTake[exprS, {nhead+1,sl}]]][[1]];
   Return[{posf, posx}];
];

getp[ind_List] := Select[ind, # > 0 &];
getn[ind_List] := Select[ind, # < 0 &];
gett[ind_List] := Length[getp[ind]];
getT[ind_List] := Total[getp[ind]];
gets[ind_List] := Length[getn[ind]];
getS[ind_List] := Abs[Total[getn[ind]]];
getID[ind_List] := FromDigits[Reverse[Map[If[# > 0, 1, 0] &, ind]], 2];

funcToINT[head_,top_]:=head[ind__]:>With[{ll=List[ind]},INT[top,gett[ll],getID[ll],getT[ll],getS[ll],ll]];
