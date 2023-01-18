
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*     Simplify vertex structure  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


	id Vertex( gluon( aux1?, ?aux4  ), gluon( aux2?, ?aux5 ), gluon( aux3?, ?aux6  ) )                         =   VertexOfTypeGGG(aux1, aux2, aux3, ?aux4, ?aux5, ?aux6);
	id Vertex( gluon( aux1?, ?aux5  ), gluon( aux2?, ?aux6 ), gluon( aux3?, ?aux7  ), gluon( aux4?, ?aux8  ) ) =   VertexOfTypeGGGG(aux1, aux2, aux3, aux4, ?aux5, ?aux6, ?aux7, ?aux8);
	id Vertex( antitop(aux1?, ?aux4 ), top( aux2? , ?aux5 ), gluon( aux3?, ?aux6 ) )                           =   VertexOfTypeTTG(aux1, aux2, aux3, ?aux4, ?aux5, ?aux6);
	id Vertex( antitop(aux1?, ?aux4 ), top( aux2? , ?aux5 ), higgs( aux3?, ?aux6 ) )                           =   VertexOfTypeTTH(aux1, aux2, aux3, ?aux4, ?aux5, ?aux6);
	id Vertex( antiquark(aux1?, ?aux4 ), quark( aux2?, ?aux5), gluon( aux3?, ?aux6 ) )                         =   VertexOfTypeQQG(aux1, aux2, aux3, ?aux4, ?aux5, ?aux6);

*	S for spectre -> ghost 
	id Vertex( antighost(aux1?, ?aux4 ), ghost( aux2?, ?aux5), gluon( aux3?, ?aux6 ) )                         =   VertexOfTypeSSG(aux1, aux2, aux3, ?aux4, ?aux5, ?aux6);





*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*     Simplify propagator structure  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


*	The -100 is just an auxiliary number to make the propagater of the same structure like vertices (number1, number2, number3, momenta). As all particles are taken to be incoming the number can not appear anywhere (incoming states are always odd negatives -> see QGRAF Documentation) In case I would like to reuse that code, -100 is a high number for an external state.

	id Propagator(top  (aux1?int_, aux2?int_ , ?aux3))   =  TopPropagator  (aux1, aux2, -100, ?aux3);
	id Propagator(quark(aux1?int_, aux2?int_ , ?aux3))   =  QuarkPropagator(aux1, aux2, -100, ?aux3);
	id Propagator(gluon(aux1?int_, aux2?int_ , ?aux3))   =  GluonPropagator(aux1, aux2, -100, ?aux3);
	id Propagator(ghost(aux1?int_, aux2?int_ , ?aux3))   =  GhostPropagator(aux1, aux2, -100, ?aux3);



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*     Simplify external state structure  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



	id ExtState(antitop(?aux1)) =   ExternalAntiTop(?aux1);
	id ExtState(top(?aux1))     =   ExternalTop(?aux1);
	id ExtState(higgs(?aux1))   =   1;
	id ExtState(gluon(?aux1))   =   ExternalGluon(?aux1);
	
	
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*   Perform shifts on loop momentum k1    %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
	
	#include Modules_One_Loop_Calculation/Momentum_Shifts_on_Topologies.h
	
	#do MomentumNb = 1, 5
		argument;
			id p'MomentumNb' = vecp'MomentumNb';
			id k1 = veck1;
		endargument;
	#enddo
	
	
	
	id Shift(HelpV1?, HelpV2?, []) = replace_(HelpV1, HelpV2);


	.sort	
	
	#do MomentumNb = 1, 5
		argument;
			id vecp'MomentumNb' = p'MomentumNb';
			id veck1 = k1;
		endargument;
	#enddo

.sort
