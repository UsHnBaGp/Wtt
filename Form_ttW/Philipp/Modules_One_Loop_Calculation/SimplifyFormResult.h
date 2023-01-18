factarg denom ;
chainout denom ;

repeat;

	id denom(aux?number_)   = 1/aux; 
	id denom(aux?symbol_)   = 1/aux;
	id denom(1/aux?symbol_) = aux;  
	id denom(1/aux?number_) = aux;
	
endrepeat;

.sort

b denom,CF,gw,gs,SUN, i_, ColFactor1, ColFactor2;

.sort

collect num ;

.sort

cf RationalFunction ;

.sort

id num(aux?)   = RationalFunction(aux,1) ;
id denom(aux?) = RationalFunction(1,aux) ;

.sort

polyratfun RationalFunction ;
.sort

polyratfun ;
.sort

id RationalFunction(aux1?, aux2?) = num(aux1)*denom(aux2) ;

.sort

b GRAMProjector, num;


.sort
factarg denom;

.sort

factarg num ;

.sort

b gs, SUN, CF, gw, mw, denom;
.sort


chainout denom ;
chainout num ;

repeat;

	id denom(aux?number_)   = 1/aux; 
	id denom(aux?symbol_)   = 1/aux; 
	id denom(1/aux?symbol_) =   aux; 
		
	id num(aux?number_)   =   aux; 
	id num(aux?symbol_)   =   aux;
	id num(1/aux?symbol_) = 1/aux;
	
endrepeat;



.sort
