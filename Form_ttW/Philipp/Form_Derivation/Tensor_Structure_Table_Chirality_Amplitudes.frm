*In this form script I compute the ingridients to perform the squaring of the chirality amplitudes 
#-
off statistics;

cfunctions SpinorCNumber, SpinorCNumberC, Sp(symmetric), denom;
autodeclare vectors vecp;

vectors eps1, eps2, eps1C, eps2C;

autodeclare index mu = 0, nu = 0;

symbols mt, mh, tr5, [];

autodeclare symbols s;
autodeclare functions p;

.global

*######################################################
*   Computation of combinations polarization vectors  #
*######################################################

local PolarisationTableI1J1  = 1/2*(gi_(1)-g5_(1))*g_(1, vecp1, vecp3, vecp2, vecp3, vecp1, vecp3, vecp2, vecp3);
local PolarisationTableI1J1b = 1/2*(gi_(1)-g5_(1))*g_(1, vecp1, vecp3, vecp2, vecp3);
local PolarisationTableI2J2  = 1/2*(gi_(1)-g5_(1))*g_(1, vecp2, vecp3, vecp1, vecp3);


trace4 1; 

.sort

#include ../Modules_One_Loop_Calculation/FivePoint_Kinematics.h

*print;

.sort

*Some cross checks must give 0
local diff1 = PolarisationTableI1J1 - PolarisationTableI2J2^2;
local diff2 = PolarisationTableI1J1b  - PolarisationTableI2J2;

.store
*print;

*#########################################
*   Computation of combinations spinors  #
*#########################################

.sort 

ntensor PL, PR;

global PsiLLP  = mt*(g_(1,vecp4) - mt)*(g_(1, vecp1)+g_(1, vecp2))*PL(1);
global PCsiLLP = mt*(g_(1,vecp3) + mt)*(g_(1, vecp1)+g_(1, vecp2))*PL(1);

global PsiLLM  = mt*(g_(1,vecp4) - mt)*(g_(1, vecp1)-g_(1, vecp2))*PL(1);
global PCsiLLM = mt*(g_(1,vecp3) + mt)*(g_(1, vecp1)-g_(1, vecp2))*PL(1);

global PsiRLP  = s12*(g_(1,vecp4) - mt)*PL(1);
global PCsiRLP = s12*(g_(1,vecp3) + mt)*PR(1);

global PsiRLM  = (g_(1,vecp4) - mt)*(g_(1, vecp1, vecp2)-g_(1, vecp2, vecp1))*PL(1);
global PCsiRLM = (g_(1,vecp3) + mt)*(g_(1, vecp2, vecp1)-g_(1, vecp1, vecp2))*PR(1);

global PsiRRP  = mt*(g_(1,vecp4) - mt)*(g_(1, vecp1)+g_(1, vecp2))*PR(1);
global PCsiRRP = mt*(g_(1,vecp3) + mt)*(g_(1, vecp1)+g_(1, vecp2))*PR(1);

global PsiRRM  = mt*(g_(1,vecp4) - mt)*(g_(1, vecp1)-g_(1, vecp2))*PR(1);
global PCsiRRM = mt*(g_(1,vecp3) + mt)*(g_(1, vecp1)-g_(1, vecp2))*PR(1);

global PsiLRP  = s12*(g_(1,vecp4) - mt)*PR(1);
global PCsiLRP = s12*(g_(1,vecp3) + mt)*PL(1);

global PsiLRM  = (g_(1,vecp4) - mt)*(g_(1, vecp1, vecp2)-g_(1, vecp2, vecp1))*PR(1);
global PCsiLRM = (g_(1,vecp3) + mt)*(g_(1, vecp2, vecp1)-g_(1, vecp1, vecp2))*PL(1);

*print;

.sort
.store

.sort

local PsiI3J3 = PCsiLLP*PsiLLP;
local PsiI3J4 = PCsiLLP*PsiLLM;
local PsiI3J1 = PCsiLLP*PsiRLP;
local PsiI3J2 = PCsiLLP*PsiRLM;
local PsiI3J7 = PCsiLLP*PsiRRP;
local PsiI3J8 = PCsiLLP*PsiRRM;
local PsiI3J5 = PCsiLLP*PsiLRP;
local PsiI3J6 = PCsiLLP*PsiLRM;

local PsiI4J3 = PCsiLLM*PsiLLP;
local PsiI4J4 = PCsiLLM*PsiLLM;
local PsiI4J1 = PCsiLLM*PsiRLP;
local PsiI4J2 = PCsiLLM*PsiRLM;
local PsiI4J7 = PCsiLLM*PsiRRP;
local PsiI4J8 = PCsiLLM*PsiRRM;
local PsiI4J5 = PCsiLLM*PsiLRP;
local PsiI4J6 = PCsiLLM*PsiLRM;

local PsiI1J3 = PCsiRLP*PsiLLP;
local PsiI1J4 = PCsiRLP*PsiLLM;
local PsiI1J1 = PCsiRLP*PsiRLP;
local PsiI1J2 = PCsiRLP*PsiRLM;
local PsiI1J7 = PCsiRLP*PsiRRP;
local PsiI1J8 = PCsiRLP*PsiRRM;
local PsiI1J5 = PCsiRLP*PsiLRP;
local PsiI1J6 = PCsiRLP*PsiLRM;

local PsiI2J3 = PCsiRLM*PsiLLP;
local PsiI2J4 = PCsiRLM*PsiLLM;
local PsiI2J1 = PCsiRLM*PsiRLP;
local PsiI2J2 = PCsiRLM*PsiRLM;
local PsiI2J7 = PCsiRLM*PsiRRP;
local PsiI2J8 = PCsiRLM*PsiRRM;
local PsiI2J5 = PCsiRLM*PsiLRP;
local PsiI2J6 = PCsiRLM*PsiLRM;

local PsiI7J3 = PCsiRRP*PsiLLP;
local PsiI7J4 = PCsiRRP*PsiLLM;
local PsiI7J1 = PCsiRRP*PsiRLP;
local PsiI7J2 = PCsiRRP*PsiRLM;
local PsiI7J7 = PCsiRRP*PsiRRP;
local PsiI7J8 = PCsiRRP*PsiRRM;
local PsiI7J5 = PCsiRRP*PsiLRP;
local PsiI7J6 = PCsiRRP*PsiLRM;

local PsiI8J3 = PCsiRRM*PsiLLP;
local PsiI8J4 = PCsiRRM*PsiLLM;
local PsiI8J1 = PCsiRRM*PsiRLP;
local PsiI8J2 = PCsiRRM*PsiRLM;
local PsiI8J7 = PCsiRRM*PsiRRP;
local PsiI8J8 = PCsiRRM*PsiRRM;
local PsiI8J5 = PCsiRRM*PsiLRP;
local PsiI8J6 = PCsiRRM*PsiLRM;

local PsiI5J3 = PCsiLRP*PsiLLP;
local PsiI5J4 = PCsiLRP*PsiLLM;
local PsiI5J1 = PCsiLRP*PsiRLP;
local PsiI5J2 = PCsiLRP*PsiRLM;
local PsiI5J7 = PCsiLRP*PsiRRP;
local PsiI5J8 = PCsiLRP*PsiRRM;
local PsiI5J5 = PCsiLRP*PsiLRP;
local PsiI5J6 = PCsiLRP*PsiLRM;


local PsiI6J3 = PCsiLRM*PsiLLP;
local PsiI6J4 = PCsiLRM*PsiLLM;
local PsiI6J1 = PCsiLRM*PsiRLP;
local PsiI6J2 = PCsiLRM*PsiRLM;
local PsiI6J7 = PCsiLRM*PsiRRP;
local PsiI6J8 = PCsiLRM*PsiRRM;
local PsiI6J5 = PCsiLRM*PsiLRP;
local PsiI6J6 = PCsiLRM*PsiLRM;



id PL(mu?) = 1/2*(gi_(mu) - g5_(mu));
id PR(mu?) = 1/2*(gi_(mu) + g5_(mu));

.sort 

trace4 1;

.sort 

*replace form convention with FeynCalc convention
id e_(vecp1, vecp2, vecp3, vecp4) = tr5;
*id e_(mu1?, mu2?, mu3?, mu4?) = -i_*e_(mu1, mu2, mu3, mu4);


#include ../Modules_One_Loop_Calculation/FivePoint_Kinematics.h

#do i = 1,8
	#do j = 1,8
	
		format mathematica;
		#write <../Output_Files/Chirality_Table_Components.out> "ChiTable[['i','j']] = %e" PsiI'i'J'j';

	
	#enddo
#enddo
.sort
*print;
.store


**********************************************
**    Test of form convention vs FeynCalc   **
**********************************************
      
      
local test = g_(1, mu1, mu2, mu3, mu4)*g5_(1)*vecp1(mu1)*vecp2(mu2)*vecp3(mu3)*vecp4(mu4);


trace4 1;

.sort

*replace form convention with FeynCalc convention
id e_(mu1?, mu2?, mu3?, mu4?) = -i_*e_(mu1, mu2, mu3, mu4);

*print;

.sort
sum mu1, mu2, mu3, mu4;
*print;


.end
