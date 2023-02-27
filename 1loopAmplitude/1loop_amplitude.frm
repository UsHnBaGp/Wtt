#-

off statistics;

*************************
**** Things to adjust ***
*************************

#define NrDiag "31"
#define LabelAQ "-1"
#define LabelQ "-3"
#define LabelAT "-5"
#define LabelT "-7"
#define MaxInternal "15"
#define MaxExternal "9"

.global


*************************
*** Definitions ***
**************************


index i;

function Ubar, V;

autodeclare symbol d;
autodeclare vector k;
vector p1,p2,p3,p4,p5,pL;
vector eps;
symbol gs,gW,e,xi,imag;
cfunction sqrt,den;
autodeclare symbol s,m,epsmuw;
autodeclare index mu,ci;
function vbar,u,Vbar,U,T,gamma;

autodeclare function pol, prop, vrtx;
cfunction quark, antiquark, top, antitop, wboson, gluon,ghost,antighost;
cfunction num,den,ratio;

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

#include output_1loop_form.h

.sort


***********************************************************
******** Reconstruct Fermionlines ********************
**********************************************************

#include ReconstructFermionLines.h

****************************************
*** Kick out top loop and W in quark loop ***
******************************************

id vrtx(antiquark('LabelAQ',helpervec1?),quark('LabelQ',helpervec2?),?helperfct)=0;
id helperfctEndTopLine*vrtx(antitop(helperidx1?,helpervec1?),top(helperidx2?,helpervec2?),gluon(?helpervec3))=0;
.sort

******************************************
***** Feynman rules ****
******************************************


#include FeynmanRules.h
.sort

#do i=1,'NrDiag'
#write <1looptest.h> "id d'i'=%e ", diag'i';
#enddo

print+s;
.end

**************************************
***** ColorAlgebra ****
**************************************

id T(helperidx1?,helperidx2?,helperidx3?)*T(helperidx1?,helperidx4?,helperidx5?)=1/2*(d_(helperidx2,helperidx5)*d_(helperidx3,helperidx4)-1/3*d_(helperidx2,helperidx3)*d_(helperidx4,helperidx5));
.sort


******************************************
*** Kinematics/Mandelstam Identities ***
****************************************

#include FivePointKinematics.h


*******************************
*****Final Simplifications***
****************************
factarg den;
chainout den;
id den(helpersym1?number_) = 1/helpersym1 ;
.sort
bracket gs,i_,gW;

#do i=1,'NrDiag'
#write <TreeLevelAmplitude.h> "id d'i'=%e ", diag'i';
#enddo
.sort




id d_(helperidx1?,helperidx2?)=del(helperidx1,helperidx2);
id g_(helperidx1?,helperidx2?)=gamma(helperidx1,helperidx2);
id i_=imag;
.sort
repeat id gamma(helperidx?,?helperidx1)*gamma(helperidx?,?helperidx2)=gamma(helperidx,?helperidx1,?helperidx2);
.sort

Format Mathematica;
.sort


bracket gs,gW,den;  




#create <TreeLevelAmplitude.m> 
#do i=1,'NrDiag'
#write <TreeLevelAmplitude.m> "d'i'=%e ", diag'i';
#enddo
#close <TreeLevelAmplitude.m>

.end








