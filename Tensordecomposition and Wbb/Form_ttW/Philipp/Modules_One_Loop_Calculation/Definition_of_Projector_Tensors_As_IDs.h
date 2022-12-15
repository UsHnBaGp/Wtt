*##########################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*    Definition of projector tensors     %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*##########################################




*%%%%%%%%%%
*group 1: %
*%%%%%%%%%%


*Symmetric:

id ProjectorTensor(1) =   mt  *( SpinorCNumber(vecp1) - SpinorCNumber(vecp2))*( Sp(eps1, vecp3)*Sp(eps2, vecp4) - Sp(eps2, vecp3)*Sp(eps1, vecp4))                ;
id ProjectorTensor(2) =        ( SpinorCNumber(vecp1, vecp2) - SpinorCNumber(vecp2, vecp1) )*( Sp(eps1, vecp3)*Sp(eps2, vecp4) - Sp(eps2, vecp3)*Sp(eps1, vecp4)) ;


*AntiSymmetric:

id ProjectorTensor(3) =   mt^2*( SpinorCNumber([]) )*( Sp(eps1, vecp3)*Sp(eps2, vecp4) - Sp(eps2, vecp3)*Sp(eps1, vecp4))                                         ;
id ProjectorTensor(4) =   mt  *( SpinorCNumber(vecp1) + SpinorCNumber(vecp2))*( Sp(eps1, vecp3)*Sp(eps2, vecp4) - Sp(eps2, vecp3)*Sp(eps1, vecp4))                ;


*%%%%%%%%%%
*group 2: %
*%%%%%%%%%%


id ProjectorTensor(5)  =   mt^2*( SpinorCNumber([]) )*( Sp(eps1, vecp3)*Sp(eps2, vecp4) + Sp(eps2, vecp3)*Sp(eps1, vecp4))                                         ;
id ProjectorTensor(6)  =   mt  *( SpinorCNumber(vecp1) + SpinorCNumber(vecp2))*Sp(eps1, vecp3)*Sp(eps2, vecp3)                                                     ;
id ProjectorTensor(7)  =   mt  *( SpinorCNumber(vecp1) + SpinorCNumber(vecp2))*Sp(eps1, vecp4)*Sp(eps2, vecp4)                                                     ;
id ProjectorTensor(8)  =   mt  *( SpinorCNumber(vecp1) + SpinorCNumber(vecp2))*( Sp(eps1, vecp3)*Sp(eps2, vecp4) + Sp(eps2, vecp3)*Sp(eps1, vecp4))                ;
id ProjectorTensor(9)  =        ( SpinorCNumber(vecp1, vecp2) + SpinorCNumber(vecp2, vecp1) )*Sp(eps1, vecp3)*Sp(eps2, vecp3)                                      ;   
id ProjectorTensor(10) =        ( SpinorCNumber(vecp1, vecp2) + SpinorCNumber(vecp2, vecp1) )*Sp(eps1, vecp4)*Sp(eps2, vecp4)                                      ; 




*AntiSymmetric:

id ProjectorTensor(11) =   mt  *( SpinorCNumber(vecp1) - SpinorCNumber(vecp2))*Sp(eps1, vecp3)*Sp(eps2, vecp3)                                                     ;
id ProjectorTensor(12) =   mt  *( SpinorCNumber(vecp1) - SpinorCNumber(vecp2))*Sp(eps1, vecp4)*Sp(eps2, vecp4)                                                     ;
id ProjectorTensor(13) =   mt  *( SpinorCNumber(vecp1) - SpinorCNumber(vecp2))*( Sp(eps1, vecp3)*Sp(eps2, vecp4) + Sp(eps2, vecp3)*Sp(eps1, vecp4))                ;
id ProjectorTensor(14) =        ( SpinorCNumber(vecp1, vecp2) - SpinorCNumber(vecp2, vecp1) )*Sp(eps1, vecp3)*Sp(eps2, vecp3)                                      ;   
id ProjectorTensor(15) =        ( SpinorCNumber(vecp1, vecp2) - SpinorCNumber(vecp2, vecp1) )*Sp(eps1, vecp4)*Sp(eps2, vecp4)                                      ; 
id ProjectorTensor(16) =        ( SpinorCNumber(vecp1, vecp2) - SpinorCNumber(vecp2, vecp1) )*( Sp(eps1, vecp3)*Sp(eps2, vecp4) + Sp(eps2, vecp3)*Sp(eps1, vecp4)) ;






*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Definition of complex conjugated tensor structures %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%






*%%%%%%%%%%
*group 1: %
*%%%%%%%%%%


*Symmetric:

id ProjectorTensorC(1) =   mt  *( SpinorCNumberC(vecp1) - SpinorCNumberC(vecp2))*( Sp(eps1C, vecp3)*Sp(eps2C, vecp4) - Sp(eps2C, vecp3)*Sp(eps1C, vecp4))                ;
id ProjectorTensorC(2) =        ( SpinorCNumberC(vecp2, vecp1) - SpinorCNumberC(vecp1, vecp2) )*( Sp(eps1C, vecp3)*Sp(eps2C, vecp4) - Sp(eps2C, vecp3)*Sp(eps1C, vecp4)) ;


*AntiSymmetric:

id ProjectorTensorC(3) =   mt^2*( SpinorCNumberC([]) )*( Sp(eps1C, vecp3)*Sp(eps2C, vecp4) - Sp(eps2C, vecp3)*Sp(eps1C, vecp4))                                         ;
id ProjectorTensorC(4) =   mt  *( SpinorCNumberC(vecp1) + SpinorCNumberC(vecp2))*( Sp(eps1C, vecp3)*Sp(eps2C, vecp4) - Sp(eps2C, vecp3)*Sp(eps1C, vecp4))                ;


*%%%%%%%%%%
*group 2: %
*%%%%%%%%%%


id ProjectorTensorC(5)  =   mt^2*( SpinorCNumberC([]) )*( Sp(eps1C, vecp3)*Sp(eps2C, vecp4) + Sp(eps2C, vecp3)*Sp(eps1C, vecp4))                                         ;
id ProjectorTensorC(6)  =   mt  *( SpinorCNumberC(vecp1) + SpinorCNumberC(vecp2))*Sp(eps1C, vecp3)*Sp(eps2C, vecp3)                                                     ;
id ProjectorTensorC(7)  =   mt  *( SpinorCNumberC(vecp1) + SpinorCNumberC(vecp2))*Sp(eps1C, vecp4)*Sp(eps2C, vecp4)                                                     ;
id ProjectorTensorC(8)  =   mt  *( SpinorCNumberC(vecp1) + SpinorCNumberC(vecp2))*( Sp(eps1C, vecp3)*Sp(eps2C, vecp4) + Sp(eps2C, vecp3)*Sp(eps1C, vecp4))                ;
id ProjectorTensorC(9)  =        ( SpinorCNumberC(vecp1, vecp2) + SpinorCNumberC(vecp2, vecp1) )*Sp(eps1C, vecp3)*Sp(eps2C, vecp3)                                      ;   
id ProjectorTensorC(10) =        ( SpinorCNumberC(vecp1, vecp2) + SpinorCNumberC(vecp2, vecp1) )*Sp(eps1C, vecp4)*Sp(eps2C, vecp4)                                      ; 




*AntiSymmetric:

id ProjectorTensorC(11) =   mt  *( SpinorCNumberC(vecp1) - SpinorCNumberC(vecp2))*Sp(eps1C, vecp3)*Sp(eps2C, vecp3)                                                     ;
id ProjectorTensorC(12) =   mt  *( SpinorCNumberC(vecp1) - SpinorCNumberC(vecp2))*Sp(eps1C, vecp4)*Sp(eps2C, vecp4)                                                     ;
id ProjectorTensorC(13) =   mt  *( SpinorCNumberC(vecp1) - SpinorCNumberC(vecp2))*( Sp(eps1C, vecp3)*Sp(eps2C, vecp4) + Sp(eps2C, vecp3)*Sp(eps1C, vecp4))                ;
id ProjectorTensorC(14) =        ( SpinorCNumberC(vecp2, vecp1) - SpinorCNumberC(vecp1, vecp2) )*Sp(eps1C, vecp3)*Sp(eps2C, vecp3)                                      ;   
id ProjectorTensorC(15) =        ( SpinorCNumberC(vecp2, vecp1) - SpinorCNumberC(vecp1, vecp2) )*Sp(eps1C, vecp4)*Sp(eps2C, vecp4)                                      ; 
id ProjectorTensorC(16) =        ( SpinorCNumberC(vecp2, vecp1) - SpinorCNumberC(vecp1, vecp2) )*( Sp(eps1C, vecp3)*Sp(eps2C, vecp4) + Sp(eps2C, vecp3)*Sp(eps1C, vecp4)) ;


