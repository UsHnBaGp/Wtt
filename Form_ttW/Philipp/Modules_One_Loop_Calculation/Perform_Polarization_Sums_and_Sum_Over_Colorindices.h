*#############################################################
*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*#%                                                         %#
*#%   Trace formalism for tree level amplitude of gg -> tth %#
*#%                                                         %#
*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*#############################################################

	



*%%%%%%%%%%%%%%%%%%%%%%%%%%%
*% Perform color algebra.  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%



*The replacements were checked with FeynCalc

id colFactor1*colFactor1C =  CA*CF^2;
id colFactor1*colFactor2C = -CF/2;

id colFactor2*colFactor1C = -CF/2;
id colFactor2*colFactor2C =  CA*CF^2;


.sort




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*% Close fermion lines and perform traces  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


id SpinorCNumber ( [] )                     = (g_(1,vecp4) - mt*gi_(1));
id SpinorCNumberC( [] )                     = (g_(1,vecp3) + mt*gi_(1));

id SpinorCNumber ( mu1? )                   = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1) ;
id SpinorCNumberC( mu1? )                   = (g_(1,vecp3) + mt*gi_(1))*g_(1, mu1) ;

id SpinorCNumber ( mu1?, mu2? )             = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1)*g_(1, mu2) ;
id SpinorCNumberC( mu1?, mu2? )             = (g_(1,vecp3) + mt*gi_(1))*g_(1, mu1)*g_(1, mu2) ;

id SpinorCNumber ( mu1?, mu2?, mu5? )       = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1)*g_(1, mu2)*g_(1, mu5) ;
id SpinorCNumberC( mu1?, mu2?, mu5? )       = (g_(1,vecp3) + mt*gi_(1))*g_(1, mu1)*g_(1, mu2)*g_(1, mu5) ;

id SpinorCNumber ( mu1?, mu2?, mu5?, mu6? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1)*g_(1, mu2)*g_(1, mu5)*g_(1, mu6) ;
id SpinorCNumberC( mu1?, mu2?, mu5?, mu6? ) = (g_(1,vecp3) + mt*gi_(1))*g_(1, mu1)*g_(1, mu2)*g_(1, mu5)*g_(1, mu6) ;


id SpinorCNumber ( mu1?, mu2?, mu5?, mu6?, mu7? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1, mu2, mu5, mu6, mu7) ;

id SpinorCNumber ( mu1?, mu2?, mu5?, mu6?, mu7?, mu8? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1, mu2, mu5, mu6, mu7, mu8) ;

id SpinorCNumber ( mu1?, mu2?, mu5?, mu6?, mu7?, mu8?, mu9? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1, mu2, mu5, mu6, mu7, mu8, mu9) ;

id SpinorCNumber ( mu1?, mu2?, mu5?, mu6?, mu7?, mu8?, mu9?, mu10? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1, mu2, mu5, mu6, mu7, mu8, mu9, mu10) ;

id SpinorCNumber ( mu1?, mu2?, mu5?, mu6?, mu7?, mu8?, mu9?, mu10?, mu11? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1, mu2, mu5, mu6, mu7, mu8, mu9, mu10, mu11) ;

id SpinorCNumber ( mu1?, mu2?, mu5?, mu6?, mu7?, mu8?, mu9?, mu10?, mu11?, mu12? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1, mu2, mu5, mu6, mu7, mu8, mu9, mu10, mu11, mu12) ;

id SpinorCNumber ( mu1?, mu2?, mu5?, mu6?, mu7?, mu8?, mu9?, mu10?, mu11?, mu12?, mu13? ) = (g_(1,vecp4) - mt*gi_(1))*g_(1, mu1, mu2, mu5, mu6, mu7, mu8, mu9, mu10, mu11, mu12, mu13) ;

.sort 


tracen 1;

 
.sort 

tracen 2;

.sort

* tracing produces zero terms

id vecp1.vecp1 = 0;
id vecp2.vecp2 = 0;

id vecp1.eps1  = 0;
id vecp2.eps1  = 0;

id vecp1.eps2  = 0;
id vecp2.eps2  = 0;

id vecp1.eps1C = 0;
id vecp2.eps1C = 0;

id vecp1.eps2C = 0;
id vecp2.eps2C = 0;




.sort




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*% Insert gluon polarisation sums  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


id eps1.eps2?  = Sp(eps1, eps2);
id eps2.eps1?  = Sp(eps2, eps1);
id eps1C.eps2? = Sp(eps1C, eps2);
id eps2C.eps1? = Sp(eps2C, eps1);

.sort

id Sp(eps1, eps2?)  = eps1(mu1)*eps2(mu1);
id Sp(eps2, eps1?)  = eps2(mu2)*eps1(mu2);
id Sp(eps1C, eps2?) = eps1C(nu1)*eps2(nu1);
id Sp(eps2C, eps1?) = eps2C(nu2)*eps1(nu2);


.sort

id eps1(mu1?)*eps1C(mu2?) = -d_(mu1, mu2) + ( vecp1(mu1)*vecp2(mu2) + vecp1(mu2)*vecp2(mu1) )*denom(vecp1.vecp2);
id eps2(mu1?)*eps2C(mu2?) = -d_(mu1, mu2) + ( vecp1(mu1)*vecp2(mu2) + vecp1(mu2)*vecp2(mu1) )*denom(vecp1.vecp2);

.sort

sum mu1, mu2, nu1, nu2;

.sort

