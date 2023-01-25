#-

*Form uses an ibterbal maximal termsize which becomes important for some functions. 
#:maxtermsize 5000000
#:workspace 500M

off statistics;


*###############################################################
***************************************************************#
*                                                             *#
* Step 0: Initialization of global variables                  *#
*                                                             *#
***************************************************************#
*###############################################################



#include Modules_Tree_Level_Computation/Global_Variables_Initialization.h



*###############################################################
***************************************************************#
*                                                             *#
* Step 1: Use Feynman rules to get tree level Amplitude       *#
*                                                             *#
***************************************************************#
*###############################################################




#include Modules_Tree_Level_Computation/Construct_Tree_Level_Amplitude_with_Feynman_Rules.h

id ExternalGluon(nu1, p1, colExt3) = eps1(nu1);
id ExternalGluon(nu2, p2, colExt4) = eps2(nu2);

Multiply replace_(colExt4, colExt2, colExt3, colExt1);

sum mu1, mu2, nu1, nu2;
*b T, fcol, denom, ExternalGluon, gs, gw, mw, i_;
*print RestoredAntiTopLine1 +s;




#include Modules_Tree_Level_Computation/Simplify_Color_Structure.h 

.sort


* Clean up index mess

id ExternalGluon(nu?, p1, ?aux) = eps1(nu);
id ExternalGluon(nu?, p2, ?aux) = eps2(nu);

sum mu1, mu2, nu1, nu2; 

id ExternalAntiTop(p4)*ExternalTop(p3)                                 = SpinorCNumber([]);
id ExternalAntiTop(p4)*g_(1, mu1?)*ExternalTop(p3)                     = SpinorCNumber(mu1);
id ExternalAntiTop(p4)*g_(1, mu1?, mu2?)*ExternalTop(p3)               = SpinorCNumber(mu1, mu2);
id ExternalAntiTop(p4)*g_(1, mu1?, mu2?, mu3?)*ExternalTop(p3)         = SpinorCNumber(mu1, mu2, mu3);
id ExternalAntiTop(p4)*g_(1, mu1?, mu2?, mu3?, mu4?)*ExternalTop(p3)   = SpinorCNumber(mu1, mu2, mu3, mu4);


id eps1.eps2? = Sp(eps1, eps2);
id eps2.eps1? = Sp(eps2, eps1);

id TProduct(colExt3,colExt4,ColFun2,ColFun1) = colFactor1;
id TProduct(colExt4,colExt3,ColFun2,ColFun1) = colFactor2;

id TProduct(colExt1,colExt2,ColFun2,ColFun1) = colFactor1;
id TProduct(colExt2,colExt1,ColFun2,ColFun1) = colFactor2;

id T(colExt3, ColFun2, ColFunHelp1?)*T(colExt4, ColFunHelp1?, ColFun1) = colFactor1;
id T(colExt4, ColFun2, ColFunHelp1?)*T(colExt3, ColFunHelp1?, ColFun1) = colFactor2;


.sort
.store
.sort



*###################################################
***************************************************#
*                                                 *#
*         Perform trace formalism (optional)      *#
*                                                 *#
***************************************************#
*###################################################



*#include Modules_Tree_Level_Computation/Tree_Level_Amplitude_Squared_Trace_Formalism.h 



*###################################################
***************************************************#
*                                                 *#
*  Use FiniteFlow to derive the form factors      *#
*                                                 *#
***************************************************#
*###################################################


*#include Modules_Tree_Level_Computation/FormFactorMethod_FiniteFlow.h





*###################################################
***************************************************#
*                                                 *#
*      Use FORM to derive the form factors        *#
*                                                 *#
***************************************************#
*###################################################



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Load projectors (coefficients not explicit) %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


#include Modules_Tree_Level_Computation/Definition_of_Projector.h 


.store



global TreeLevelAmplitude = RestoredAntiTopLine3;

.sort
* + ... +  RestoredAntiTopLine'$NumberOfDiagrams';

.store
.sort 

#do FormFactorNumber = 1, 1
*'$NumberOfFormFactors'


	
	local FormFactor'FormFactorNumber' = ProjecorNumberF'FormFactorNumber'*TreeLevelAmplitude;


	.sort


	#include Modules_Tree_Level_Computation/Perform_Polarization_Sums_and_Sum_Over_Colorindices.h 


	.sort


	#include Modules_Tree_Level_Computation/FivePoint_Kinematics.h 


	.sort 


	#include Modules_Tree_Level_Computation/Definition_ProjectorCoefficient_as_ID.h 
	.sort
	
	.sort 
	
	

	#include Modules_Tree_Level_Computation/SimplifyFormResult.h 


	.sort


	#write <Output_Files/FormFactorFORM2Graph1.out> "FormFactorFORM[['FormFactorNumber']] = %e" FormFactor'FormFactorNumber'
	

	.sort
	.store
	.sort

#enddo


.end












