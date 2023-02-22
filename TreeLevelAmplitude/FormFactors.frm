#-
off statistics;

***************************
**** To adjust **********
************************

#define NrDiag "2"
#define lengthT "24"
#define FormFactor "1"

*************************
*** Definitions ***
**************************

autodeclare function vbaru,VbarU,vbar,u,Vbar,U,eps,diagram,MInvFct;
autodeclare vector p;
function T,AA;
cfunction den,sqrt,num,ratio,del;
autodeclare symbol s,m,g,d,MInv,helpersym,D;
autodeclare index helperidx;
index i,j;
Dimension D;
autodeclare index mu,epsmuw;
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
	id diagram(i?)=diag'i';
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
id vbaru(mui?) = vbaruC(mui);
id VbarU(pi?,mui?) = VbarUC(mui,pi);
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
id epsC(p?)=-p(muw)+p.p5*p5(muw)/mw^2;


**************************************+
*** Fermion spinsums ****
*********************************

id vbaruC(p?)= g_(1,p2,p);
id VbarUC = g_(2,p4)+mt*gi_(2);
id VbarUC(p?) = (g_(2,p4)+mt*gi_(2))*g_(2,p);
id VbarUC(pi?,pj?) = (g_(2,p4)+mt*gi_(2))*g_(2,pi,pj);
id vbaruC(mui?)= g_(1,p2,mui);
id VbarUC(mui?,pi?) = (g_(2,p4)+mt*gi_(2))*g_(2,mui,pi);

id vbar(p1)=g_(1,p1);
id u(p2)=1;
id Vbar(p3)=g_(2,p3);
id U(p4)=1;

.sort;

Trace4, 1;
Trace4, 2;

.sort

*********************
**** Kinematics ***
*********************
#include FivePointKinematics.h
.sort

*********************
*** Write down prestep of formfactors ***
*************************

#do i = 1, 'lengthT'
	#write <Pre-Formfactors.txt> "A'i' =  %e ", A'i';
#enddo
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


#include MMatrixInverseForm'FormFactor'.h
.sort

********************************
*** Simplify ***
********************************

*****+ POlyratfun on Newton*******
bracket gs,gW,den,d_,i_;  
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
.sort
id num(helpersym?)=helpersym;
bracket gs,gW,den; 
.sort

*argument den;
*#include Denominator.h
*endargument;
.sort


*********Make look nice and Mathematica friendly *********
id d_(?arg)=del(?arg);
id i_=imag;
.sort

Format Mathematica;
.sort


*********************
*** Write down formfactor ***
*************************

#write <Formfactor'FormFactor'.txt> "F'FormFactor'=  %E ", F'FormFactor';
.sort


print+s F1;
.end












