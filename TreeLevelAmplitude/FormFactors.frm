#-
#:maxtermsize 2000000
#:workspace 2G
off statistics;

#-
off statistics;

***************************
**** To adjust **********
************************

#define FormFactor "24"

#define NrDiag "2"
#define lengthT "24"

*************************
*** Definitions ***
**************************

autodeclare function vbaru,VbarU,vbar,u,Vbar,U,eps,diagram,MInvFct;
function AA;
cfunction den,sqrt,num,ratio,del;
autodeclare symbol s,gram,m,g,d,MInv,helpersym,D,I;
autodeclare index helperidx;
index i,j;
Dimension D;
autodeclare index mu;
Dimension D;
autodeclare index epsmuw;
autodeclare vector p;
Dimension 3;
autodeclare index ci;

symbol imag;


.sort
.global

***********************************
*** Import Diagrams and define Amplitude ***
***********************************

#do i=1, 'NrDiag'
	global diag'i'=d'i';
#enddo
.sort

#include TreeLevelAmplitude.h
.sort
global amp=diagram(i);
sum i,1,...,'NrDiag';
.sort
#do i=1,'NrDiag'
	id diagram('i')=diag'i';
#enddo
.sort

#do i=1,'NrDiag'
	drop diag'i';
#enddo
.sort
.store

***********************************
*** Import Tensors ***
***********************************

#include tensors.h
.sort
.store

**********************************
*** Complex Conjugate Tensors ***
*********************************

#do i=1, 'lengthT'
	global T'i'CC = T'i' ;
#enddo

id eps(p?) = epsC(p);
id vbaru(p?) = vbaruC(p);
id VbarU = VbarUC;
id VbarU(p?) = VbarUC(p);
id VbarU(pi?,pj?) = VbarUC(pj,pi);
.store
.sort

***********************************
*** Apply comlex conj Tensors to amplitude ***
************************************

#do i=1, 'lengthT'
	global A'i'= T'i'CC*amp ;
#enddo
.sort

*************************************
*** Polarization sum ***
**************************
id epsmuw=1;
id epsC(p?)=(-p(muw)+p.p5*p5(muw)/mw^2);

**************************************+
*** Fermion spinsums ****
*********************************

id vbaruC(p?)= g_(1,p2,p);
id VbarUC = g_(2,p4)+mt*gi_(2);
id VbarUC(p?) = (g_(2,p4)+mt*gi_(2))*g_(2,p);
id VbarUC(pi?,pj?) = (g_(2,p4)+mt*gi_(2))*g_(2,pi,pj);

id vbar(p1)=g_(1,p1);
id u(p2)=1;
id Vbar(p3)=(g_(2,p3)-mt*gi_(2));
id U(p4)=1;

.sort

tracen,1;
tracen,2;
.sort


*********************
**** Kinematics ***
*********************
#include FivePointKinematics.h
.sort

*********************
*** Write down prestep of formfactors ***
*************************

id i_=I;
id d_(helperidx1?,helperidx2?)=del(helperidx1,helperidx2);
.sort
format Mathematica;
.sort

#do i = 1, 'lengthT'
	#write <Preformfactors/PreFormfactors'i'.m> "(%E) ", A'i';
#enddo
.sort

id I=i_;
id del(helperidx1?,helperidx2?)=d_(helperidx1,helperidx2);
.sort

format normal;
.sort

**************************************
*** Define Formfactors and Import Matrix *****
***********************************


global F'FormFactor'=MInvFct'FormFactor'(j)*AA(j);
sum j,1,...,'lengthT';

.sort


#do i=1, 'lengthT'
	id AA('i')=A'i';
#enddo
.sort

#do i=1, 'lengthT'
	drop A'i';
#enddo
.sort

#do j=1, 'lengthT'
	id MInvFct'FormFactor'('j')=MInv'FormFactor''j';
#enddo
.sort


#include MInv/MMatrixInverseForm'FormFactor'.h
.sort


*** Remove numerator notation since apparently not helpful***
id num(helpersym?)=helpersym;
.sort

********************************
*** Simplify ***
********************************
bracket gs,gW,den,d_,i_,num;  
.sort

collect num;
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
factarg den;
chainout den;
id den(helpersym1?number_) = 1/helpersym1 ;
id num(helpersym1?number_) = helpersym1;
.sort

id num(-4*mt^4*mw^2*s12 + 4*mt^4*s12^2 + 4*mt^2*mw^2*s12^2 + mw^4*s12^2 - 4*mt^2*s12^3 - 2*mw^2*s12^3 + s12^4 + 4*mt^4*s12*s13 + 2*mt^2*mw^2*s12*s13 - 6*mt^2*s12^2*s13 - 2*mw^2*s12^2*s13 + 2*s12^3*s13 + mt^4*s13^2 - 2*mt^2*s12*s13^2 + s12^2*s13^2 + 4*mt^4*s12*s14 + 2*mt^2*mw^2*s12*s14 - 6*mt^2*s12^2*s14 - 2*mw^2*s12^2*s14 + 2*s12^3*s14 - 2*mt^4*s13*s14 - 4*mt^2*s12*s13*s14 + 2*s12^2*s13*s14 + mt^4*s14^2 - 2*mt^2*s12*s14^2 + s12^2*s14^2 + 4*mt^4*s12*s23 + 2*mt^2*mw^2*s12*s23 - 6*mt^2*s12^2*s23 - 2*mw^2*s12^2*s23 + 2*s12^3*s23 - 2*mt^4*s13*s23 + 2*s12^2*s13*s23 + 2*mt^4*s14*s23 -8*mt^2*s12*s14*s23 -2*mw^2*s12*s14*s23 + 4*s12^2*s14*s23 + 2*mt^2*s13*s14*s23 + 2*s12*s13*s14*s23 - 2*mt^2*s14^2*s23 + 2*s12*s14^2*s23 + mt^4*s23^2 - 2*mt^2*s12*s23^2 + s12^2*s23^2 - 2*mt^2*s14*s23^2 + 2*s12*s14*s23^2 + s14^2*s23^2 + 4*mt^4*s12*s24 + 2*mt^2*mw^2*s12*s24 - 6*mt^2*s12^2*s24 - 2*mw^2*s12^2*s24 + 2*s12^3*s24 + 2*mt^4*s13*s24 - 8*mt^2*s12*s13*s24 - 2*mw^2*s12*s13*s24 + 4*s12^2*s13*s24 - 2*mt^2*s13^2*s24 + 2*s12*s13^2*s24 - 2*mt^4*s14*s24 + 2*s12^2*s14*s24 + 2*mt^2*s13*s14*s24 + 2*s12*s13*s14*s24 - 2*mt^4*s23*s24 - 4*mt^2*s12*s23*s24 + 2*s12^2*s23*s24 + 2*mt^2*s13*s23*s24 + 2*s12*s13*s23*s24 + 2*mt^2*s14*s23*s24 + 2*s12*s14*s23*s24 - 2*s13*s14*s23*s24 + mt^4*s24^2 - 2*mt^2*s12*s24^2 + s12^2*s24^2 -2*mt^2*s13*s24^2 + 2*s12*s13*s24^2 + s13^2*s24^2)=num(gram);

id num(-(-4*mt^4*mw^2*s12 + 4*mt^4*s12^2 + 4*mt^2*mw^2*s12^2 + mw^4*s12^2 - 4*mt^2*s12^3 - 2*mw^2*s12^3 + s12^4 + 4*mt^4*s12*s13 + 2*mt^2*mw^2*s12*s13 - 6*mt^2*s12^2*s13 - 2*mw^2*s12^2*s13 + 2*s12^3*s13 + mt^4*s13^2 - 2*mt^2*s12*s13^2 + s12^2*s13^2 + 4*mt^4*s12*s14 + 2*mt^2*mw^2*s12*s14 - 6*mt^2*s12^2*s14 - 2*mw^2*s12^2*s14 + 2*s12^3*s14 - 2*mt^4*s13*s14 - 4*mt^2*s12*s13*s14 + 2*s12^2*s13*s14 + mt^4*s14^2 - 2*mt^2*s12*s14^2 + s12^2*s14^2 + 4*mt^4*s12*s23 + 2*mt^2*mw^2*s12*s23 - 6*mt^2*s12^2*s23 - 2*mw^2*s12^2*s23 + 2*s12^3*s23 - 2*mt^4*s13*s23 + 2*s12^2*s13*s23 + 2*mt^4*s14*s23 -8*mt^2*s12*s14*s23 -2*mw^2*s12*s14*s23 + 4*s12^2*s14*s23 + 2*mt^2*s13*s14*s23 + 2*s12*s13*s14*s23 - 2*mt^2*s14^2*s23 + 2*s12*s14^2*s23 + mt^4*s23^2 - 2*mt^2*s12*s23^2 + s12^2*s23^2 - 2*mt^2*s14*s23^2 + 2*s12*s14*s23^2 + s14^2*s23^2 + 4*mt^4*s12*s24 + 2*mt^2*mw^2*s12*s24 - 6*mt^2*s12^2*s24 - 2*mw^2*s12^2*s24 + 2*s12^3*s24 + 2*mt^4*s13*s24 - 8*mt^2*s12*s13*s24 - 2*mw^2*s12*s13*s24 + 4*s12^2*s13*s24 - 2*mt^2*s13^2*s24 + 2*s12*s13^2*s24 - 2*mt^4*s14*s24 + 2*s12^2*s14*s24 + 2*mt^2*s13*s14*s24 + 2*s12*s13*s14*s24 - 2*mt^4*s23*s24 - 4*mt^2*s12*s23*s24 + 2*s12^2*s23*s24 + 2*mt^2*s13*s23*s24 + 2*s12*s13*s23*s24 + 2*mt^2*s14*s23*s24 + 2*s12*s14*s23*s24 - 2*s13*s14*s23*s24 + mt^4*s24^2 - 2*mt^2*s12*s24^2 + s12^2*s24^2 -2*mt^2*s13*s24^2 + 2*s12*s13*s24^2 + s13^2*s24^2))=-num(gram);

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



*********************
*** Write down formfactor ***
*************************
bracket gs,gW,den,d_,i_;
#write <Formfactors/Formfactor'FormFactor'.h> "id F'FormFactor'=  %e ", F'FormFactor';
.sort

*********Make look nice and Mathematica friendly *********
id d_(helperidx1?,helperidx2?)=del(helperidx1,helperidx2);
id i_=I;
.sort

Format Mathematica;
.sort

*********************
*** Write down formfactor ***
*************************
bracket gs,gW,den,del,imag;
#write <Formfactors/Formfactor'FormFactor'.m> "(%E) ", F'FormFactor';
.sort
.end

