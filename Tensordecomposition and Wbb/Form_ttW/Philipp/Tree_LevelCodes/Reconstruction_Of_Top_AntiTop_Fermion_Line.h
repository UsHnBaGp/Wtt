*Connect external antifermion with correct vertex
#do i = 0, 1
	
	if( match( ExternalAntiTop(aux1?, ?aux2)*HelpF1?(aux1?, ?aux3) ));

		id ExternalAntiTop(aux1?, ?aux2)*HelpF1?(aux1?, ?aux3) = ExternalAntiTop([],?aux2)*HelpF1([], ?aux3 );

	else;

*Swap AntiFermionState one to the right.
		id ExternalAntiTop(aux1?int_, ?aux2)*HelpF1?(aux3?int_, aux4?int_ , ?aux5) = HelpF1(aux3, aux4, ?aux5)*ExternalAntiTop(aux1, ?aux2);
		redefine i "0";
	
	endif;
	
	.sort

#enddo


*rebuild propagator-vertex connections
#do i = 0, 1

*Swap chain to the left

	repeat;

		id HelpF2?(aux1?int_, aux2?int_, aux3?int_, ?aux4)*ExternalAntiTop([], x?) = ExternalAntiTop([], x)*HelpF2(aux1, aux2, aux3, ?aux4);
		
		id HelpF2?(aux1?int_, aux2?int_, aux3?int_, ?aux4)*HelpF1?([], [], aux6?int_ , ?aux7) = HelpF1( [], [], aux6, ?aux7)*HelpF2( aux1, aux2, aux3, ?aux4);

		id HelpF2?(aux1?int_, aux2?int_, aux3?int_, ?aux4)*HelpF1?([], aux5?int_, aux6?int_ , ?aux7) = HelpF1( [], aux5, aux6, ?aux7)*HelpF2( aux1, aux2, aux3, ?aux4);

	endrepeat;
	
*	#message Loop 'i' 
*	Print;
*	.sort

	#do j = 1, 10
		if( match( HelpF1?( [], aux1?int_, aux2?int_, ?aux3 )*HelpF2?(  aux1?, aux4?int_ , aux5?int_ , ?aux6 ) ) );
		
			id HelpF1?( [], aux1?int_, ?aux2)*HelpF2?( aux1?, aux3?int_, ?aux4) = HelpF1( [], [], ?aux2)*HelpF2( [], aux3, ?aux4);
			redefine j "10";
			
				
				
		else;
			
			id HelpF1?( [], aux1?int_, aux2?int_, ?aux3 )*HelpF2?( aux4?int_, aux5?int_ , aux6?int_ , ?aux7) = HelpF2(  aux4, aux5 , aux6 , ?aux7)*HelpF1( [], aux1, aux2, ?aux3);
			
					
		endif;
		
		.sort
		
			
#enddo
	
	
*if all terms are in correct order all vertices must start with a []
	if( match( VertexOfTypeTTG(x?int_, ?y) ) || match( VertexOfTypeTTH(x?int_, ?y) ) );
	
		redefine i "0";

	endif;
	
	.sort
#enddo


*bring the ExternalTop to the right of the spinor chain

repeat;

	id ExternalTop(aux1?int_, ?x)*HelpF1?([], ?aux2) = HelpF1(?aux2)*ExternalTop(aux1, ?x);

endrepeat;

id HelpF1?(aux1?int_, ?aux3)*ExternalTop(aux1?, ?x) = HelpF1(?aux3)*ExternalTop( ?x);


*remove auxiliary number -100 and []
id HelpF?( ?aux1, -100, ?aux2) = HelpF( ?aux1, ?aux2 );
id HelpF?( ?aux1, [], ?aux2) = HelpF( ?aux1, ?aux2 );


