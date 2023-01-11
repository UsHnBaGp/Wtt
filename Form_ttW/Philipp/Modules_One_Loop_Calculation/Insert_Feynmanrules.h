*###############################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*  Replace functions with their Feynman rules %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*###############################################
 

*%%%%%%%%%%%%%%%%%%
* Yukawa coupling %
*%%%%%%%%%%%%%%%%%%
 
* Strictly spoken the Yukawa coupling does not come with a color conserving Kronecker delta. But I set uniformly the Lorentz and color indices with respect to the position index of QGRAF. The result is that an index i results in ColFunHelp'i'. Because TTH is an vertex it also has an index in front. Thus we get one additional color index. Note that removing the TTH from the setting og Lorentz indices does not have an impact because the toppropagator connecting to the tth vertex has still a different index number than the other top connecting to the same vertex.


id VertexOfTypeTTH(aux1?, aux2?, aux3?, mu1?, mu2?, mu3?, HelpI1?!{ColFun1, ColFun2}, HelpI2?, col?, aux4?int_) = -i_*gY*replace_(HelpI1, HelpI2);
id VertexOfTypeTTH(aux1?, aux2?, aux3?, mu1?, mu2?, mu3?, HelpI1?,                    HelpI2?, col?, aux4?int_) = -i_*gY*replace_(HelpI2, HelpI1);

id VertexOfTypeTTH(aux1?, aux2?, aux3?, mu1?, mu2?, mu3?, HelpI1?!{ColFun1, ColFun2}, HelpI2?, col?)            = -i_*gY*replace_(HelpI1, HelpI2);
id VertexOfTypeTTH(aux1?, aux2?, aux3?, mu1?, mu2?, mu3?, HelpI1?,                    HelpI2?, col?)            = -i_*gY*replace_(HelpI2, HelpI1);

*id gY = 1/2*gw/mw*mt;

*%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Propagator replacements  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%



*We want to replace the propagators. The problem is that propagators may include sums in the denominator. Form is not able to plug these directly into the gammas. We therefore expand the sum, label them with a non-commuting DummyFunction. Remeber that p is not declared as a vector but as a function -> the structure is preserved and we can perform the insertion into the gamma in the next line.

*print;
.sort




* Dummy means that the function has these arguments becasue I have put everything in the same structure but these are unnecessary arguments
* this expression is the hardcoded expansion in delta_m up to first order terms.
id TopPropagator(   aux1?, muDummy1?, muDummy2?, muDummy3?, ColFun1?, ColFun2?, colDummy?, FermionLine? )    
	=   i_*d_(ColFun1, ColFun2)*denom( aux1^2 - mt^2 + i_*Feps )*(aux1*g_(FermionLine, HelpI)*HelpFDummy + mt*gi_(FermionLine) )*
	(
	1 + dm*denom( aux1^2 - mt^2 + i_*Feps )*(aux1*g_(FermionLine, HelpI)*HelpFDummy + mt*gi_(FermionLine) )
	);

b dm;
.sort

*If we want to compute the mass renormalization we have to distinguish the mass in the propagaor from the others
#if 'Mrenorm' == 0
	
	global FeynmanDiagramNb'DiagramNb' = FeynmanDiagramNb'DiagramNb'[dm^0]-FeynmanDiagramNb'DiagramNb';
	id dm = 0;

#elseif 'Mrenorm' == 1

	global FeynmanDiagramNb'DiagramNb' = FeynmanDiagramNb'DiagramNb'[dm^1];

#else 

	#message Error: Mrenorm='Mrenorm' not supported. Change Insert_Feynmanrules.h file. 	
	
#endif

.sort

id QuarkPropagator(   aux1?, muDummy1?, muDummy2?, muDummy3?, ColFun1?, ColFun2?, colDummy?, FermionLine? )    
	=   i_*d_(ColFun1, ColFun2)*denom( aux1^2 + i_*Feps )*(aux1*g_(FermionLine, HelpI)*HelpFDummy);


id GluonPropagator( aux1?, mu1?, mu2?, muDummy?, col1?, col2?, colDummy?)                
	=   i_*d_(col1, col2)*( -d_(mu1,mu2)*denom( aux1^2 + i_*Feps )  );


id GhostPropagator(aux1?, mu1Dummy?, mu2Dummy?, mu3Dummy?, col1?, col2?, colDummy?) 
	= i_*d_(col1, col2)*denom(aux1^1 + i_*Feps);



*Using vecp'i', vecp'j' to replace the function with a vector.
#do i = 1, 5
	
	id p'i'*g_(FermionLine?, HelpI)*HelpFDummy = g_(FermionLine , vecp'i');
	
	#do j = 1, 5
		id p'i'*HelpFDummy2( mu1?, mu2? )*p'j' = vecp'i'(mu1)*vecp'j'(mu2);
	#enddo
	
#enddo



* Take loop momentum into account
id k1*g_(FermionLine?, HelpI)*HelpFDummy = g_(FermionLine , veck1);


	


*%%%%%%%%%%%%%%%%%%%%%%%%
* Vertex replacements   %
*%%%%%%%%%%%%%%%%%%%%%%%%




id VertexOfTypeTTG( ?auxDummy, mu1?, mu2?, mu3?, ColFun1?, ColFun2?, col?, FermionLine? ) = gs*i_*g_(FermionLine, mu3)*T(col, ColFun1, ColFun2);
id VertexOfTypeQQG( ?auxDummy, mu1?, mu2?, mu3?, ColFun1?, ColFun2?, col?, FermionLine? ) = gs*i_*g_(FermionLine, mu3)*T(col, ColFun1, ColFun2);
 

id VertexOfTypeGGG(aux1?, aux2?, aux3?, mu1?, mu2?, mu3?, ?col ) = 
	gs*fcol(?col)*( 
		d_(mu1,mu2)*( aux1*HelpFDummy(mu3) - aux2*HelpFDummy(mu3) ) + d_(mu2,mu3)*( aux2*HelpFDummy(mu1) - aux3*HelpFDummy(mu1) ) + d_(mu3,mu1)*( aux3*HelpFDummy(mu2) - aux1*HelpFDummy(mu2) ) 
			);

id VertexOfTypeSSG(aux1?, aux2?, aux3?, mu1?, mu2?, mu3?, col1?, col2?, col3? ) = -gs*fcol(col1, col2, col3)*aux1*HelpFDummy(mu3);

#do i = 1, 5							 
	id p'i'*HelpFDummy(mu?) = vecp'i'(mu);
#enddo


* Take loop momentum into account
id k1*HelpFDummy(mu?) = veck1(mu);


#do DummyColorIndexI = 1, 3  
	id once VertexOfTypeGGGG(?auxDummy, mu1?, mu2?, mu3?, mu4?, col1?, col2?, col3?, col4?) =-i_*gs^2*(
		
			 fcol(col1, col2, colHelp{'DummyColorIndexI'})*fcol(col3, col4, colHelp{'DummyColorIndexI'})*(d_(mu1, mu3)*d_(mu2, mu4) - d_(mu1, mu4)*d_(mu2, mu3))
		  	+fcol(col1, col3, colHelp{'DummyColorIndexI'})*fcol(col2, col4, colHelp{'DummyColorIndexI'})*(d_(mu1, mu2)*d_(mu3, mu4) - d_(mu1, mu4)*d_(mu2, mu3))
			+fcol(col1, col4, colHelp{'DummyColorIndexI'})*fcol(col2, col3, colHelp{'DummyColorIndexI'})*(d_(mu1, mu2)*d_(mu3, mu4) - d_(mu1, mu3)*d_(mu2, mu4))
		);
#enddo



.sort

*%%%%%%%%%%%%%%%%%%%%%%%%
* Reordering of terms   %
*%%%%%%%%%%%%%%%%%%%%%%%%

* Put color matrices to the front 
*repeat;
*	id g_(FermionLine?, mu?)*T(col?, ColFun1?, ColFun2?) = T(col, ColFun1, ColFun2)*g_(FermionLine, mu);
*	id ExternalAntiTop(aux?)*T(col?, ColFun1?, ColFun2?) = T(col, ColFun1, ColFun2)*ExternalAntiTop(aux);
*endrepeat;


* Replace External gluon functions with polarization vectors
id ExternalGluon(-1, p1) = eps1(nu1);
id ExternalGluon(-3, p2) = eps2(nu2);



