autodeclare vectors vecp;

local Amplitude1 = (  ConjugatedRestoredAntiTopLine1 + ... + ConjugatedRestoredAntiTopLine'$NumberOfDiagrams'  )*( RestoredAntiTopLine1 + ... + RestoredAntiTopLine'$NumberOfDiagrams'  );


#message Do color algebra...



*bring color objects in front

repeat;
	id g_(1, mu?)*T(?col)   = T(?col)*g_(1,mu);
	id HelpF?(?aux)*T(?col) = T(?col)*HelpF(?aux);	
endrepeat;



*apply color identity (not complete yet)
repeat;
	id T(col1?, ColFun1?, ColFun2?)*T(col1?, ColFun2?, ColFun3? ) = CF*d_(ColFun1,ColFun3);
	id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun3? )*T(col1?, ColFun3?, ColFun4?)*T(col2?, ColFun4?, ColFun1?) = -CF/2;
	id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun3? )*T(col3?, ColFun3?, ColFun1?)*fcol(col1?, col2?, col3?)    =  SUN^2*CF*i_/2;
	id fcol(col1?, col2?, col3? )*fcol(col1?, col2?, col4?) = SUN*d_( col3, col4 );
endrepeat;



*we skip the procedure to bring the gluon propagator to the front as it will always give a polarization sum. I replace the last external gluons not the conjugated one because these are at the end of the expression and do not bother anymore

#message Insert polarization sums...

id ConjugatedExternalGluon(?aux) = 1;

id ExternalGluon(nu1, p1, ?aux)  = -d_(nu1, sigma1) + (vecp1(nu1)*vecp2(sigma1)  +  vecp1(sigma1)*vecp2(nu1) ) * denom(vecp1.vecp2) ;
id ExternalGluon(nu2, p2, ?aux)  = -d_(nu2, sigma2) + (vecp1(nu2)*vecp2(sigma2)  +  vecp1(sigma2)*vecp2(nu2) ) * denom(vecp1.vecp2) ;


#message Close and perform fermion traces...

.sort

*See Eq. (13.59) and Eq. (13.60) in Schwartz
id ConjugatedExternalAntiTop(p4) = g_(1, vecp4) - mt*gi_(1);
id ConjugatedExternalTop(p3)     = g_(1,vecp3) + mt*gi_(1);
id ExternalTop(p3)     = 1;
id ExternalAntiTop(p4) = 1;

.sort

trace4 1;




sum nu1, nu2, sigma1, sigma2, mu1, mu2, rho1, rho2;

.sort


id denom(1/2*s12) = 2/s12;
id denom(1/2*s12)^2 = 1/s12^2;

id s12^-2 = denom(s12);
id s12^-1 = denom(s12);


id NGen = 2*SUN*CF;


id denom(1/2*HelpF?) = 2*denom(HelpF);


.sort

