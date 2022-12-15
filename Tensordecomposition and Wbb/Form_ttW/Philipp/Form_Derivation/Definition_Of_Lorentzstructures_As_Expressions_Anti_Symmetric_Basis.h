* I want to come up with a tensor basis (at least for the projector tensors) which is symmetric under the exchange of the the two gluons. The reason is that at the end the amplitude must be symmetric under the exchange of the gluons
* This choice should it also make simpler to get from one color structure to an other one by simply exchanging 1 <-> 2

*****!!!!!!!!!!!!!!!!!!! Not finished yet !!!!!!!!!!!!!!!!!!!!!!!!!

* The first 16 tensor structures belong to the Lorentzstructures which I have chosen as the basis for the projector


*################################################################################
*# symmetric under the simultaneous exchange of eps1 <-> eps2, vecp1 <-> vecp2  #
*################################################################################




*%%%%%%%%%%%%%%%%%%%%%%
* Projector tensors:  %
*%%%%%%%%%%%%%%%%%%%%%%





* I call them also S because otherwise the program becomes very messy.


*Symmetric:


*group 1:
global LorentzT1S  =  mt  *( SpinorCNumber(vecp1) - SpinorCNumber(vecp2))*( Sp(eps1, vecp3)*Sp(eps2, vecp4) - Sp(eps2, vecp3)*Sp(eps1, vecp4))                ;
global LorentzT2S  =       ( SpinorCNumber(vecp1, vecp2) - SpinorCNumber(vecp2, vecp1) )*( Sp(eps1, vecp3)*Sp(eps2, vecp4) - Sp(eps2, vecp3)*Sp(eps1, vecp4)) ;


*AntiSymmetric

* I call them also S because otherwise the program becomes very messy.

global LorentzT3S  =  mt^2*( SpinorCNumber([]) )*( Sp(eps1, vecp3)*Sp(eps2, vecp4) - Sp(eps2, vecp3)*Sp(eps1, vecp4))                                         ;
global LorentzT4S  =  mt  *( SpinorCNumber(vecp1) + SpinorCNumber(vecp2))*( Sp(eps1, vecp3)*Sp(eps2, vecp4) - Sp(eps2, vecp3)*Sp(eps1, vecp4))                ;


*group 2:
global LorentzT5S   =  mt^2*( SpinorCNumber([]) )*( Sp(eps1, vecp3)*Sp(eps2, vecp4) + Sp(eps2, vecp3)*Sp(eps1, vecp4))                                         ;
global LorentzT6S   =  mt  *( SpinorCNumber(vecp1) + SpinorCNumber(vecp2))*Sp(eps1, vecp3)*Sp(eps2, vecp3)                                                     ;
global LorentzT7S   =  mt  *( SpinorCNumber(vecp1) + SpinorCNumber(vecp2))*Sp(eps1, vecp4)*Sp(eps2, vecp4)                                                     ;
global LorentzT8S   =  mt  *( SpinorCNumber(vecp1) + SpinorCNumber(vecp2))*( Sp(eps1, vecp3)*Sp(eps2, vecp4) + Sp(eps2, vecp3)*Sp(eps1, vecp4))                ;
global LorentzT9S   =       ( SpinorCNumber(vecp1, vecp2) + SpinorCNumber(vecp2, vecp1) )*Sp(eps1, vecp3)*Sp(eps2, vecp3)                                      ;   
global LorentzT10S  =       ( SpinorCNumber(vecp1, vecp2) + SpinorCNumber(vecp2, vecp1) )*Sp(eps1, vecp4)*Sp(eps2, vecp4)                                      ; 

*AntiSymmetric


* I call them also S because otherwise the program becomes very messy.

*group 2:

global LorentzT11S  =  mt  *( SpinorCNumber(vecp1) - SpinorCNumber(vecp2))*Sp(eps1, vecp3)*Sp(eps2, vecp3)                                                     ;
global LorentzT12S  =  mt  *( SpinorCNumber(vecp1) - SpinorCNumber(vecp2))*Sp(eps1, vecp4)*Sp(eps2, vecp4)                                                     ;
global LorentzT13S  =  mt  *( SpinorCNumber(vecp1) - SpinorCNumber(vecp2))*( Sp(eps1, vecp3)*Sp(eps2, vecp4) + Sp(eps2, vecp3)*Sp(eps1, vecp4))                ;
global LorentzT14S  =       ( SpinorCNumber(vecp1, vecp2) - SpinorCNumber(vecp2, vecp1) )*Sp(eps1, vecp3)*Sp(eps2, vecp3)                                      ;   
global LorentzT15S  =       ( SpinorCNumber(vecp1, vecp2) - SpinorCNumber(vecp2, vecp1) )*Sp(eps1, vecp4)*Sp(eps2, vecp4)                                      ; 
global LorentzT16S  =       ( SpinorCNumber(vecp1, vecp2) - SpinorCNumber(vecp2, vecp1) )*( Sp(eps1, vecp3)*Sp(eps2, vecp4) + Sp(eps2, vecp3)*Sp(eps1, vecp4)) ;





