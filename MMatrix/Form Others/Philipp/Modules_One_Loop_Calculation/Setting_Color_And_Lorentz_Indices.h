*##########################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
* Set color indices and Lorentz indices  %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*##########################################


* Not all functions need all indices, but it is convenient to give each vertex, propagator function the same structure



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Set indices of external particles  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


* We exclude the replacements in the external polarization vectors and spinors and make only replacements in propagators and vertices with one external particle attached to it.
* I use nu and colExt, colFun for external state indices

	
* External gluons
id HelpF?!ExternalState(?aux1, -1, ?aux2) = HelpF(?aux1, -1, nu1, colExt1, ?aux2);
id HelpF?!ExternalState(?aux1, -3, ?aux2) = HelpF(?aux1, -3, nu2, colExt2, ?aux2);
	
* External top and antitop states
id HelpF?!ExternalState(?aux1, -5, ?aux2) = HelpF(?aux1, -5, nuDummy, ColFun1, ?aux2);
id HelpF?!ExternalState(?aux1, -7, ?aux2) = HelpF(?aux1, -7, nuDummy, ColFun2, ?aux2);

* External higgs (only needed to bring everything on the same structure)
id HelpF?!ExternalState(?aux1, -9, ?aux2)   = HelpF(?aux1, -9,   nuDummy, colExtDummy, ?aux2);

* Dummy number used in propagators
id HelpF?!ExternalState(?aux1, -100, ?aux2) = HelpF(?aux1, -100, nuDummy, colExtDummy, ?aux2);
	


*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Set indices of internal particles  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



* I use mu and col for internal state indices
#do DummyIndexI = 1, 20
	
	id HelpF?!{Sector}(?aux1, 'DummyIndexI', ?aux2) = HelpF(?aux1, 'DummyIndexI', mu{'DummyIndexI'}, col{'DummyIndexI'}, ?aux2);
		
#enddo






*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Reorder arguments of functions f(3numbers, 3 momenta, 3 Lorentz indices, 3 color indices)  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

* GGGG vertex is the only exception because 4 edges are connected to that vertex
id VertexOfTypeGGGG(aux1?int_, mu1?, col1?, aux2?int_, mu2?, col2?, aux3?int_, mu3?, col3?, aux4?int_, mu4?, col4?, ?aux5) = VertexOfTypeGGGG(aux1, aux2, aux3, aux4, ?aux5, mu1, mu2, mu3, mu4, col1, col2, col3, col4);

id HelpF?(aux1?int_, mu1?, col1?, aux2?int_, mu2?, col2?, aux3?int_, mu3?, col3?, ?aux4) = HelpF(aux1, aux2, aux3, ?aux4, mu1, mu2, mu3, col1, col2, col3);


* The colors of the top and antitop are in the fundamental representation -> need to exchange 
#do FundamentalColorIndexI = 1, 20

	id HelpF?{TopPropagator, VertexOfTypeTTG, VertexOfTypeTTH, QuarkPropagator, VertexOfTypeQQG}(?aux1, col{'FundamentalColorIndexI'}, col100?, col101? ) = HelpF(?aux1, ColFunHelp{'FundamentalColorIndexI'}, col100, col101);
	id HelpF?{TopPropagator, VertexOfTypeTTG, VertexOfTypeTTH, QuarkPropagator, VertexOfTypeQQG}(?aux1, col100?, col{'FundamentalColorIndexI'}, col101? ) = HelpF(?aux1, col100, ColFunHelp{'FundamentalColorIndexI'}, col101);

#enddo



.sort

