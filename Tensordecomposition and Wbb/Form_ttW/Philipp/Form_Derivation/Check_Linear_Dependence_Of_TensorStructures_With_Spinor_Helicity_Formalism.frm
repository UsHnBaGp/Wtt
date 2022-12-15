#-
off statistics;
#message find linear independent Lorentzstructures with the help of spinor helicity formalism

*Naivly I would expect to find 16 linear independent Lorentzstructures after I have completed this procedure. However, it might be that not all 16 linear independent structures appear at tree level.

cfunction denom, sqrt;
cfunctions SpinorCNumber, Sp, angl(antisymmetric), braket(antisymmetric), SqLKet, BraSqR;
functions SqL, SqR, Ket, Bra;

cf RationalFunctopn, num ;

autodeclare index mu, nu;

vectors eps1, eps2;
autodeclare vectors vecp, vecq, vecr;

symbols [], mt;
autodeclare symbols aux;

.global

*these are the tensor structures I found in the tree level.


#include ../Modules_Tree_Level_Computation/Definition_Of_Lorentzstructures_As_Expressions.h


*before I can use spinor helicity formalism I have to specify the helicity states of the external particles. This is a little bit subtle in the case of the tops. These are massive thus the helicity is not a good quantum number. 
* for concreteness I choose the two gluons to have negative helicity.


*For security I use the 2 as fermion line as I might have to decompose the SpinorCNumberStructure

* here I must correct for the fact that indices appear more than 2 times, this might cause problems if the function arguments of different functions talk to each other !
argument Sp;

*	Expressions see Eq. (2.49) in Henriette Elvang
	id eps1 = -denom(sqrt(2))*denom(angl(vecp2, vecp1))*SqL(vecp2)*g_(2,mu)*Ket(vecp1);
	id eps2 = -denom(sqrt(2))*denom(angl(vecp1, vecp2))*SqL(vecp1)*g_(2,mu)*Ket(vecp2);
	
	#do j = 1, 4
		id vecp'j' = vecp'j'(mu);
	#enddo
endargument;

id Sp( aux1?, aux2?) = Sp(aux1*aux2);
id Sp( aux1? )  = aux1;

id g_(2, vecp3) = Ket(vecq3)*SqL(vecq3) + SqR(vecq3)*Bra(vecq3) + Ket(vecr3)*SqL(vecr3) + SqR(vecr3)*Bra(vecr3);
id g_(2, vecp4) = Ket(vecq4)*SqL(vecq4) + SqR(vecq4)*Bra(vecq4) + Ket(vecr4)*SqL(vecr4) + SqR(vecr4)*Bra(vecr4);



id SqL(vecp1?)*g_(nu?, mu1?)*Ket(vecp2?) = SqLKet(vecp1, mu1, vecp2);
id Bra(vecp1?)*g_(nu?, mu1?)*SqR(vecp2?) = BraSqR(vecp1, mu1, vecp2);


id BraSqR(vecp1?, mu2?, vecp2?) = SqLKet(vecp2, mu2, vecp1);

*Fierz identity:
id SqLKet(vecp1?, mu1?, vecp2?)*SqLKet( vecp3?, mu1?, vecp4?) = 2*angl(vecp1,vecp3)*braket(vecp4,vecp2);

id SqL(vecp1?)*Ket(vecp2?) = 0;
id Bra(vecp1?)*SqR(vecp2?) = 0; 

id Bra(vecp1?)*Ket(vecp2?) = braket(vecp1, vecp2);
id SqL(vecp1?)*SqR(vecp2?) = angl(vecp1, vecp2); 


id denom(sqrt(2))^2 = 1/2;



argument SpinorCNumber;

*	Expressions see Eq. (2.50) in Henriette Elvang
	id eps1 = sqrt(2)*denom(angl(vecp2,vecp1))*(Ket(vecp1)*SqL(vecp2) + SqR(vecp2)*Bra(vecp1) );
	id eps2 = sqrt(2)*denom(angl(vecp1,vecp2))*(Ket(vecp2)*SqL(vecp1) + SqR(vecp1)*Bra(vecp2) );
	
* With the momenta I have to ve careful as p3 and p4 are massive momenta

	id vecp1 = Ket(vecp1)*SqL(vecp1) + SqR(vecp1)*Bra(vecp1);
	id vecp2 = Ket(vecp2)*SqL(vecp2) + SqR(vecp2)*Bra(vecp2);
	
	id vecp3 = Ket(vecq3)*SqL(vecq3) + SqR(vecq3)*Bra(vecq3) + Ket(vecr3)*SqL(vecr3) + SqR(vecr3)*Bra(vecr3);
	id vecp4 = Ket(vecq4)*SqL(vecq4) + SqR(vecq4)*Bra(vecq4) + Ket(vecr4)*SqL(vecr4) + SqR(vecr4)*Bra(vecr4);

endargument;


repeat;
	id SpinorCNumber(aux1?, aux2?, ?aux3) = SpinorCNumber(aux1*aux2,?aux3);
endrepeat;




argument;
	id SqL(vecp1?)*Ket(vecp2?) = 0;
	id Bra(vecp1?)*SqR(vecp2?) = 0;
	
	id Bra(vecp1?)*Ket(vecp2?) = braket(vecp1, vecp2);
	id SqL(vecp1?)*SqR(vecp2?) = angl(vecp1, vecp2); 
endargument;

* now we have to set the spinors. We take Eq. (6) from the Exerciesheet 3 of Lorenzos Amplitude Lecture. (Proper reference and deeper understanding of massive spinor helicity needed). We take the plus helicity.

id SpinorCNumber(aux?) = (SqL(vecq4) + mt*denom(braket(vecr4, vecq4))*Bra(vecr4)   )*aux*( Ket(vecq3) + mt*SqR(vecr3)*denom(angl(vecq3, vecr3)) );
id [] = 1;

id SqL(vecp1?)*Ket(vecp2?) = 0;
id Bra(vecp1?)*SqR(vecp2?) = 0;
id Bra(vecp1?)*Ket(vecp2?) = braket(vecp1, vecp2);
id SqL(vecp1?)*SqR(vecp2?) = angl(vecp1, vecp2); 


*b denom, SpinorCNumber;
*print[] ;

*.sort

*collect num ;

*.sort

*id num(aux?)   = RationalFunctopn(aux,1) ;
*id denom(aux?) = RationalFunctopn(1,aux) ;


*id sqrt(2)^2 = 2;
*id denom(aux?) = aux^-1;





argument;
	id vecp1 = 1;
	id vecp2 = 2;
endargument;

id vecp1 = 1;
id vecp2 = 2;

argument;
argument;
	id vecp1 = 1;
	id vecp2 = 2;
endargument;
endargument;

argument;
argument;
argument;
	id vecp1 = 1;
	id vecp2 = 2;
endargument;
endargument;
endargument;
id sqrt(2)^2 = 2;

print;


.end














