transform[ sys_List,T_,var_List]:=Module[
    {ii},
    If[ Length[sys]===Length[var],Nothing[],Print["arg missmatch"];Return[sys] ];
    Return[ Table[ Inverse[T].sys[[ii]].T - Inverse[T].D[T,var[[ii]]],{ii,1,Length[sys]} ] ];
];
transform::usage="transform[M_var,T,var] returns Tinv.M_var.T-Tinv.d(T)/D(var) ";


vartransform[ sys_List , vartrans_List , oldvar_List , newvar_List ]:=Module[
    {ii,jj,l=Length[sys]},
    If[ (l===Length[vartrans] && l === Length[oldvar] && l===Length[newvar]) , Nothing[], Return[sys]];
    Return[ Table[ Sum[(sys[[ii]]/.vartrans)*D[oldvar[[ii]]/.vartrans,newvar[[jj]]],{ii,1,l}] ,{jj,1,l}] ];
];
vartransform::usage="vartransform[M_var,var(var'),var,var'] implements the transformation var->var(var') and returns all M_var'=M_(var->var')* d( var(var') )/ d(var) ";

matrixCommutator[A_,B_]:=A.B-B.A

integrable[sys_List,var_List,val_List:{}] := Module[
    {ii,jj,dif,l=Length[sys],rep},
    If[ l===Length[var] , Nothing[], Print["dimnsional error"];Return[False] ];
    rep = If[val==={},{},Thread[var->val]];
    For[ii=1,ii<=l,ii++,
        For[jj=ii+1,jj<=l,jj++,
            dif=D[sys[[ii]],var[[jj]]]-D[sys[[jj]],var[[ii]]]+matrixCommutator[sys[[ii]],sys[[jj]]];
            dif=dif/.rep;
            dif=Simplify[dif];
            If[AllTrue[Flatten[dif] ,#===0&],Nothing[], Print[var[[ii]]," ",var[[jj]]];Return[dif] ];
        ];
    ];
    Return[True];
];

ClearAll[integrableN];
integrableN[sys_List,var_List,val_List] := Module[
    {ii,jj,dif,l=Length[sys],sysN},
    If[ l===Length[var] , Nothing[], Print["dimnsional error"];Return[False] ];
    sysN = sys/.Thread[var->val];
    Print[sysN];
    Return[];
    For[ii=1,ii<=l,ii++,
        For[jj=ii+1,jj<=l,jj++,
            dif=ND[sys[[ii]],var[[jj]],val[[jj]]]-D[sys[[jj]],var[[ii]],val[[ii]]]+matrixCommutator[sysN[[ii]],sysN[[jj]]];
            dif=Chop[N[dif]];
            If[AllTrue[Flatten[dif] ,#===0&],Nothing[],Return[dif] ];
        ];
    ];
    Return[True];
];


denominators[ sys_ , var_ ] := Module[ {dim,dens=List[]},
    dim=Dimensions[sys];
    If[Length[dim]===2,Nothing[],Print["not a matrix"];Return[{}]];
    If[dim[[1]]==dim[[2]],Nothing[],Print["not a square matrix"];Return[{}]];
    dens = DeleteCases[Flatten[sys],0];
    dens = Map[ Factor[Denominator[Together[#]]] & , dens ];
    dens = Union[ Flatten[ Map[ If[Head[#]===Times,Apply[List,#] , # ] & , dens ] ] ];
    dens = Select[ dens , !NumericQ[#] & ];
    dens = Select[ dens , ! FreeQ[#,var,{0,Infinity}] & ];
    dens = Union[ Map[ Replace[#,Power[a__,n_Integer]->a] & , dens ] ]; 
    Return[dens]; 
];

