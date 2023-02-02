**** Reconstruct massless Fermion Line ***

*Move start of line to left and define helper function*

repeat;	
	id vrtx(?helperfct1)*vrtx(antiquark('LabelAQ',?helpervec2),?helperfct2)=vrtx(antiquark('LabelAQ',?helpervec2),?helperfct2)*vrtx(?helperfct1);

endrepeat;

.sort 

id vrtx(antiquark('LabelAQ',helpervec1?),quark(helperidx2?,helpervec2?),?helperfct3)=helperfctStartQuarkLine*vrtx(antiquark('LabelAQ',helpervec1),quark(helperidx2,helpervec2),?helperfct3)*helperfctend(helperidx2+1);
.sort

*step by step reconstruct line, go on as long as there is helperfct

#do i = 1, 1
*if already at end remove helper

*if next in right position move helper one further, or if last mark end of line
if (match(helperfctend(helperidx?)*vrtx(antiquark(helperidx?,?helpervec2),?helperfct2)));
	id helperfctend(helperidx?)*vrtx(antiquark(helperidx?,helpervec1?),quark(?helperidx2),?helperfct3)=vrtx(antiquark(helperidx,helpervec1),quark(?helperidx2),?helperfct3)*helperfctend(?helperidx2);
	if (match(helperfctend(helperidx2?)));
		id helperfctend(helperidx2?,helpervec2?)=helperfctend(helperidx2+1);
	else;
		id helperfctend(?helperidx2)=helperfctEndQuarkLine;
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

*Move start of line to left (until massless line) *


repeat;	
	id vrtx(?helperfct1)*vrtx(antitop('LabelAT',?helpervec2),?helperfct2)=vrtx(antitop('LabelAT',?helpervec2),?helperfct2)*vrtx(?helperfct1);

endrepeat;

.sort 

*if only single contribution add end of line otherwise introduce helperfct

if(match(vrtx(antitop(helperidx1?,helpervec1?),top('LabelT',helpervec2?),?helperfct3)));
	id vrtx(antitop(helperidx1?,helpervec1?),top('LabelT',helpervec2?),?helperfct3)=helperfctStartTopLine*vrtx(antitop(helperidx1,helpervec1),top('LabelT',helpervec2),?helperfct3)*helperfctend(helperidx1+1);
;
else;
	id vrtx(antitop('LabelAT',helpervec1?),?helperfct3)=helperfctStartTopLine*vrtx(antitop('LabelAT',helpervec1),?helperfct3)*helperfctEndTopLine;
endif;

*step by step reconstruct line, go on as long as there is helperfct

#do i = 1, 1

*if next in right position move helper one further, or if last remove helper
if (match(helperfctend(helperidx?)*vrtx(?helperfct1,top(helperidx?,?helpervec2),?helperfct2)));
	id helperfctend(helperidx?)*vrtx(antitop(?helperidx1),top(helperidx?,helpervec2?),?helperfct3)=vrtx(antitop(?helperidx1),top(helperidx,helpervec2),?helperfct3)*helperfctend(?helperidx1);
	if (match(helperfctend(helperidx2?)));
		id helperfctend(helperidx2?,helpervec2?)=helperfctend(helperidx2+1);
	else;
		id helperfctend(?helperidx2)=helperfctEndTopLine;
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