#-
#:maxtermsize 2000000
#:workspace 5G
off statistics;

***************************
**** To adjust **********
************************

#define lengthT "24"
#define NrH "9"
#define NrHM "3"

*************************
*** Definitions ***
**************************

autodeclare function diagram;
autodeclare vector p;
cfunction den,sqrt,num,ratio,del;
autodeclare symbol s,gram,m,g,d,helpersym,D,prefac,F,H;
autodeclare index helperidx;
function PL,PR,f,h;
index i,j;
Dimension D;
autodeclare index mu;
Dimension 3;
autodeclare index ci;

symbol imag;

.sort
.global

**************************************
*** Define Prefactor *****
***********************************

********************
**** even part ****
*******************

*** for LL pull out v_L(p1+p2)vbar_L***
global prefacLL1=num((g_(1,p3)-mt)*PR(1)*PL(1)*(g_(1,p4)+mt)*PR(1)*(g_(1,p1)+g_(1,p2))*PL(1))*den((g_(2,p3)-mt)*PR(2)*(g_(2,p1)+g_(2,p2))*PL(2)*(g_(2,p4)+mt)*PR(2)*(g_(2,p1)+g_(2,p2))*PL(2));
global prefacLLP1=num((g_(1,p3)-mt)*PR(1)*g_(1,p1)*PL(1)*(g_(1,p4)+mt)*PR(1)*(g_(1,p1)+g_(1,p2))*PL(1)-32*e_(p3,p4,p1,p2))*den((g_(2,p3)-mt)*PR(2)*(g_(2,p1)+g_(2,p2))*PL(2)*(g_(2,p4)+mt)*PR(2)*(g_(2,p1)+g_(2,p2))*PL(2));
global prefacLLP2=num((g_(1,p3)-mt)*PR(1)*g_(1,p2)*PL(1)*(g_(1,p4)+mt)*PR(1)*(g_(1,p1)+g_(1,p2))*PL(1)+32*e_(p3,p4,p1,p2))*den((g_(2,p3)-mt)*PR(2)*(g_(2,p1)+g_(2,p2))*PL(2)*(g_(2,p4)+mt)*PR(2)*(g_(2,p1)+g_(2,p2))*PL(2));
argument;
id PL(helperidx?)=g7_(helperidx);
endargument;
.sort

*** for RL pull out v_Lvbar_R**
global prefacRL1=1;
global prefacRLP1=num((g_(1,p3)-mt)*PR(1)*g_(1,p1)*PL(1)*(g_(1,p4)+mt)*PR(1)*PL(1))*den((g_(2,p3)-mt)*PR(2)*PL(2)*(g_(2,p4)+mt)*PR(2)*PL(2));
global prefacRLP2=num((g_(1,p3)-mt)*PR(1)*g_(1,p2)*PL(1)*(g_(1,p4)+mt)*PR(1)*PL(1))*den((g_(2,p3)-mt)*PR(2)*PL(2)*(g_(2,p4)+mt)*PR(2)*PL(2));
argument;
id PL(helperidx?)=PR(helperidx);
endargument;
.sort


argument;
id PR(helperidx?)=g6_(helperidx);
endargument;
.sort
argument;
trace4,1;
trace4,2;
endargument;
.sort

**** Kinematics ***
#include FivePointKinematics.h
.sort

*** Polyratfun ****

id num(helpersym?) = ratio(helpersym,1);
id den(helpersym?) = ratio(1,helpersym);
.sort
PolyRatFun ratio;
.sort
PolyRatFun ;
.sort
id ratio(helpersym1?,helpersym2?) = num(helpersym1)*den(helpersym2);
.sort
factarg num;
chainout num;
factarg den;
chainout den;
id den(helpersym1?number_) = 1/helpersym1;
id num(helpersym1?number_) = helpersym1;
.sort
.store

**************************************
*** Combine Formfactors *****
***********************************

global HMassiveLL'NrHM'=prefacLL1*h('NrHM')+prefacLLP1*h('NrHM'+3)+prefacLLP2*h('NrHM'+6);
global HMassiveRL'NrHM'=prefacRL1*h('NrHM')+prefacRLP1*h('NrHM'+3)+prefacRLP2*h('NrHM'+6);
#do i=1,'NrH'
id h('i')=H'i'sym;
#enddo
.sort

**************************************
*** Import Helicityormfactors *****
***********************************

#do i=1,'NrH'
#include HelicityFormFactors/H'i'sym.h
#enddo
.sort


********************************
*** Simplify ***
********************************
bracket gs,gW,den,d_,i_;  
.sort

factarg num;
chainout num;
.sort

id num(s14^2*s23^2 - 2*s13*s14*s23*s24 + s13^2*s24^2 + 2*s12*s14*s23*s24 + 2*s12*s14*s23^2 + 2*s12*s14^2*s23 + 2*s12*s13*s24^2 + 2*s12*s13*s23*s24 + 2*s12*s13*s14*s24 + 2*s12*s13*s14*s23 + 2*s12*s13^2*s24 + s12^2*s24^2 + 2*s12^2*s23*s24 + s12^2*s23^2 + 2*s12^2*s14*s24 + 4*s12^2*s14*s23 + s12^2*s14^2 + 4*s12^2*s13*s24 + 2*s12^2*s13*s23 + 2*s12^2*s13*s14 + s12^2*s13^2 + 2*s12^3*s24 + 2*s12^3*s23 + 2*s12^3*s14 + 2*s12^3*s13 + s12^4 - 2*mw^2*s12*s14*s23 - 2*mw^2*s12*s13*s24 - 2*mw^2*s12^2*s24 - 2*mw^2*s12^2*s23 - 2*mw^2*s12^2*s14 - 2*mw^2*s12^2*s13 - 2*mw^2*s12^3 + mw^4*s12^2 + 2*mt^2*s14*s23*s24 - 2*mt^2*s14*s23^2 - 2*mt^2*s14^2*s23 - 2*mt^2*s13*s24^2 + 2*mt^2*s13*s23*s24 + 2*mt^2*s13*s14*s24 + 2*mt^2*s13*s14*s23 - 2*mt^2*s13^2*s24 - 2*mt^2*s12*s24^2 - 4*mt^2*s12*s23*s24 - 2*mt^2*s12*s23^2 - 8*mt^2*s12*s14*s23 - 2*mt^2*s12*s14^2 - 8*mt^2*s12*s13*s24 - 4*mt^2*s12*s13*s14- 2*mt^2*s12*s13^2 - 6*mt^2*s12^2*s24 - 6*mt^2*s12^2*s23 - 6*mt^2*s12^2*s14 - 6*mt^2*s12^2*s13 - 4*mt^2*s12^3 + 2*mt^2*mw^2*s12*s24 + 2*mt^2*mw^2*s12*s23 + 2*mt^2*mw^2*s12*s14 + 2*mt^2*mw^2*s12*s13 + 4*mt^2*mw^2*s12^2 + mt^4*s24^2 - 2*mt^4*s23*s24 + mt^4*s23^2 - 2*mt^4*s14*s24 + 2*mt^4*s14*s23 + mt^4*s14^2 + 2*mt^4*s13*s24 - 2*mt^4*s13*s23 - 2*mt^4*s13*s14 + mt^4*s13^2 + 4*mt^4*s12*s24 + 4*mt^4*s12*s23+ 4*mt^4*s12*s14 + 4*mt^4*s12*s13 + 4*mt^4*s12^2 - 4*mt^4*mw^2*s12)=num(gram);
.sort

id num(helpersym?) = ratio(helpersym,1);
id den(helpersym?) = ratio(1,helpersym);
.sort
PolyRatFun ratio;
.sort
PolyRatFun ;
.sort
id ratio(helpersym1?,helpersym2?) = num(helpersym1)*den(helpersym2);
.sort
factarg num;
chainout num;
factarg den;
chainout den;
id den(helpersym1?number_) = 1/helpersym1 ;
.sort

id num(s14^2*s23^2 - 2*s13*s14*s23*s24 + s13^2*s24^2 + 2*s12*s14*s23*s24 + 2*s12*s14*s23^2 + 2*s12*s14^2*s23 + 2*s12*s13*s24^2 + 2*s12*s13*s23*s24 + 2*s12*s13*s14*s24 + 2*s12*s13*s14*s23 + 2*s12*s13^2*s24 + s12^2*s24^2 + 2*s12^2*s23*s24 + s12^2*s23^2 + 2*s12^2*s14*s24 + 4*s12^2*s14*s23 + s12^2*s14^2 + 4*s12^2*s13*s24 + 2*s12^2*s13*s23 + 2*s12^2*s13*s14 + s12^2*s13^2 + 2*s12^3*s24 + 2*s12^3*s23 + 2*s12^3*s14 + 2*s12^3*s13 + s12^4 - 2*mw^2*s12*s14*s23 - 2*mw^2*s12*s13*s24 - 2*mw^2*s12^2*s24 - 2*mw^2*s12^2*s23 - 2*mw^2*s12^2*s14 - 2*mw^2*s12^2*s13 - 2*mw^2*s12^3 + mw^4*s12^2 + 2*mt^2*s14*s23*s24 - 2*mt^2*s14*s23^2 - 2*mt^2*s14^2*s23 - 2*mt^2*s13*s24^2 + 2*mt^2*s13*s23*s24 + 2*mt^2*s13*s14*s24 + 2*mt^2*s13*s14*s23 - 2*mt^2*s13^2*s24 - 2*mt^2*s12*s24^2 - 4*mt^2*s12*s23*s24 - 2*mt^2*s12*s23^2 - 8*mt^2*s12*s14*s23 - 2*mt^2*s12*s14^2 - 8*mt^2*s12*s13*s24 - 4*mt^2*s12*s13*s14- 2*mt^2*s12*s13^2 - 6*mt^2*s12^2*s24 - 6*mt^2*s12^2*s23 - 6*mt^2*s12^2*s14 - 6*mt^2*s12^2*s13 - 4*mt^2*s12^3 + 2*mt^2*mw^2*s12*s24 + 2*mt^2*mw^2*s12*s23 + 2*mt^2*mw^2*s12*s14 + 2*mt^2*mw^2*s12*s13 + 4*mt^2*mw^2*s12^2 + mt^4*s24^2 - 2*mt^4*s23*s24 + mt^4*s23^2 - 2*mt^4*s14*s24 + 2*mt^4*s14*s23 + mt^4*s14^2 + 2*mt^4*s13*s24 - 2*mt^4*s13*s23 - 2*mt^4*s13*s14 + mt^4*s13^2 + 4*mt^4*s12*s24 + 4*mt^4*s12*s23+ 4*mt^4*s12*s14 + 4*mt^4*s12*s13 + 4*mt^4*s12^2 - 4*mt^4*mw^2*s12)=num(gram);
.sort

id num(helpersym?) = ratio(helpersym,1);
id den(helpersym?) = ratio(1,helpersym);
.sort
PolyRatFun ratio;
.sort
PolyRatFun ;
.sort
id ratio(helpersym1?,helpersym2?) = num(helpersym1)*den(helpersym2);
.sort
factarg num;
chainout num;
factarg den;
chainout den;
id den(helpersym1?number_) = 1/helpersym1 ;
id num(helpersym1?number_) = helpersym1;
.sort


#write <HelicityFormFactors/HMassiveLL'NrHM'.h> "id HMassiveLL'NrHM'=  %E ", HMassiveLL'NrHM';
#write <HelicityFormFactors/HMassiveRL'NrHM'.h> "id HMassiveRL'NrHM'=  %E ", HMassiveRL'NrHM';
.sort

*********Make look nice and Mathematica friendly *********
id d_(helperidx1?,helperidx2?)=del(helperidx1,helperidx2);
id i_=imag;
.sort

Format Mathematica;
.sort
bracket gs,gW,den,del,imag;
.sort 


#write <HelicityFormFactors/HMassiveLL'NrHM'.m> "HMassiveLL'NrHM'=  %E", HMassiveLL'NrHM'
#write <HelicityFormFactors/HMassiveRL'NrHM'.m> "HMassiveRL'NrHM'=  %E", HMassiveRL'NrHM'

.end












