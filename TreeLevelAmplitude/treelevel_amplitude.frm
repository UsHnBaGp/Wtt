#-
#:maxtermsize 1000000
#:workspace 1G

off statistics;

**** Things to adjust ***
#define NrDiag "2"
#define LabelAQ "-3"
#define LabelQ "-1"
#define LabelAT "-2"
#define LabelT "-4"

.global

*** Definitions ***

autodeclare symbol d;
symbol p1,p2,p3;
symbol q1,q2,q3;
autodeclare symbol q,k;

function pol, prop, vrtx;
cfunction quark, antiquark, top, antitop, wboson, gluon;

**** Declare Dummys ***
autodeclare function helperfct;
autodeclare symbol helpersym;
autodeclare index helperidx;



index i;

.global

*** Define diagrams ***

#do i=1, 'NrDiag'
	global diag'i'=d'i';
#enddo

*** Import qgraph output ***

#include output_GoodNotation.h

.sort


**** Reconstruct massless Fermion Line ***

*Move start of line to left and define helper function*

repeat;	
	id vrtx(?helperfct1)*vrtx(antiquark('LabelAQ',?helpersym2),?helperfct2)=vrtx(antiquark('LabelAQ',?helpersym2),?helperfct2)*vrtx(?helperfct1);

endrepeat;

.sort 

id vrtx(antiquark('LabelAQ',helpersym1?),quark(helperidx2?,helpersym2?),?helperfct3)=vrtx(antiquark('LabelAQ',helpersym1),quark(helperidx2,helpersym2),?helperfct3)*helperfctend(helperidx2+1);
.sort

*step by step reconstruct line, go on as long as there is helperfct

#do i = 1, 1
*if already at end remove helper

*if next in right position move helper one further, or if last mark end of line
if (match(helperfctend(helperidx?)*vrtx(antiquark(helperidx?,?helpersym2),?helperfct2)));
	id helperfctend(helperidx?)*vrtx(antiquark(helperidx?,helpersym1?),quark(?helperidx2),?helperfct3)=vrtx(antiquark(helperidx,helpersym1),quark(?helperidx2),?helperfct3)*helperfctend(?helperidx2);
	if (match(helperfctend(helperidx2?)));
		id helperfctend(helperidx2?,helpersym2?)=helperfctend(helperidx2+1);
	else;
		id helperfctend(?helperidx2)=helperfctEndFermionline;
	endif;
*if not in right position take last to front
else;
	id helperfctend(helperidx?)=helperfctend(helperidx)*helperfct;
	repeat;
	id helperfct*vrtx(?helperfct1)=vrtx(?helperfct1)*helperfct;
	endrepeat;
 	id vrtx(?helperfct1)*helperfct=helperfct*vrtx(?helperfct1);
	repeat;
	id vrtx(?helperfct1)*helperfct*vrtx(?helperfct2)=helperfct*vrtx(?helperfct2)*vrtx(?helperfct1);
	endrepeat;
	id helperfct=1;
endif;
if (match(helperfctend(helperidx?))) redefine i "0"; 
.sort
#enddo
.sort

**** Reconstruct massive Fermion Line ***

*Move start of line to left (until massless line) and define helper function*


repeat;	
	id vrtx(?helperfct1)*vrtx(antitop('LabelAT',?helpersym2),?helperfct2)=vrtx(antitop('LabelAT',?helpersym2),?helperfct2)*vrtx(?helperfct1);

endrepeat;

.sort 

id vrtx(antitop('LabelAT',helpersym1?),top(helperidx2?,helpersym2?),?helperfct3)=vrtx(antitop('LabelAQ',helpersym1),top(helperidx2,helpersym2),?helperfct3)*helperfctend(helperidx2+1);
.sort

*if only single contribution add end of line

if(match(vrtx(antitop('LabelAT',helpersym1?),top(helperidx2?,helpersym2?),?helperfct3)));
	id 1=1;
else;
	id vrtx(antitop('LabelAT',helpersym1?),?helperfct3)=vrtx(antitop('LabelAT',helpersym1),?helperfct3)*helperfctEndoffermioneline;
endif;

*step by step reconstruct line, go on as long as there is helperfct

#do i = 1, 1
*if already at end remove helper

*if next in right position move helper one further, or if last remove helper
if (match(helperfctend(helperidx?)*vrtx(antitop(helperidx?,?helpersym2),?helperfct2)));
	id helperfctend(helperidx?)*vrtx(antitop(helperidx?,helpersym1?),top(?helperidx2),?helperfct3)=vrtx(antitop(helperidx,helpersym1),top(?helperidx2),?helperfct3)*helperfctend(?helperidx2);
	if (match(helperfctend(helperidx2?)));
		id helperfctend(helperidx2?,helpersym2?)=helperfctend(helperidx2+1);
	else;
		id helperfctend(?helperidx2)=1;
	endif;
*if not in right position take last to front
else;
	id helperfctend(helperidx?)=helperfctend(helperidx)*helperfct;
	repeat;
	id helperfct*vrtx(?helperfct1)=vrtx(?helperfct1)*helperfct;
	endrepeat;
 	id vrtx(?helperfct1)*helperfct=helperfct*vrtx(?helperfct1);
	repeat;
	id vrtx(?helperfct1)*helperfct*vrtx(?helperfct2)=helperfct*vrtx(?helperfct2)*vrtx(?helperfct1);
	endrepeat;
	id helperfct=1;
endif;
if (match(helperfctend(helperidx?))) redefine i "0"; 
.sort
#enddo
.sort

print diag1, diag2;

.end