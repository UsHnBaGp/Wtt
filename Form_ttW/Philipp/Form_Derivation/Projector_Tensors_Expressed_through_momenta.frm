*######################################################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
* Decomposing Lorentztensors into an parity odd and parity even part %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*######################################################################

#-


*Execute this code from the upper directory. Otherwise the paths will not work correctly

off statistics;

symbols [-1/2s], mt, mh, Gram;
autodeclare symbols a;
index mu, nu, rho, sigma;
autodeclare index DummyIndex = 0;

symbols s12, s13, s14, s15, s23, s24, s25, s34, s35, s45;
vectors vecp1, vecp2, vecp3, vecp4, vecp5;

autodeclare functions p, HelpF; 
cfunctions denom, DecomposeEpsilon;

.global

*%%%%%%%%%%%%%%%%%%%%%%
*  (+,+) polarization %
*%%%%%%%%%%%%%%%%%%%%%%

global DecompositionDoublePlus = 2*vecp1(mu)*vecp2(nu) + 2*vecp1(nu)*vecp2(mu) - d_(mu, nu)*s12 - 2*e_(vecp1, vecp2, mu, nu);

.store
.sort 

global ProjectorEpsilonStructureP3P3PlusPlus            = DecompositionDoublePlus*vecp3(mu)*vecp3(nu); 
global ProjectorEpsilonStructureP4P4PlusPlus            = DecompositionDoublePlus*vecp4(mu)*vecp4(nu); 
global ProjectorEpsilonStructureP3P4PlusP4P3PlusPlus    = DecompositionDoublePlus*(vecp3(mu)*vecp4(nu) + vecp4(mu)*vecp3(nu) ); 
global ProjectorEpsilonStructureP3P4MinusP4P3PlusPlus   = DecompositionDoublePlus*(vecp3(mu)*vecp4(nu) - vecp4(mu)*vecp3(nu) );  

.sort

#include Modules_Tree_Level_Computation/FivePoint_Kinematics.h 

.sort




*print;
.sort

*%%%%%%%%%%%%%%%%%%%%%%
*  (+,-) polarization %
*%%%%%%%%%%%%%%%%%%%%%%


* Copy paste from Decomposition_Product_of_Polarization_Tensors.frm, variable is named TypedFromZettlr in that code

global DecompositionPlusMinus = 
* Terms proportional to metric
d_(mu, nu)*s12*(-s12*mt^2 + s13*s23 - s13*mt^2 - s23*mt^2 + mt^4) 

* Terms manifest symmetric under mu <-> nu
+ (s23 - mt^2)^2*2*vecp1(mu)*vecp1(nu) + (s13 - mt^2)^2*2*vecp2(mu)*vecp2(nu) + 2*s12^2*vecp3(mu)*vecp3(nu) 

* Terms 1 proporional to Levi-Civita tensor
- 2*e_(vecp1, vecp2, vecp3, mu)*(mt^2*(vecp1(nu) + vecp2(nu)) + s12*vecp3(nu) - s13*vecp2(nu) -s23*vecp1(nu) )

* Terms 2 proportional to only momenta
+ 2*s12*(mt^2-s23)* vecp1(mu)*vecp3(nu) + 2*s12*(mt^2-s13)*vecp2(mu)*vecp3(nu)  + 2*s12*mt^2*vecp1(mu)*vecp2(nu)

* Exchanged mu <-> nu in 1 and 2
+ 2*s12*(mt^2-s23)* vecp1(nu)*vecp3(mu) + 2*s12*(mt^2-s13)*vecp2(nu)*vecp3(mu)  + 2*s12*mt^2*vecp1(nu)*vecp2(mu)

- 2*e_(vecp1, vecp2, vecp3, nu)*(mt^2*(vecp1(mu) + vecp2(mu)) + s12*vecp3(mu) - s13*vecp2(mu) -s23*vecp1(mu) );


.store
.sort

local ProjectorEpsilonStructureP3P3PlusMinus            = DecompositionPlusMinus*vecp3(mu)*vecp3(nu); 
local ProjectorEpsilonStructureP4P4PlusMinus            = DecompositionPlusMinus*vecp4(mu)*vecp4(nu); 
local ProjectorEpsilonStructureP3P4PlusP4P3PlusMinus    = DecompositionPlusMinus*(vecp3(mu)*vecp4(nu) + vecp4(mu)*vecp3(nu) ); 
local ProjectorEpsilonStructureP3P4MinusP4P3PlusMinus   = DecompositionPlusMinus*(vecp3(mu)*vecp4(nu) - vecp4(mu)*vecp3(nu) );  
 

#include Modules_Tree_Level_Computation/FivePoint_Kinematics.h 

.sort 

b e_;
print;

.sort

#write <Output_Files/ProjectorEpsilonStructurePlusMinus.out> "cPlusMinus[3, 3] = %e " ProjectorEpsilonStructureP3P3PlusMinus;  
#write <Output_Files/ProjectorEpsilonStructurePlusMinus.out> "cPlusMinus[4, 4] = %e " ProjectorEpsilonStructureP4P4PlusMinus;  
#write <Output_Files/ProjectorEpsilonStructurePlusMinus.out> "cPlusMinus[3, 4, S] = %e " ProjectorEpsilonStructureP3P4PlusP4P3PlusMinus;  
#write <Output_Files/ProjectorEpsilonStructurePlusMinus.out> "cPlusMinus[3, 4, A] = %e " ProjectorEpsilonStructureP3P4MinusP4P3PlusMinus;  

.store


local ExpressionFoundByHand = 1/2*(gi_(1) - g5_(1))*g_(1,vecp2,vecp3,vecp1,vecp3);

trace4 1;

.sort 

#include Modules_Tree_Level_Computation/FivePoint_Kinematics.h
.sort

l testexpr = ProjectorEpsilonStructureP3P3PlusPlus  - ExpressionFoundByHand;

print;



.end


