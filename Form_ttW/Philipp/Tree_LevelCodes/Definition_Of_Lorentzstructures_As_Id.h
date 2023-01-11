* The choice of labeling matches with the my notes in Zettlr for the linearly independent once in D=4. 



* The first 16 tensor structures belong to the Lorentzstructures which I have chosen as the basis for the projector



* 0 gamma structures:

id SpinorCNumber([])*Sp(eps1, vecp3)*Sp(eps2, vecp3)    = TLorentz(1)   ;
id SpinorCNumber([])*Sp(eps1, vecp3)*Sp(eps2, vecp4)    = TLorentz(2)   ;
id SpinorCNumber([])*Sp(eps1, vecp4)*Sp(eps2, vecp3)    = TLorentz(3)   ;
id SpinorCNumber([])*Sp(eps1, vecp4)*Sp(eps2, vecp4)    = TLorentz(4)   ;

* 1 gamma structures:
id SpinorCNumber(vecp1)*Sp(eps1, vecp3)*Sp(eps2, vecp3) = TLorentz(5)   ;
id SpinorCNumber(vecp1)*Sp(eps1, vecp3)*Sp(eps2, vecp4) = TLorentz(6)   ;
id SpinorCNumber(vecp1)*Sp(eps1, vecp4)*Sp(eps2, vecp3) = TLorentz(7)   ;
id SpinorCNumber(vecp1)*Sp(eps1, vecp4)*Sp(eps2, vecp4) = TLorentz(8)   ;

id SpinorCNumber(vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp3) = TLorentz(9)   ;
id SpinorCNumber(vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp4) = TLorentz(10)  ;
id SpinorCNumber(vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp3) = TLorentz(11)  ;
id SpinorCNumber(vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp4) = TLorentz(12)  ;

* 2 gamma structures
id SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp3) = TLorentz(13)  ;
id SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp4) = TLorentz(14)  ;
id SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp3) = TLorentz(15)  ;
id SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp4) = TLorentz(16)  ;






* Now I make the replacement rules for the remaining 20 Lorentz structures





* 0 gamma structures:
id SpinorCNumber([])*Sp(eps1, eps2)    = TLorentz(17)  ;


* 1 gamma structures:
id SpinorCNumber(vecp1)*Sp(eps1, eps2) = TLorentz(18)  ;
id SpinorCNumber(vecp2)*Sp(eps1, eps2) = TLorentz(19)  ; 

id SpinorCNumber(eps1)*Sp(eps2, vecp3) = TLorentz(20)  ;
id SpinorCNumber(eps1)*Sp(eps2, vecp4) = TLorentz(21)  ;
id SpinorCNumber(eps2)*Sp(eps1, vecp3) = TLorentz(22)  ;
id SpinorCNumber(eps2)*Sp(eps1, vecp4) = TLorentz(23)  ;


* 2 gamma structures:
id SpinorCNumber(vecp1, vecp2)*Sp(eps1, eps2) = TLorentz(24)  ;
id SpinorCNumber(eps1, eps2)                  = TLorentz(25)  ;

id SpinorCNumber(eps1, vecp1)*Sp(eps2, vecp3) = TLorentz(26)  ;
id SpinorCNumber(eps1, vecp2)*Sp(eps2, vecp3) = TLorentz(27)  ;
id SpinorCNumber(eps1, vecp1)*Sp(eps2, vecp4) = TLorentz(28)  ;
id SpinorCNumber(eps1, vecp2)*Sp(eps2, vecp4) = TLorentz(29)  ;

id SpinorCNumber(eps2, vecp1)*Sp(eps1, vecp3) = TLorentz(30)  ;
id SpinorCNumber(eps2, vecp2)*Sp(eps1, vecp3) = TLorentz(31)  ;
id SpinorCNumber(eps2, vecp1)*Sp(eps1, vecp4) = TLorentz(32)  ;
id SpinorCNumber(eps2, vecp2)*Sp(eps1, vecp4) = TLorentz(33)  ;

* 3 gamma structures:
id SpinorCNumber(eps1, eps2, vecp1) = TLorentz(34)           ;
id SpinorCNumber(eps1, eps2, vecp2) = TLorentz(35)           ;

* 4 gamma structures:
id SpinorCNumber(eps1, eps2, vecp1, vecp2) = TLorentz(36)    ;

