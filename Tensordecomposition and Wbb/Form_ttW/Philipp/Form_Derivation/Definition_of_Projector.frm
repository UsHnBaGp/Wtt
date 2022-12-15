*###################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*     Definition of projectors    %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*###################################

#-
off statistics;

* The file is the same as at tree level. I only have to adjust the paths.

#include Modules_One_Loop_Calculation/Global_Variable_Initialization_One_Loop.h



#do FormFactorNumber = 1, '$NumberOfFormFactors'

	#do ProjectorNumber = 1, '$NumberOfProjectors'
	
		local ProjectorNumberF'FormFactorNumber'P'ProjectorNumber' =  ProjectorCoefficientF'FormFactorNumber'P'ProjectorNumber'*ProjectorTensor('ProjectorNumber') ;

	#enddo

	global ProjecorNumberF'FormFactorNumber' = ProjectorNumberF'FormFactorNumber'P1 + ... + ProjectorNumberF'FormFactorNumber'P'$NumberOfProjectors';


#enddo




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Set 0 coefficients by hand  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


 
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



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Avoid redundancies by converting back the SpinorCNumberC expressions %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%




*id SpinorCNumberC( [] )                     = ExternalTopC(p3)*1                                          *ExternalAntiTopC(p4) ;
*id SpinorCNumberC( mu1? )                   = ExternalTopC(p3)*g_(1, mu1)                                 *ExternalAntiTopC(p4) ;
*id SpinorCNumberC( mu1?, mu2? )             = ExternalTopC(p3)*g_(1, mu1)*g_(1, mu2)                      *ExternalAntiTopC(p4) ;
*id SpinorCNumberC( mu1?, mu2?, mu5? )       = ExternalTopC(p3)*g_(1, mu1)*g_(1, mu2)*g_(1, mu5)           *ExternalAntiTopC(p4) ;
*id SpinorCNumberC( mu1?, mu2?, mu5?, mu6? ) = ExternalTopC(p3)*g_(1, mu1)*g_(1, mu2)*g_(1, mu5)*g_(1, mu6)*ExternalAntiTopC(p4) ;


.sort 




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Save projectors into file  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



#do ProjectorNb = 1, '$NumberOfFormFactors'

	#write <Modules_One_Loop_Calculation/Definition_of_Projector_as_Expressions_Coefficients_as_Symbols.h> "global ProjectorNumberF'ProjectorNb' = %e" ProjecorNumberF'ProjectorNb';

#enddo

.sort

.end
