*We first take the complex conjugation

#do i = 1, '$NumberOfDiagrams'
	global ConjugatedRestoredAntiTopLine'i' = RestoredAntiTopLine'i';
#enddo
#include Modules_Tree_Level_Computation/Complex_Conjugation.h;


.store
.sort

* RestoredAntiTopLine'i' refers to the graph 'i' where the propagators have the correct ordering. 
local TreeLevelAmplitudeSquaredTraceFormalism = ( RestoredAntiTopLine1 + ... + RestoredAntiTopLine8 )*( ConjugatedRestoredAntiTopLine1 + ... + ConjugatedRestoredAntiTopLine8 );


#include Modules_Tree_Level_Computation/Perform_Polarization_Sums_and_Sum_Over_Colorindices.h


#include Modules_Tree_Level_Computation/FivePoint_Kinematics.h

.sort


#include Modules_Tree_Level_Computation/SimplifyFormResult.h



.sort


#write <Output_Files/Amplitude_Trace_Formalism_SimplerNotation.out> "TreeLevelAmplitudeSquaredTraceFormalism = %e" TreeLevelAmplitudeSquaredTraceFormalism


.sort
	
b gs, gw, mw;
print;
