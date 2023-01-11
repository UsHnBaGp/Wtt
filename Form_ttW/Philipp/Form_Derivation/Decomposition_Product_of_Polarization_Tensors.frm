#-


*Execute this code from the upper directory. Otherwise the paths will not work correctly

off statistics;

symbols [-1/2s], mt, mh, Gram, tr5;
autodeclare symbols a;
index mu, nu, rho, sigma;

autodeclare index DummyIndex = 0;

autodeclare vectors vecp, rDummy, sDummy;
autodeclare functions p, HelpF; 
cfunctions denom, DecomposeEpsilon;

symbols s12, s13, s14, s15, s23, s24, s25, s34, s35, s45;

.global



*##########################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##
*   Decomposition (+,-) configuration   %##
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##
*##########################################





*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*  Set up expressions to take the trace  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%




*Eq. 36 in arXiv:hep-ph/9601359 close fermion sums in spinor helicity formalsism
global Decomposition1 = 1/2*(gi_(1) - g5_(1)) * g_(1, vecp2, mu, vecp1, rDummy1)*1/2*(gi_(2) - g5_(2))*g_(2, vecp2, nu, vecp1, sDummy1);
global Decomposition2 = 1/2*(gi_(1) - g5_(1)) * g_(1, vecp2, mu, vecp1, rDummy2, vecp2, nu, vecp1, sDummy2);



trace4 1;
trace4 2;

.sort

id rDummy2 = rDummy1;
id sDummy2 = sDummy1;

id rDummy1 = vecp3;
id sDummy1 = vecp3;

.sort

id vecp1.vecp1 = 0;
id vecp2.vecp2 = 0;
id vecp3.vecp3 = mt^2;
id vecp4.vecp4 = mt^2;


.sort 

*replace form convention with FeynCalc convention
*id e_(mu?, nu?, rho?, sigma?) = -i_*e_(mu, nu, rho, sigma);
*id e_(vecp1, vecp2, vecp3, vecp4) = i_*tr5;

.sort

b e_;
print;

.sort


.store



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*  Check that the two spilts of the trace give the same result  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



.sort


local CheckIndependenceOfTraceSplitting = Decomposition1 - Decomposition2;


contract;


.sort



id e_(vecp1?, vecp2?, vecp3?, sigma?) = DecomposeEpsilon(DummyIndex1, DummyIndex2, DummyIndex3, sigma)*vecp1(DummyIndex1)*vecp2(DummyIndex2)*vecp3( DummyIndex3);
id e_(vecp1?, vecp2?, rho?, sigma?)   = DecomposeEpsilon(DummyIndex1, DummyIndex2, rho, sigma)*vecp1(DummyIndex1)*vecp2(DummyIndex2);
id e_(vecp1?, nu?, rho?, sigma?)      = DecomposeEpsilon(DummyIndex1, nu, rho, sigma)*vecp1(DummyIndex1);
id e_(mu?, nu?, rho?, sigma?)         = DecomposeEpsilon(mu, nu, rho, sigma);



.sort

#include DecompositionLeviCivitaInMomentaFORM.h

sum DummyIndex1, ..., DummyIndex3;

.sort

local test = CheckIndependenceOfTraceSplitting*vecp1(mu);
local test = CheckIndependenceOfTraceSplitting*vecp2(mu);
local test = CheckIndependenceOfTraceSplitting*vecp3(mu)*vecp3(nu);
local test = CheckIndependenceOfTraceSplitting*vecp3(mu)*vecp4(nu);
local test = CheckIndependenceOfTraceSplitting*vecp4(mu)*vecp3(nu);
local test = CheckIndependenceOfTraceSplitting*vecp4(mu)*vecp4(nu);




*print;



.sort

#include ../Modules_One_Loop_Calculation/FivePoint_Kinematics.h 

.sort

#message Crosscheck 1 must be 0
print CheckIndependenceOfTraceSplitting;
*id mt = 1;
print test;

*.end
.sort


.store


*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Check that final expression is symmetric in the exchange mu <-> nu %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



global Decomposition1SwapMuAndNu = Decomposition1;


id e_(vecp1?, vecp2? ,vecp3?, mu)  = e_(vecp1, vecp2, vecp3, rho);
id vecp?(mu)  = vecp(rho);

id e_(vecp1?, vecp2? ,vecp3?, nu)  = e_(vecp1, vecp2, vecp3, mu);
id vecp?(nu)  = vecp(mu);

id e_(vecp1?, vecp2? ,vecp3?, rho) = e_(vecp1, vecp2, vecp3, nu);
id vecp?(rho) = vecp(nu);


.sort
.store

local CheckDifferenceAfterSwappingMuAndNu = (Decomposition1SwapMuAndNu - Decomposition1)*(a1*vecp1(mu)*vecp1(nu)  + a2*vecp1(mu)*vecp2(nu)  + a3*vecp1(mu)*vecp3(nu)  + a4*vecp1(mu)*vecp4(nu) 
                                                                                        + a5*vecp2(mu)*vecp1(nu)  + a6*vecp2(mu)*vecp2(nu)  + a7*vecp2(mu)*vecp3(nu)  + a8*vecp2(mu)*vecp4(nu) 
                                                                                        + a9*vecp3(mu)*vecp1(nu)  + a10*vecp3(mu)*vecp2(nu) + a11*vecp3(mu)*vecp3(nu) + a12*vecp3(mu)*vecp4(nu) 
                                                                                        + a13*vecp4(mu)*vecp1(nu) + a14*vecp4(mu)*vecp2(nu) + a15*vecp4(mu)*vecp3(nu) + a16*vecp4(mu)*vecp4(nu));


id e_(vecp1?, vecp2?, vecp3?, sigma?) = DecomposeEpsilon(DummyIndex1, DummyIndex2, DummyIndex3, sigma)*vecp1(DummyIndex1)*vecp2(DummyIndex2)*vecp3( DummyIndex3);

#include DecompositionLeviCivitaInMomentaFORM.h

sum DummyIndex1, ..., DummyIndex3;

.sort

#include ../Modules_One_Loop_Calculation/FivePoint_Kinematics.h 

.sort

#message Crosscheck 2 must be 0
print CheckDifferenceAfterSwappingMuAndNu ;


.sort
.store




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Replace product of two Levi-Civita_Tensors   %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

   

global ReplaceDoubleEpsilon = Decomposition1;


id e_(vecp1?, vecp2?, vecp3?, mu?) = HelpF(vecp1, vecp2, vecp3, mu);
id HelpF(vecp1?, vecp2?, vecp3?, mu?)*HelpF(vecp4?, vecp5?, vecp6?, nu?) = e_(vecp1, vecp2, vecp3, mu)*e_(vecp4, vecp5, vecp6, nu);


contract;


.sort


id HelpF(vecp1?, vecp2?, vecp3?, mu?) = e_(vecp1, vecp2, vecp3, mu);


id vecp1.vecp1 = 0;
id vecp2.vecp2 = 0;
id vecp3.vecp3 = mt^2;
id vecp4.vecp4 = mt^2;


.sort 



#include ../Modules_One_Loop_Calculation/FivePoint_Kinematics.h 


.sort

format mathematica;
#write <Decomposition_Of_Plus_Minus_Polarization_Vectors.out> "DecompositionOfPlusMinusPolarizationVectors = %e" ReplaceDoubleEpsilon;

.sort

b e_, HelpF;
*print;


.sort
.store

global TypedFromZettlr = 
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

local DifferenceTypedAndInternal = ReplaceDoubleEpsilon - TypedFromZettlr;

*print;

.sort




*###########################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##
* Decomposition of (+,+) configuration   %##
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##
*###########################################




global DecompositionDoublePlus = 1/2*(gi_(1) - g5_(1)) * g_(1, vecp2, mu, vecp1, nu);



trace4 1;


.sort


#include ../Modules_One_Loop_Calculation/FivePoint_Kinematics.h 


.sort

print;

.sort

*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Replace Levi-Civita symbols with one open index  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

symbols A, B, C, E;

local ReplacedLeviCivitaSymbol = TypedFromZettlr;



id e_(vecp1, vecp2, vecp3, mu?) = A*vecp1(mu) + B*vecp2(mu) + C*vecp3(mu) + E*vecp4(mu);

.sort
*print;
.end 

