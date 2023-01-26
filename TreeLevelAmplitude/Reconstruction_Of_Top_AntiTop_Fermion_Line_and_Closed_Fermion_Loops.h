g*##############################################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*  Rebuild fermion lines of external states and closed loops %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*##############################################################




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Attach external antitop to vertex %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


#do i = 0, 10

*	The last number indicates, that the vertex belongs to the external fermion line, which gets the index 1. This is needed for the Feynman rule insertion.
	id ExternalAntiTop(-7, ?aux2)*HelpF1?(-7, ?aux3) = ExternalAntiTop([],?aux2)*HelpF1([], ?aux3, 1);
	
*	Swap fermion to the right
	id ExternalAntiTop(aux1?int_, ?aux2)*HelpF1?(aux3?int_, aux4?int_ , ?aux5) = HelpF1(aux3, aux4, ?aux5)*ExternalAntiTop(aux1, ?aux2);
	
	.sort

#enddo



.sort


*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Rebuild external fermion line  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


#do i = 0, 1

*	Swap chain to the left
	repeat;

		id HelpF2?(aux1?int_, aux2?int_, aux3?int_, ?aux4)*ExternalAntiTop([], aux5?)                =  ExternalAntiTop([], aux5)*HelpF2(aux1, aux2, aux3, ?aux4);
		id HelpF2?(aux1?int_, aux2?int_, aux3?int_, ?aux4)*HelpF1?([], [], aux6?int_ , ?aux7)        =  HelpF1( [], [], aux6, ?aux7)*HelpF2( aux1, aux2, aux3, ?aux4);
		id HelpF2?(aux1?int_, aux2?int_, aux3?int_, ?aux4)*HelpF1?([], aux5?int_, aux6?int_ , ?aux7) =  HelpF1( [], aux5, aux6, ?aux7)*HelpF2( aux1, aux2, aux3, ?aux4);

	endrepeat;
	
	.sort


*	The top line always connects to a vertex TTG or TTH function. The first argument must be a [], which appears from the ordering and a negative number as second argument 
*	indicating that it attaches to the external top  
	
	if( match(VertexOfTypeTTG([], aux1?neg_, ?aux2)  ) || match(VertexOfTypeTTH([], aux1?neg_, ?aux) ) );
		
		id VertexOfTypeTTG([], aux1?neg_, ?aux2) = VertexOfTypeTTG([], aux1, ?aux2, 1);
		
		repeat;
			id ExternalTop(aux1?int_, ?aux3)*HelpF1?([], ?aux2) = HelpF1(?aux2)*ExternalTop(aux1, ?aux3);
		endrepeat;
	
*	Signal that external line is finished, needed to quit the do loop		
		id ExternalTop(-5, p3) = ExternalTop(p3);
		
	
	endif;


	.sort




*	Swap propagator or vertex function to the right till it is next to its partner. The 20 is an arbitrary but high enough number.

	#do j = 1, 20
	
		if( match( HelpF1?( [], aux1?int_, aux2?int_, ?aux3 )*HelpF2?(  aux1?, aux4?int_ , aux5?int_ , ?aux6 ) ) );
		
*			The last number indicates, that the vertex belongs to the external fermion line, which gets the index 1. This is needed for the Feynman rule insertion.		
			id HelpF1?( [], aux1?int_, ?aux2)*HelpF2?( aux1?, aux3?int_, ?aux4) = HelpF1( [], [], ?aux2, 1)*HelpF2( [], aux3, ?aux4);
			
			redefine j "20";
			
				
				
		else;
			
			id HelpF1?( [], aux1?int_, aux2?int_, ?aux3 )*HelpF2?( aux4?int_, aux5?int_ , aux6?int_ , ?aux7) = HelpF2(  aux4, aux5 , aux6 , ?aux7)*HelpF1( [], aux1, aux2, ?aux3);
			
					
		endif;
		
		.sort
		
			
	#enddo
	

	redefine i "0";	
	.sort
	
	
*	Quit do loop if external fermion line is reconstructed		
	if( match( ExternalTop(p3) ) );
		redefine i "10";
	endif;
	
	
	.sort


#enddo

.sort


* Put a [] as first argument to protect the function from swapping
id HelpF1?(aux1?int_, ?aux3)*ExternalTop(p3) = HelpF1([], ?aux3)*ExternalTop(p3);


*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
* Not sure if I need that here, but this should remove the -100 in the TopPropgators between the external states
id TopPropagator(-100, ?aux1) = TopPropagator(?aux1);


.sort



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Closed fermion loops:                    %%
*       1. Closed top loop                 %%
*       2. Closed massless quark loop      %%
*                                          %%
*       Can only have one                  %%
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



* Ghost vertices and propagator only have commuting objects -> don't need to reconstruct ghost loops;

* All propagators which belong to the external fermion line start with a []. -> Pick any propagator of the closed fermion line as starting point for the reconstruction of the closed fermion line loop-
* The number refering to the fermion line is now 2.
* We can have only have either a top or quark loop at 1 loop (perhaps also at 2 loops) so per diagram only one of the following id's will do anything. -> no ambiguity
* We must reconstruct the fermion loop opposite to the fermion flow. We read off the fermion flow from the indices in the propagator. Propagator(#1, #2, ...) -> fermion flow #2 -> #1, #2>#1 see QGRAF docummentation Fig. 3b and above Fig. 4.
* Thus it follows that by removeing #1 in the propagator function and finding the pair of #2 we move against the fermion flow (best way to understand draw a diagram e.g. Nb. 111 with all indices set) 


id once TopPropagator(  aux1?int_, aux2?int_, -100, ?aux3)  =       TopPropagator( [], aux2, ?aux3, 2);

*Where are in total Nf = 5 closed massless quark loops. All of them have the same contribution -> Multiply Nf. 
id once QuarkPropagator(aux1?int_, aux2?int_, -100, ?aux3)  =  Nf*QuarkPropagator( [], aux2, ?aux3, 2);

.sort


#do i = 1, 5
	
	if( match( HelpF1?([], aux1?int_, ?aux2, 2)*HelpF2?(aux1?, ?aux3) ) );
		id HelpF1?([], aux1?int_, ?aux2, 2)*HelpF2?(aux1?, ?aux3) =  HelpF1([], [], ?aux2, 2)*HelpF2([], ?aux3, 2);
		
*		Put found pair next to the closed external fermion line		
		repeat;
			id HelpF1?!{ExternalTop}(aux1?int_, ?aux2)*HelpF2?([], [], ?aux3)*HelpF3?([], ?aux4) = HelpF2([], [], ?aux3)*HelpF3([], ?aux4)*HelpF1(aux1, ?aux2);	
		endrepeat;
		
		redefine i "0";
		
	else;
		id HelpF1?([], aux1?int_, ?aux2)*HelpF2?(aux3?int_, ?aux4) = HelpF2(aux3, ?aux4)*HelpF1([], aux1, ?aux2);
	endif;
	
	.sort
#enddo

.sort
 
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Remove auxiliary numbers and symbols  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



 

*remove auxiliary number -100 and []
id HelpF?( ?aux1, -100, ?aux2) = HelpF( ?aux1, ?aux2 );
id HelpF?( ?aux1, []  , ?aux2) = HelpF( ?aux1, ?aux2 );
id HelpF?( ?aux1, []  , ?aux2) = HelpF( ?aux1, ?aux2 );
id HelpF?( ?aux1, 1   , 1    ) = HelpF(?aux1, 1);



* Remove all numbers and [] in functions.
repeat;
	id HelpF?!ExternalState(aux1?int_, ?aux2) = HelpF(?aux2);
	id HelpF?!ExternalState([], ?aux2)        = HelpF(?aux2);
endrepeat;



.sort
