#-
off statistics;

****************
*** To adjust ***
**************

#define NrDiag "2"
#define MaxInternal "10"

*********************
*** Declarations ***
********************

autodeclare symbol s,m,gs,gW,d,amp,epsmuw,imag;
autodeclare function vbar,u ,Vbar,U;
autodeclare index ci,mu;
autodeclare vector p,eps;
autodeclare function gamma;
cfunction den,del,num,ratio;
function diagram,gamma;
index i;

autodeclare vector helpervec;
autodeclare index helperidx;
autodeclare function helperfct;
autodeclare symbol helpersym;
.global



**************************
***Define Amplitude***
**************************

global amp=diagram(i);
sum i,1,...,'NrDiag';

#do i=1,'NrDiag'
	id diagram('i')=d'i';
#enddo
.sort

#include TreeLevelAmplitude.h
.sort

#do i=1,'NrDiag'
	drop diag'i';
#enddo
.sort
.store

************************************************
*********** Define CompexConj Amplitude*********
***********************************************

global ampCC=amp;

id epsmuw=epsmuwCC;
id vbar(p1)=vbarCC(p1)*helperfct;
id u(p2)=uCC(p2);
id Vbar(p3)=VbarCC(p3)*helperfct;
id U(p4)=UCC(p4);
.sort


id g_(helperidx1?,helperidx2?)=gamma(helperidx1,helperidx2);
.sort
argument;
id muw=muwCC;
#do i=1,'MaxInternal'
 id mu'i'=mu'i'CC;
#enddo
endargument;
.sort
id gamma(helperidx1?,helperidx2?)=g_(helperidx1,helperidx2);

*** Change order of gamma matrices ****

id helperfct*g_(helperidx?,mu1?,helpervec2?,mu2?)=g_(helperidx,mu2,helpervec2,mu1);
id helperfct*g_(helperidx?,mu?)=g_(helperidx,mu);
.sort
.store

****************************************************
********** Define Squared Amplitude ***************
****************************************************

global AmpSqrt=ampCC*amp;
.sort

************************
*** Polarizationsum ***
************************

id epsmuwCC*epsmuw=-d_(muw,muwCC)+(p5(muw)*p5(muwCC)/mw^2);
.sort


******************************************
*** Fermionspinsum ***
**********************

**** Replace vbar u and perform trace *****

id vbar(p1)=g_(1,p1);
id vbarCC(p1)=1;
id u(p2)=g_(1,p2);
id uCC(p2)=1;

id Vbar(p3)=g_(2,p3)-mt*gi_(2);
id VbarCC(p3)=1;
id U(p4)=g_(2,p4)+mt*gi_(2);
id UCC(p4)=1;
.sort

trace4,1;
trace4,2;
.sort


******+ Kinematic identities *******
#include FivePointKinematics.h
.sort


*********Make look nice and Mathematica friendly *********

id d_(helperidx1?,helperidx2?)=del(helperidx1,helperidx2);
id i_=imag;
.sort

Format Mathematica;
.sort
factarg den;
chainout den;
.sort

bracket gs,gW,den;  
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

#create <TreeLevelAmplitudeSquared.m> 
#write <TreeLevelAmplitudeSquared.m> "(%E)", AmpSqrt
#close <TreeLevelAmplitudeSquared.m>

.end