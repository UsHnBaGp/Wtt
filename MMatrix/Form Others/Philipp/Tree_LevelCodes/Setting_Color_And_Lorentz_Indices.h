id ExternalTop(?x) = ExternalTop(?x, ColFun1);
id ExternalAntiTop(?x) = ExternalAntiTop(?x, ColFun2);


id VertexOfTypeTTG(?aux2)*ExternalTop(aux1?, ColFun?) = VertexOfTypeTTG(?aux2, [], ColFun)*ExternalTop(aux1, ColFun);
id TopPropagator(?aux2)*ExternalTop(aux1?, ColFun?) = TopPropagator(?aux2, [], ColFun)*ExternalTop(aux1, ColFun);

*The 20 is arbitrary, I have to think more if I want to generalise this. The stepsize is 2, to avoid problems with doublenaming
#do i = 1, 30, 3
	
	id TopPropagator(aux1?)*VertexOfTypeTTG(?aux2 , [], ColFun? ) = TopPropagator(aux1, [], ColFunHelp'i')*VertexOfTypeTTG(?aux2 , ColFunHelp'i', ColFun);
	id VertexOfTypeTTG(?aux)*TopPropagator(aux?, [], ColFun?) = VertexOfTypeTTG(?aux, [], ColFunHelp{'i'+1})*TopPropagator(aux, ColFunHelp{'i'+1}, ColFun);
	
	id TopPropagator(aux1?)*TopPropagator(aux2? , [], ColFun? ) = TopPropagator(aux1, [], ColFunHelp{'i' + 2})*TopPropagator(aux2 , ColFunHelp{'i'+ 2}, ColFun);
			
#enddo



id ExternalAntiTop(aux1?, ColFun1?)*VertexOfTypeTTG(?aux2, [], ColFunHelp?) = ExternalAntiTop(aux1, ColFun1)*VertexOfTypeTTG(?aux2 , ColFun1, ColFunHelp);
id ExternalAntiTop(aux1?, ColFun1?)*TopPropagator(aux2?, [], ColFunHelp?) = ExternalAntiTop(aux1, ColFun1)*TopPropagator(aux2 , ColFun1, ColFunHelp);


* To avoid confusion we call the Lorentzindices belonging to external states (negative integers) nu and the others to mu.
id HelpF?( ?aux1, -1, ?aux2) = HelpF( ?aux1, nu1, ?aux2, colExt3 );
id HelpF?( ?aux1, -3, ?aux2) = HelpF( ?aux1, nu2, ?aux2, colExt4 );



#do i = 0, 7;
	
	id HelpF?( ?aux1,  'i', ?aux2) = HelpF( ?aux1, mu'i', ?aux2, col'i');
	
#enddo

*Keeping the color indices of the external states results in some ambiguity as form does not know which indices to prefer. I.e. a delta(colFun1, ColFunHelp) can prefer the ColFunHelp, which make the coloralgebra at the end cumbersome.
id ExternalTop(x?, col?) = ExternalTop(x);
id ExternalAntiTop(x?, col?) = ExternalAntiTop(x);


