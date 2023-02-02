#-
off statistics;

****************
*** To adjust ***
**************

#define NrDiag "2"

*********************
*** Declarations ***
********************

autodeclare symbol s,m,imag,gs,d,amp;
autodeclare function vbar,u ,Ubar,V;
cfunction sqrt;
autodeclare index ci,mu;
autodeclare vector p,eps;
function den;
function diagram;
index i;

autodeclare vector helpervec;
autodeclare index helperidx;
.global

**********************
*** Import Diagrams ***
************************

#do i=1, 'NrDiag'
	local diag'i'=d'i';
#enddo
.sort

#include TreeLevelAmplitude.h
.sort

**************************
***Define Amplitude***
**************************

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
.store
.sort

global ampCC=amp;
.sort

id vbar=vbarCC;
id u=uCC;
id Ubar=UbarCC;
id V=VCC;
.store

global AmpSqrt=amp*ampCC;
.sort

#do i=1,10
id vbar(p2)*g_(helperidx?,helpervec1?,...,helpervec'i'?)*u(p1)=g_(helperidx,p2,helpervec1,...,helpervec'i');
id vbarCC(p2)*g_(helperidx?,helpervec1?,...,helpervec'i'?)*uCC(p1)=g_(helperidx,p1,helpervec'i',...,helpervec1);
Ubar(p2)*g_(helperidx?,helpervec1?,...,helpervec'i'?)*u(p1)=g_(helperidx,p2,helpervec1,...,helpervec'i');
id vbarCC(p2)*g_(helperidx?,helpervec1?,...,helpervec'i'?)*uCC(p1)=g_(helperidx,p1,helpervec'i',...,helpervec1);
#enddo



print;














.end