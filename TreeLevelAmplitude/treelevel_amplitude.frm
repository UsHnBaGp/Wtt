#-
#:maxtermsize 1000000
#:workspace 1G

off statistics;

*************************
**** Things to adjust ***
*************************

#define NrDiag "2"
#define LabelAQ "-3"
#define LabelQ "-1"
#define LabelAT "-2"
#define LabelT "-4"
#define MaxInternal "10"
#define MaxExternal "6"

.global


*************************
*** Definitions ***
**************************


index i;

autodeclare symbol d;
vector p1,p2,p3,p4,p5;
vector q1,q2,q3;
vector eps;
symbol gs,e,imag;
cfunction sqrt,den;
autodeclare symbol s,m;
autodeclare index mu,ci;
function vbar,u,V,Ubar,T,gamma;

autodeclare function pol, prop, vrtx;
cfunction quark, antiquark, top, antitop, wboson, gluon;

**** Declare Dummys ***
autodeclare function helperfct;
autodeclare symbol helpersym;
autodeclare index helperidx;
autodeclare vector helpervec;
function del;

***Define Table for Lorentzindeces***

Table,relax lidx(1:'MaxInternal');
#do i=1,'MaxInternal'
	Fill lidx('i')= mu'i';
#enddo

Table,relax lidxext(1:'MaxExternal');
#do i=1,'MaxExternal'
	Fill lidxext('i')= muext'i';
#enddo

.global

***Define Table for Colorindeces***

Table,relax cidx(1:'MaxInternal');
#do i=1,'MaxInternal'
	Fill cidx('i')= ci'i';
#enddo

Table,relax cidxext(1:'MaxExternal');
#do i=1,'MaxExternal'
	Fill cidxext('i')= ciext'i';
#enddo

.global

**********************************************
*******Import qgraph*********
***********************************************


*** Define diagrams ***

#do i=1, 'NrDiag'
	global diag'i'=d'i';
#enddo

*** Import qgraph output ***

#include output_GoodNotation.h

.sort

*** Change notation ***
argument;
argument;
id q1=p3;
id q2=p4;
id q3=p5;
endargument;
endargument;

***********************************************************
******** Reconstruct Fermionlines ********************
**********************************************************

#include ReconstructFermionLines.h


******************************************
***** Feynman rules ****
******************************************


#include FeynmanRules.h

**************************************
***** ColorAlgebra ****
**************************************

id T(helperidx1?,helperidx2?,helperidx3?)*T(helperidx1?,helperidx4?,helperidx5?)=den(2)*(d_(helperidx2,helperidx5)*d_(helperidx3,helperidx4)-den(3)*d_(helperidx2,helperidx3)*d_(helperidx4,helperidx5));

******************************************
*** Kinematics/Mandelstam Identities ***
****************************************

#include FivePointKinematics.h


*******************************
*****Final Simplifications***
****************************

repeat;
id den(helpersym1?)*den(helpersym2?)=den(helpersym1*helpersym2);
id imag*imag=-1;
endrepeat;

.sort

bracket d_,gs,imag;

print[];

*#do i=1,'NrDiag'
*#write <TreeLevelAmplitude.h> "id d'i'=%e ", diag'i';
*#enddo

.end




*********** Notes ********
* change den with numbers
*imag=i_








