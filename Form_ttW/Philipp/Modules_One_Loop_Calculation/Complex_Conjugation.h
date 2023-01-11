*################################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*      Complex conjugation of expressions      %#     
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*################################################




*%%%%%%%%%%%%%%%%%%%%%%%%
*% trivial conjugations %      
*%%%%%%%%%%%%%%%%%%%%%%%%

id i_ = -i_;



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*%Complex conjugation of polarisation tensors %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



id eps1(nu1) = eps1C(rho1);
id eps2(nu2) = eps2C(rho2);

argument;
	id eps1 = eps1C;
	id eps2 = eps2C;
endargument;

*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*% Complex conjugation of spinor structures  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


id SpinorCNumber(mu1?, mu2?, mu3?, mu4?, mu5?) = SpinorCNumberC(mu5, mu4, mu3, mu2, mu1); 
id SpinorCNumber(mu1?, mu2?, mu3?, mu4? )      = SpinorCNumberC(mu4, mu3, mu2, mu1); 
id SpinorCNumber(mu1?, mu2?, mu3?)             = SpinorCNumberC(mu3, mu2, mu1); 
id SpinorCNumber(mu1?, mu2?)                   = SpinorCNumberC(mu2, mu1); 
id SpinorCNumber(mu1?)                         = SpinorCNumberC(mu1); 
id SpinorCNumber([])                           = SpinorCNumberC([]);



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*  Complex conjugation of colorstructures %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


*at tree level there is only this one
id TProduct(col1?, col2?, colFun1?, colFun2? ) = TProduct(col2, col1, colFun2, colFun1 );



id colFactor1 = colFactor1C;
id colFactor2 = colFactor2C;
id colFactor3 = colFactor3C;
