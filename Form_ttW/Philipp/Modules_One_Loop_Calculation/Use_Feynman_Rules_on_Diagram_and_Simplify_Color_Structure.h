*####################################################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
* Apllication of momentum shifts, Feynman rules and color algebra  %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*####################################################################
	
	
	
functions ExtState, Propagator, gluon, top, antitop, higgs, quark, antiquark, ghost, antighost;
cfunctions DiaMatch, Shift, Sector;

	
set ExternalState: ExternalTop, ExternalAntiTop, ExternalGluon;


autodeclare functions Vertex;


global FeynmanDiagramNb'DiagramNb' = DiaMatch('DiagramNb')*DiagramNumber'DiagramNb';

#if 'LoopNb' == 0
	id DiaMatch(?aux) = 1;
#endif


#include Modules_One_Loop_Calculation/Simplify_QGRAF_Outtput_And_Perform_Reduze_Momentum_Shifts.h



*Delete QGRAF expression from the memory
drop DiagramNumber'DiagramNb';
	
#include Modules_One_Loop_Calculation/Setting_Color_And_Lorentz_Indices.h 



#include Modules_One_Loop_Calculation/Reconstruction_Of_Top_AntiTop_Fermion_Line_and_Closed_Fermion_Loops.h




#include Modules_One_Loop_Calculation/Insert_Feynmanrules.h

	
	
	
sum mu1, ..., mu10, nu1, nu2;

	
	
#include Modules_One_Loop_Calculation/Insert_On_Shell_Transversality_Gauge_Condition.h


* Remove denominators which contain k1. These denominators are stored in the ID number of the sector	
splitarg denom;
	
argument denom;
	id k1 = 0;
endargument;
	
id denom(?aux1, 0, ?aux2) = 1;
repeat id denom(aux1?, aux2?, ?aux3) = denom(aux1 + aux2, ?aux3);

.sort

* Feynman's i*eps prescription is only needed within the integration. The remaining denoms are outside the integration

argument;
	id Feps = 0;
endargument;

.sort

 

#include Modules_One_Loop_Calculation/Simplify_Color_Structure.h
 
 
