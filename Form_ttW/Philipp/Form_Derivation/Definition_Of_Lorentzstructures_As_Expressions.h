*#######################################################################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
* This file contains the definition of independent Lorentzstructures in D dimensions  %#  
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*#######################################################################################



* The choice of labeling matches with the my notes in Zettlr for the linearly independent once in D=4. 




*%%%%%%%%%%%%%%%%%%%%%%%%
* Tree level structures %
*%%%%%%%%%%%%%%%%%%%%%%%%


* The fist 16 are linearly independent in D=4

* 0 gamma structures:

global LorentzT1  =  SpinorCNumber([])*Sp(eps1, vecp3)*Sp(eps2, vecp3)     ;
global LorentzT2  =  SpinorCNumber([])*Sp(eps1, vecp3)*Sp(eps2, vecp4)     ;
global LorentzT3  =  SpinorCNumber([])*Sp(eps1, vecp4)*Sp(eps2, vecp3)     ;
global LorentzT4  =  SpinorCNumber([])*Sp(eps1, vecp4)*Sp(eps2, vecp4)     ;

* 1 gamma structures:
global LorentzT5  =  SpinorCNumber(vecp1)*Sp(eps1, vecp3)*Sp(eps2, vecp3)  ;
global LorentzT6  =  SpinorCNumber(vecp1)*Sp(eps1, vecp3)*Sp(eps2, vecp4)  ;
global LorentzT7  =  SpinorCNumber(vecp1)*Sp(eps1, vecp4)*Sp(eps2, vecp3)  ;
global LorentzT8  =  SpinorCNumber(vecp1)*Sp(eps1, vecp4)*Sp(eps2, vecp4)  ;

global LorentzT9  =  SpinorCNumber(vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp3)  ;
global LorentzT10 =  SpinorCNumber(vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp4)  ;
global LorentzT11 =  SpinorCNumber(vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp3)  ;
global LorentzT12 =  SpinorCNumber(vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp4)  ;

* 2 gamma structures
global LorentzT13 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp3)  ;
global LorentzT14 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp4)  ;
global LorentzT15 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp3)  ;
global LorentzT16 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp4)  ;




* Now I make the replacement rules for the remaining 20 Lorentz structures





* 0 gamma structures:
global LorentzT17 =  SpinorCNumber([])*Sp(eps1, eps2)      ;


* 1 gamma structures:
global LorentzT18 =  SpinorCNumber(vecp1)*Sp(eps1, eps2)   ;
global LorentzT19 =  SpinorCNumber(vecp2)*Sp(eps1, eps2)   ; 

global LorentzT20 =  SpinorCNumber(eps1)*Sp(eps2, vecp3)   ;
global LorentzT21 =  SpinorCNumber(eps1)*Sp(eps2, vecp4)   ;
global LorentzT22 =  SpinorCNumber(eps2)*Sp(eps1, vecp3)   ;
global LorentzT23 =  SpinorCNumber(eps2)*Sp(eps1, vecp4)   ;


* 2 gamma structures:
global LorentzT24 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, eps2)   ;
global LorentzT25 =  SpinorCNumber(eps1, eps2)                    ;

global LorentzT26 =  SpinorCNumber(eps1, vecp1)*Sp(eps2, vecp3)   ;
global LorentzT27 =  SpinorCNumber(eps1, vecp2)*Sp(eps2, vecp3)   ;
global LorentzT28 =  SpinorCNumber(eps1, vecp1)*Sp(eps2, vecp4)   ;
global LorentzT29 =  SpinorCNumber(eps1, vecp2)*Sp(eps2, vecp4)   ;

global LorentzT30 =  SpinorCNumber(eps2, vecp1)*Sp(eps1, vecp3)   ;
global LorentzT31 =  SpinorCNumber(eps2, vecp2)*Sp(eps1, vecp3)   ;
global LorentzT32 =  SpinorCNumber(eps2, vecp1)*Sp(eps1, vecp4)   ;
global LorentzT33 =  SpinorCNumber(eps2, vecp2)*Sp(eps1, vecp4)   ;

* 3 gamma structures:
global LorentzT34 =  SpinorCNumber(eps1, eps2, vecp1)            ;
global LorentzT35 =  SpinorCNumber(eps1, eps2, vecp2)            ;

* 4 gamma structures:
global LorentzT36 =  SpinorCNumber(eps1, eps2, vecp1, vecp2)    ;






*%%%%%%%%%%%%%%%%%%%%
* 1 loop strucutres %
*%%%%%%%%%%%%%%%%%%%%




* 1 gamma structures:

global LorentzT37  =  SpinorCNumber([])*Sp(eps1, vecp3)*Sp(eps2, vecp3)     ;
global LorentzT38  =  SpinorCNumber([])*Sp(eps1, vecp3)*Sp(eps2, vecp4)     ;
global LorentzT39  =  SpinorCNumber([])*Sp(eps1, vecp4)*Sp(eps2, vecp3)     ;
global LorentzT40  =  SpinorCNumber([])*Sp(eps1, vecp4)*Sp(eps2, vecp4)     ;
global LorentzT41  =  SpinorCNumber([])*Sp(eps1, eps2)      ;

* 1 gamma structures:
global LorentzT5  =  SpinorCNumber(vecp1)*Sp(eps1, vecp3)*Sp(eps2, vecp3)  ;
global LorentzT6  =  SpinorCNumber(vecp1)*Sp(eps1, vecp3)*Sp(eps2, vecp4)  ;
global LorentzT7  =  SpinorCNumber(vecp1)*Sp(eps1, vecp4)*Sp(eps2, vecp3)  ;
global LorentzT8  =  SpinorCNumber(vecp1)*Sp(eps1, vecp4)*Sp(eps2, vecp4)  ;

global LorentzT9  =  SpinorCNumber(vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp3)  ;
global LorentzT10 =  SpinorCNumber(vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp4)  ;
global LorentzT11 =  SpinorCNumber(vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp3)  ;
global LorentzT12 =  SpinorCNumber(vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp4)  ;

* 2 gamma structures
global LorentzT13 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp3)  ;
global LorentzT14 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp3)*Sp(eps2, vecp4)  ;
global LorentzT15 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp3)  ;
global LorentzT16 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, vecp4)*Sp(eps2, vecp4)  ;




* Now I make the replacement rules for the remaining 20 Lorentz structures





* 0 gamma structures:



* 1 gamma structures:
global LorentzT18 =  SpinorCNumber(vecp1)*Sp(eps1, eps2)   ;
global LorentzT19 =  SpinorCNumber(vecp2)*Sp(eps1, eps2)   ; 

global LorentzT20 =  SpinorCNumber(eps1)*Sp(eps2, vecp3)   ;
global LorentzT21 =  SpinorCNumber(eps1)*Sp(eps2, vecp4)   ;
global LorentzT22 =  SpinorCNumber(eps2)*Sp(eps1, vecp3)   ;
global LorentzT23 =  SpinorCNumber(eps2)*Sp(eps1, vecp4)   ;


* 2 gamma structures:
global LorentzT24 =  SpinorCNumber(vecp1, vecp2)*Sp(eps1, eps2)   ;
global LorentzT25 =  SpinorCNumber(eps1, eps2)                    ;

global LorentzT26 =  SpinorCNumber(eps1, vecp1)*Sp(eps2, vecp3)   ;
global LorentzT27 =  SpinorCNumber(eps1, vecp2)*Sp(eps2, vecp3)   ;
global LorentzT28 =  SpinorCNumber(eps1, vecp1)*Sp(eps2, vecp4)   ;
global LorentzT29 =  SpinorCNumber(eps1, vecp2)*Sp(eps2, vecp4)   ;

global LorentzT30 =  SpinorCNumber(eps2, vecp1)*Sp(eps1, vecp3)   ;
global LorentzT31 =  SpinorCNumber(eps2, vecp2)*Sp(eps1, vecp3)   ;
global LorentzT32 =  SpinorCNumber(eps2, vecp1)*Sp(eps1, vecp4)   ;
global LorentzT33 =  SpinorCNumber(eps2, vecp2)*Sp(eps1, vecp4)   ;

* 3 gamma structures:
global LorentzT34 =  SpinorCNumber(eps1, eps2, vecp1)            ;
global LorentzT35 =  SpinorCNumber(eps1, eps2, vecp2)            ;

* 4 gamma structures:
global LorentzT36 =  SpinorCNumber(eps1, eps2, vecp1, vecp2)    ;










