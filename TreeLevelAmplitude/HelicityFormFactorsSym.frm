#-
#:maxtermsize 2000000
#:workspace 5G
off statistics;

***************************
**** To adjust **********
************************

#define NrH "12"

#define lengthT "24"


*************************
*** Definitions ***
**************************

autodeclare function diagram,E;
autodeclare vector p,helpervec;
cfunction den,sqrt,num,ratio,del;
autodeclare symbol s,gram,m,g,d,helpersym,D,prefac,F;
autodeclare index helperidx;
function PL,PR,f;
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

global prefac341=g_(1,p1)*PR(1)*g_(1,p3,p2,p3)+g_(1,p1)*PR(1)*g_(1,p3,p2,p4);

global prefac342=g_(1,p1)*PR(1)*g_(1,p4,p2,p3)+g_(1,p1)*PR(1)*g_(1,p4,p2,p4);

id PL(helperidx?)=g7_(helperidx);
id PR(helperidx?)=g6_(helperidx);
.sort
trace4,1;
trace4,2;
.sort
id e_(helpervec1?,helpervec2?,helpervec3?,helpervec4?)=E(helpervec1,helpervec2,helpervec3,helpervec4);
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
id den(helpersym1?number_) = 1/helpersym1 ;
id num(helpersym1?number_) = helpersym1 ;
.sort


**** Kinematics ***
#include FivePointKinematics.h
.sort
.store



**************************************
*** Combine Formfactors *****
***********************************

global H'NrH'sym=prefac341*f(2*'NrH'-1)+prefac342*f(2*'NrH');


#do i=1,'lengthT'
id f('i')=F'i';
#enddo
.sort

**************************************
*** Import Formfactors *****
***********************************

#do i=1,'lengthT'
#include Formfactors/Formfactor'i'.h
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

#write <HelicityFormFactors/H'NrH'sym.h> "id H'NrH'sym=  %e ", H'NrH'sym;
.sort

*********Make look nice and Mathematica friendly *********
id d_(helperidx1?,helperidx2?)=del(helperidx1,helperidx2);
id i_=imag;
.sort

Format Mathematica;
.sort
bracket gs,gW,den,del,imag;
.sort 

#write <HelicityFormFactors/H'NrH'sym.m> "H'NrH'sym=  %E", H'NrH'sym

.end












