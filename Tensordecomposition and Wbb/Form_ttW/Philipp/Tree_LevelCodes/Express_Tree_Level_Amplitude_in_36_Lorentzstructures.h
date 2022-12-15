*###########################################################################################################################
***************************************************************************************************************************#
*                                                                                                                         *#
* Step 2: Take tree level amplitude and replace the tensor structure with one of the 36 independent tensor structure      *#
*                                                                                                                         *#
***************************************************************************************************************************#
*###########################################################################################################################




global AmplitudeInTensorStructure = RestoredAntiTopLine1 + ... + RestoredAntiTopLine'$NumberOfDiagrams';


*Impose momentum conservation on slashed p5 (the tensor structures defined by me do not depend on p5)
id SpinorCNumber(?aux1, vecp5, ?aux2) = -SpinorCNumber(?aux1, vecp1, ?aux2) - SpinorCNumber(?aux1, vecp2, ?aux2) - SpinorCNumber(?aux1, vecp3, ?aux2) - SpinorCNumber(?aux1, vecp4, ?aux2) ;




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Use Dirac Eq. + Dirac algebra to eliminate p3 and p4 from spinor brackets  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%





#do i = 0, 5


* Use anti commutation relation Eq. (10.80) in Schwartz to anticommute p3slashed and p4 slahed to the right position


	id SpinorCNumber(?aux1, vecp3, vecp4?, ?aux2) = -SpinorCNumber(?aux1, vecp4, vecp3, ?aux2) + 2*Sp(vecp3, vecp4)*SpinorCNumber(?aux1, ?aux2);
	id SpinorCNumber(?aux1, vecp3?, vecp4, ?aux2) = -SpinorCNumber(?aux1, vecp4, vecp3, ?aux2) + 2*Sp(vecp3, vecp4)*SpinorCNumber(?aux1, ?aux2);


* Use Dirac Eq. (10.63) in Schwartz. The factor of i_ in Schwartz is because of the derivative operator! Crosschecked with FeynCalc.
	
	
	id SpinorCNumber(?aux1, vecp3) = mt*SpinorCNumber(?aux1);
	id SpinorCNumber(vecp4, ?aux1) = -mt*SpinorCNumber(?aux1);
	
*       Use \slash{p}^2 = m^2

	id SpinorCNumber(?aux1, vecp1, vecp1, ?aux2) = 0; 
	id SpinorCNumber(?aux1, vecp2, vecp2, ?aux2) = 0;
	
	id SpinorCNumber(?aux1, vecp3, vecp3, ?aux2) = mt^2*SpinorCNumber(?aux1, ?aux2); 
	id SpinorCNumber(?aux1, vecp4, vecp4, ?aux2) = mt^2*SpinorCNumber(?aux1, ?aux2);


	
*	if( match( SpinorCNumber(?aux1, vecp3, ?aux2) ) || match( SpinorCNumber(?aux1, vecp4, ?aux2) ) );
*	
*		redefine i "0";
*	
*	endif;
	
	.sort

#enddo 




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Bring spinor bracket into the order eps1, eps2, p1, p2 (everything slashed)  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



repeat;

	id SpinorCNumber(?aux1, vecp1?, eps1, ?aux2 )        = -SpinorCNumber(?aux1, eps1, vecp1, ?aux2 ) + 2*Sp(eps1, vecp1)*SpinorCNumber(?aux1, ?aux2);
	id SpinorCNumber(?aux1, vecp1?!{eps1}, eps2, ?aux2 ) = -SpinorCNumber(?aux1, eps2, vecp1, ?aux2 ) + 2*Sp(eps2, vecp1)*SpinorCNumber(?aux1, ?aux2);
	
	id SpinorCNumber(?aux1, vecp1, vecp1, ?aux2) = 0; 
	id SpinorCNumber(?aux1, vecp2, vecp2, ?aux2) = 0;
	
endrepeat;


id Sp(eps1, vecp1) = 0;
id Sp(eps2, vecp2) = 0;
id Sp(eps1, vecp2) = 0;
id Sp(eps2, vecp1) = 0;
	
.sort


repeat;
	id SpinorCNumber(?aux1, vecp2, vecp1, ?aux2) = - SpinorCNumber(?aux1, vecp1, vecp2, ?aux2) + 2*vecp1.vecp2*SpinorCNumber(?aux1, ?aux2); 
endrepeat;



id SpinorCNumber() = SpinorCNumber([]);


.sort


id Sp(eps1, vecp1) = 0;
id Sp(eps2, vecp2) = 0;
id Sp(eps1, vecp2) = 0;
id Sp(eps2, vecp1) = 0;


.sort


*%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Insert tensor structures  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#include Modules_Tree_Level_Computation/Definition_Of_Lorentzstructures_As_Id.h

id Sp(vecp1?, vecp2?) = vecp1.vecp2;

.sort
