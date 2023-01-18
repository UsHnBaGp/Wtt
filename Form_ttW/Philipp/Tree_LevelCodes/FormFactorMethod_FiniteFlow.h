*###########################################################################################################################
***************************************************************************************************************************#
*                                                                                                                         *#
* Step 2: Take tree level amplitude and replace the tensor structure with one of the 36 independent tensor structure      *#
*                                                                                                                         *#
***************************************************************************************************************************#
*###########################################################################################################################






#include Modules_Tree_Level_Computation/Express_Tree_Level_Amplitude_in_36_Lorentzstructures.h


.sort
.store




*###########################################################################################################################
***************************************************************************************************************************#
*                                                                                                                         *#
* Step 3: Extract kinematic + color prefactors of the 36 tensor structures and prepare them for usage in FiniteFlow       *#
*                                                                                                                         *#
***************************************************************************************************************************#
*###########################################################################################################################



#do i = 1, 36
	#do ColFactorNumber = 1, 2
		
		local KinematicPrefactor'i' = AmplitudeInTensorStructure;

* These are overall factors which we can reconstruct at the very end.
		id gs = 1;
		id gw = 1;
		id mw^-1 = 1;
		id i_ = 1;
	
		id colFactor'ColFactorNumber' = HelpF;
		
*              At tree-level there are only 2 independent color structures.
		#do j = 1, 2
			id colFactor'j' = 0;
		#enddo
			
		id TLorentz( 'i' ) = HelpF;
		id TLorentz( mu? ) = 0;
		id HelpF = 1;
	
	
		#include Modules_Tree_Level_Computation/FivePoint_Kinematics.h
	
	
	
		print;
	
		.sort
	
		#write <Output_Files/Kinematic_Prefactors_ColFactor'ColFactorNumber'.out> "KinematicPrefactorsColFactor'ColFactorNumber'[['i']] = %e" KinematicPrefactor'i'
	

	
	
	
		.store 
		.sort
	#enddo
#enddo 


*###########################################################################################################################
***************************************************************************************************************************#
*                                                                                                                         *#
* Step 4: Switch to mathematica finite flow to derive the projectors and the form factors                                 *#
*                                                                                                                         *#
***************************************************************************************************************************#
*###########################################################################################################################
