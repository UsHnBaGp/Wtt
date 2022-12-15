#procedure FullSimplify( Expression )
	
	cfunction RationalFunction;
	
	.sort
	
	skip;
	nskip `Expression';

*	This ensures that num(...)*num(...) or same with denom is treated properly.

	id num(aux?)   = RationalFunction(aux, 1);
	id denom(aux?) = RationalFunction(1, aux);
	
	.sort
	
		
	polyratfun RationalFunction;
	
	
	.sort
	
	
	polyratfun;
	
	
	.sort
	
	
	id RationalFunction(aux1?, aux2?) = num(aux1)*denom(aux2); 
	
	
	.sort
	
	
	skip;
	nskip `Expression';
	
	factarg num;
	factarg denom;
	
	
	.sort


	skip;
	nskip `Expression';
	
	chainout denom;
	chainout num;
	

	.sort

	
	repeat;
		id denom(aux?int_)    = 1/aux;
		id denom(aux?symbol_) = 1/aux;
		id num(aux?int_)      =   aux;
	endrepeat;
	
	
	.sort
#endprocedure




