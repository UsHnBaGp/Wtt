#procedure prf(dobracket,?bracket)
***********************************************************
* Applies polyratfun to all active expressions .
* If `dobracket' is 1, the script collects coeffiencts
* of `bracket' into num()
************************************************************
On Statistics;

#if `dobracket' == 1
    id num(sDUM1?) = sDUM1 ;
    .sort
    #message --prf:bracket
    Bracket+ `?bracket';
    .sort
    collect num;
    .sort
#endif

#message --prf: apply polyratfun
id num(sDUM1?) = ratio(sDUM1,1);
id den(sDUM1?) = ratio(1,sDUM1);
.sort
PolyRatFun ratio;
.sort
PolyRatFun ;
.sort
id ratio(sDUM1?,sDUM2?) = num(sDUM1)*den(sDUM2);
.sort

#message --prf:factor num
factarg num;
chainout num;
id num(sDUM1?number_) = sDUM1 ;
.sort

#message --prf:factor den
factarg den;
chainout den;
id den(sDUM1?number_) = 1/sDUM1 ;
.sort


Off Statistics;

#endprocedure
