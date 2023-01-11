factarg denom ;
chainout denom ;

​repeat;
  id denom(aux?number_)   = 1/aux; 
  id denom(aux?symbol_)   = 1/aux;
  id denom(1/aux?symbol_) = aux;  
endrepeat;

​.sort


Bracket denom,CF,gw,gs,SUN;
.sort
collect num ;
.sort


cf RationalFunctopn ;
.sort

id num(aux?)   = RationalFunctopn(aux,1) ;
id denom(aux?) = RationalFunctopn(1,aux) ;
.sort

polyratfun RationalFunctopn ;
.sort

polyratfun ;
.sort

​id RationalFunctopn(aux1?, aux2?) = num(aux1)*denom(aux2) ;
.sort

Bracket GRAMProjector, num;
.sort

factarg denom;


*The numerator causes sometimes problems but I can ignore it here.
*, num ;
.sort

b gs, SUN, CF, gw, mw, denom;
.sort


chainout denom ;
chainout num ;

repeat;
  id denom(aux?number_) = 1/aux; 
  id denom(aux?symbol_) = 1/aux; 
  id denom(1/aux?symbol_) = aux; 
  id num(aux?number_) = aux; 
  id num(aux?symbol_) = aux;
  id num(1/aux?symbol_) = 1/aux;
endrepeat;

.sort
