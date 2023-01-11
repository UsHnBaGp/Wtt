*###################################################################################################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
* Replacement of loop momenta with linear combinations of inverse propagators and propagtor shifts on integrals   %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#	
*###################################################################################################################



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Replace scalar products of loop momenta  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


* The replacement rules for each topology were calculated in Mathematica
repeat;			
	#include Modules_One_Loop_Calculation/Replace_Loop_Momenta_with_Inverse_Propagators.h
endrepeat;
		
			
.sort
		
symbols InverseP1, ..., InverseP5;
			


*Unify propagator names (allowed because integrals are linear)		
#do TopoName = {PentaboxGGtoTTHTopologyA, PentaboxGGtoTTHTopologyAx12, PentaboxGGtoTTHTopologyB, PentaboxGGtoTTHTopologyBx12, PentaboxGGtoTTHTopologyBx34, PentaboxGGtoTTHTopologyBx12x34, PentaboxGGtoTTHTopologyC, PentaboxGGtoTTHTopologyCx12, PentaboxGGtoTTHTopologyCx34, PentaboxGGtoTTHTopologyCx12x34, PentaboxGGtoTTHTopologyD, PentaboxGGtoTTHTopologyDx12}
		
	#do PropagatorNumber = 1, 5
				
		id 'TopoName'P'PropagatorNumber'^aux1?int_ = InverseP'PropagatorNumber'^aux1;
			
	#enddo
#enddo
		
			
.sort

 
		
id InverseP1^aux6?int_*INT(?aux0, [], aux1?int_, aux2?int_, aux3?int_, aux4?int_, aux5?int_) = INT(?aux0, [], aux1 -aux6, aux2, aux3, aux4, aux5);
id InverseP2^aux6?int_*INT(?aux0, [], aux1?int_, aux2?int_, aux3?int_, aux4?int_, aux5?int_) = INT(?aux0, [], aux1, aux2 -aux6, aux3, aux4, aux5);
id InverseP3^aux6?int_*INT(?aux0, [], aux1?int_, aux2?int_, aux3?int_, aux4?int_, aux5?int_) = INT(?aux0, [], aux1, aux2, aux3 -aux6, aux4, aux5);
id InverseP4^aux6?int_*INT(?aux0, [], aux1?int_, aux2?int_, aux3?int_, aux4?int_, aux5?int_) = INT(?aux0, [], aux1, aux2, aux3, aux4 -aux6, aux5);
id InverseP5^aux6?int_*INT(?aux0, [], aux1?int_, aux2?int_, aux3?int_, aux4?int_, aux5?int_) = INT(?aux0, [], aux1, aux2, aux3, aux4, aux5 -aux6);
		

*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Perform propagator shifts  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
	
*Reduze has the format INT(TopoName, Number of Propagators, SectorID, Number of Propagators, Number of irreducible scalar products, [], Propagator Powers)			
id INT(auxTopo?, ?aux1, [], ?aux2) = INT(auxTopo, 0, 0, 0, 0, [], ?aux2);


*Count number of propagators and irreducible numerators (adopt to reduze notation)			
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?pos_, aux5?, aux6?, aux7?, aux8? ) = INT(auxTopo, aux0 + aux4, aux1 + 1, aux2 + aux4, aux3, [], aux4, aux5, aux6, aux7, aux8 );
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?neg_, aux5?, aux6?, aux7?, aux8? ) = INT(auxTopo, aux0, aux1, aux2, aux3 - aux4, [], aux4, aux5, aux6, aux7, aux8 );
			
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?, aux5?pos_, aux6?, aux7?, aux8? ) = INT(auxTopo, aux0 + aux5, aux1 + 2, aux2 + aux5, aux3, [], aux4, aux5, aux6, aux7, aux8 );
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?, aux5?neg_, aux6?, aux7?, aux8? ) = INT(auxTopo, aux0, aux1, aux2, aux3 - aux5, [], aux4, aux5, aux6, aux7, aux8 );
			
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?, aux5?, aux6?pos_, aux7?, aux8? ) = INT(auxTopo, aux0 + aux6, aux1 + 4, aux2 + aux6, aux3, [], aux4, aux5, aux6, aux7, aux8 );
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?, aux5?, aux6?neg_, aux7?, aux8? ) = INT(auxTopo, aux0, aux1, aux2, aux3 - aux6, [], aux4, aux5, aux6, aux7, aux8 );
			
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?, aux5?, aux6?, aux7?pos_, aux8? ) = INT(auxTopo, aux0 + aux7, aux1 + 8, aux2 + aux7, aux3, [], aux4, aux5, aux6, aux7, aux8 );
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?, aux5?, aux6?, aux7?neg_, aux8? ) = INT(auxTopo, aux0, aux1, aux2, aux3 - aux7, [], aux4, aux5, aux6, aux7, aux8 );
			
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?, aux5?, aux6?, aux7?, aux8?pos_ ) = INT(auxTopo, aux0 + aux8, aux1 + 16, aux2 + aux8, aux3, [], aux4, aux5, aux6, aux7, aux8 );
id INT(auxTopo?, aux0?, aux1?, aux2?, aux3?, [], aux4?, aux5?, aux6?, aux7?, aux8?neg_ ) = INT(auxTopo, aux0, aux1, aux2, aux3 - aux8, [], aux4, aux5, aux6, aux7, aux8 );
			
			
.sort			
