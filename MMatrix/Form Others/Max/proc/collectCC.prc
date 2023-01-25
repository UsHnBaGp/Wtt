#procedure collectCC(head,trace,collectBiSp,replaceBiSp)
* Collect commuting containers into strings of non-commuting objects.
* Does not contract CCnull because it stands in as a second "index" for objects with only one index.
* arguments:
* - head:           Symbol name of the commuting container that should be collected
* - trace:          Symbol name of the trace function to use if a closed string is found
* - collectBiSp:    If 1, external Spinors are put into `head'(Bbar..U,)
* - replaceBiSp:    If 1, closed chaines `head'(Vbar..U,) are put outside `head'


* Gamma_(i,j) * Gamma_(j,k) -> (Gamma*Gamma)_(i,k)
repeat id `head'(sDUM1?,sDUM5?!{CCnull},sDUM6?!{CCnull}) * `head'(sDUM2?,sDUM6?!{CCnull},sDUM7?!{CCnull})  = `head'(sDUM1*sDUM2,sDUM5,sDUM7);

#if `collectBiSp' == 1
*SpBar_(0,i) * Gamma_(i,j) -> (SpBar*Gamma)_(0,j)
repeat id `head'(sDUM1?,CCnull,sDUM6?!{CCnull}) * `head'(sDUM2?,sDUM6?!{CCnull},sDUM7?!{CCnull})  = `head'(sDUM1*sDUM2,CCnull,sDUM7);
*(Spbar*Gamma_(i,j))_(0,i) * Sp(i,0)  -> (SpBar*Gamma*Sp)_(0,0)
id `head'(sDUM1?,CCnull,sDUM6?!{CCnull}) * `head'(sDUM2?,sDUM6?!{CCnull},CCnull)  = `head'(sDUM1*sDUM2,CCnull,CCnull);
#endif

argument `head';
    repeat id GI()*GI() = GI();
endargument;

#if `replaceBiSp' == 1
    id `head'(sDUM1?,CCnull,CCnull) = sDUM1;
#endif 
id `head'(sDUM1?,sDUM5?!{CCnull},sDUM5?!{CCnull}) = `trace'(sDUM1);
#endprocedure
