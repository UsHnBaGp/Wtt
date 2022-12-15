*###################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*     Definition of projectors    %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*###################################



#do FormFactorNumber = 1, '$NumberOfFormFactors'

	#do ProjectorNumber = 1, '$NumberOfProjectors'
	
		local ProjectorNumberF'FormFactorNumber'P'ProjectorNumber' =  ProjectorCoefficientF'FormFactorNumber'P'ProjectorNumber'*ProjectorTensor('ProjectorNumber') ;

	#enddo

	global ProjectorNumberF'FormFactorNumber' = ProjectorNumberF'FormFactorNumber'P1 + ... + ProjectorNumberF'FormFactorNumber'P'$NumberOfProjectors';


#enddo


*There are many coefficients 0. To avoid unecessary expressions I set these equal to 0. 
 
#do ZeroIndexLine = 1, 4
	#do ZeroIndexColumn = 5, '$NumberOfProjectors'
	
		id ProjectorCoefficientF'ZeroIndexLine'P'ZeroIndexColumn'  = 0;	
	
	#enddo
#enddo

#do ZeroIndexLine = 5, '$NumberOfProjectors'
	#do ZeroIndexColumn = 1, 4
	
		id ProjectorCoefficientF'ZeroIndexLine'P'ZeroIndexColumn'  = 0;	
	
	#enddo
#enddo

.sort

#include ../Modules_Tree_Level_Computation/Definition_of_Projector_Tensors_As_IDs.h


#include ../Modules_Tree_Level_Computation/Complex_Conjugation.h


.sort 



