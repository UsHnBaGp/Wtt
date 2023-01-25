#-
off statistics;

cfunctions SpinorCNumber, SpinorCNumberC, Sp(symmetric), denom;
autodeclare vectors vecp;

vectors eps1, eps2, eps1C, eps2C;

autodeclare index mu = 0, nu = 0;

symbols mt, mh, [];

autodeclare symbols s;
autodeclare functions p;

.global



*#####################################################################################
*************************************************************************************#
*                                                                                   *#
* 1. Step: Define the Lorentzstrucutres as expressions of the form LorentzT = ...   *#
*                                                                                   *#
*************************************************************************************#
*#####################################################################################




#include Modules_Tree_Level_Computation/Definition_Of_Lorentzstructures_As_Expressions.h

.store
.sort




*##############################################################################################################
**************************************************************************************************************#
*                                                                                                            *#
* 2. Step: I need the complex conjugated tensor structures of the projector basis, which are the first 16.   *#
*                                                                                                            *#
**************************************************************************************************************#
*##############################################################################################################



#do i = 1, 16 
	global LorentzT'i'C  = LorentzT'i'  ;
#enddo


id SpinorCNumber( vecp1?, vecp2? ) = SpinorCNumberC( vecp2, vecp1 );
id SpinorCNumber( vecp? )          = SpinorCNumberC( vecp );
id SpinorCNumber( [] )             = SpinorCNumberC( [] );

argument;
	id eps1 = eps1C;
	id eps2 = eps2C;
endargument;



.store
.sort


*#############################################################################################################################################
*********************************************************************************************************************************************#
*                                                                                                                                           *#
* 3. Step: Compute all possible Contractions of the 16 conjugated tensor structures with the 36 tensor structures. This matrix I call K.    *#
*                                                                                                                                           *#
*********************************************************************************************************************************************#
*#############################################################################################################################################






#do i = 1, 16
	#do j = 1, 36
		global KMatrixI'i'J'j' = LorentzT'i'C*LorentzT'j';
	#enddo
#enddo	






*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*%%%%%%% Perform the spin sums of the fermions %%%%%
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%




*The spinor structures must depend on vecp3 or vecp4. Don't use these momenta as wildcarts.

id SpinorCNumber ( [] )             = (g_(1,vecp4) - mt*gi_(1));
id SpinorCNumberC( [] )             = (g_(1,vecp3) + mt*gi_(1));


id SpinorCNumber ( vecp1? )         = (g_(1,vecp4) - mt*gi_(1))*g_(1, vecp1) ;
id SpinorCNumberC( vecp1? )         = (g_(1,vecp3) + mt*gi_(1))*g_(1, vecp1) ;


id SpinorCNumber ( vecp1?, vecp2? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, vecp1)*g_(1, vecp2) ;
id SpinorCNumberC( vecp1?, vecp2? ) = (g_(1,vecp3) + mt*gi_(1))*g_(1, vecp1)*g_(1, vecp2) ;


id SpinorCNumber ( vecp1?, vecp2?, vecp5? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, vecp1)*g_(1, vecp2)*g_(1, vecp5) ;
id SpinorCNumberC( vecp1?, vecp2?, vecp5? ) = (g_(1,vecp3) + mt*gi_(1))*g_(1, vecp1)*g_(1, vecp2)*g_(1, vecp5) ;

id SpinorCNumber ( vecp1?, vecp2?, vecp5?, vecp6? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, vecp1)*g_(1, vecp2)*g_(1, vecp5)*g_(1, vecp6) ;
id SpinorCNumberC( vecp1?, vecp2?, vecp5?, vecp6? ) = (g_(1,vecp3) + mt*gi_(1))*g_(1, vecp1)*g_(1, vecp2)*g_(1, vecp5)*g_(1, vecp6) ;


.sort

trace4 1;

.sort

#include Modules_Tree_Level_Computation/FivePoint_Kinematics.h



id vecp1.eps1 = 0;
id vecp2.eps1 = 0;

id vecp1.eps2 = 0;
id vecp2.eps2 = 0;


.sort











*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*%%%%%%% Perform the spin sums of the gluons   %%%%%
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%







* The 5 is more or less arbitrary
#do i = 1, 20
	id once Sp(eps1?, vecp?) = eps1(mu'i')*vecp(mu'i');
#enddo

* From taking the fermion trace we get scalar products of the polarisation vectors with momenta and among each other. We have to decompose these by hand. We use the index nu to avoid any conflict with the previous step.

#do i = 1, 10, 2
	id once eps1.vecp? = eps1(nu'i')*vecp(nu'i');
	id once eps2.vecp? = eps2(nu{'i' + 1})*vecp(nu{'i' + 1});
#enddo

.sort

*replace polarisation sums
id eps1(mu1?)*eps1C(mu2?) = -d_(mu1, mu2) + ( vecp1(mu1)*vecp2(mu2) + vecp1(mu2)*vecp2(mu1) )*denom(vecp1.vecp2);
id eps2(mu1?)*eps2C(mu2?) = -d_(mu1, mu2) + ( vecp1(mu1)*vecp2(mu2) + vecp1(mu2)*vecp2(mu1) )*denom(vecp1.vecp2);



sum mu1, ... , mu5, nu1, ... , nu10;

.sort

#include Modules_Tree_Level_Computation/FivePoint_Kinematics.h

.sort

chainin denom;

.sort


* Sure there is a command which is the opposite of factarg -> ask Lorenzo
repeat;
	id denom(s1?, s2?, ?s3 ) = denom(s1*s2, ?s3);
endrepeat;

.sort







*#######################################
***************************************#
*                                     *#
* 4. Step: Save results into file.    *#
*                                     *#
***************************************#
*#######################################






* Save the complete K matrix in a format, which can be easily loaded into Mathematica.
#do i = 1, 16
	#do j = 1, 36
		#write <Output_Files/K_Matrix_Component.out> "KMatrixForm[['i','j']] =  %e ", KMatrixI'i'J'j';
	#enddo
#enddo



* The i = 1, ..., 16 j = 1, ... , 16 entries of the matrix K are precisely the components of the matrix M, which I need for the projector.

#do i = 1, 16
	#do j = 1, 16
		#write <Output_Files/M_Matrix_Component.out> "MMatrixForm[['i','j']] =  %e ", KMatrixI'i'J'j';
	#enddo
#enddo


#write <Modules_Tree_Level_Computation/K_Matrix_Component_ID.h> "* This file was written by the program \n* All_Possible_Products_Of_ProjectorTensors_with_With_Lorentz_Tensors.frm \n\n"


#do i = 1, 16
	#do j = 1, 36
		#write <Modules_Tree_Level_Computation/K_Matrix_Component_ID.h> "id KMatrix('i','j') =  %e \n .sort", KMatrixI'i'J'j';
*		#write <Modules_Tree_Level_Computation/K_Matrix_Component_ID.h> "id mt = 3; \n id mh = 17; \n id s12 = 31; \n id s13 = 419; \n id s14 = 73; \n id s23 = 127; \n .sort"
	#enddo
#enddo




.end
