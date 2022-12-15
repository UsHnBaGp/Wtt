
autodeclare vector vecp, [dummyP];
autodeclare index DummyIndex, FermionLine;

*Xi is the gauge parameter of the gluon propagator
symbols Xi;



#do DiagramNr = 1, '$NumberOfDiagrams'
	global RestoredAntiTopLine'DiagramNr' = DiagramNumber'DiagramNr';
#enddo


*At Tree ( and 1 loop ? ) we can only have one top fermion line which we give the number 1 as fermion line.
id VertexOfTypeTTG( mu?, ?aux, ColFun1?, ColFun2?, col? ) = -gs*i_*g_(1, mu)*T(col, ColFun1, ColFun2);



*We want to replace the propagators. The problem is that propagators may include sums in the denominator. Form is not able to plug these directly into the gammas. We therefore expand the sum, label them with a non-commuting DummyFunction. Remeber that p is not declared as a vector but as a function -> the structure is preserved and we can perform the insertion into the gamma in the next line.




id TopPropagator( aux?, ColFun1?, ColFun2? ) = i_*d_(ColFun1, ColFun2)*denom( aux^2 - mt^2 + i_*Feps )*(aux*g_(1, DummyIndex)*HelpFDummy + mt);

id GluonPropagator( mu1?, mu2?, aux?, col1?, col2?) = -i_*d_(col1, col2)*( d_(mu1,mu2)*denom( aux^2 )  +  (1-Xi)*aux*HelpFDummy2( mu1, mu2 )*aux*denom(aux^2 + i_*Feps)^2 );

*Using vecp'i', vecp'j' to replace the function with a vector.
#do i = 1, 5
	
	id p'i'*g_(FermionLine?, DummyIndex)*HelpFDummy = g_(FermionLine , vecp'i');
	
	#do j = 1, 5
		id p'i'*HelpFDummy2( mu1?, mu2? )*p'j' = vecp'i'(mu1)*vecp'j'(mu2);
	#enddo
	
#enddo


 
id VertexOfTypeGGG(mu1? , mu2?, mu3?, aux1?, aux2?, aux3?, ?col ) = 
	-gs*fcol(?col)*( 
		d_(mu1,mu2)*( aux1*HelpFDummy(mu3) - aux2*HelpFDummy(mu3) ) + d_(mu2,mu3)*( aux2*HelpFDummy(mu1) - aux3*HelpFDummy(mu1) ) + d_(mu3,mu1)*( aux3*HelpFDummy(mu2) - aux1*HelpFDummy(mu2) ) 
 );

#do i = 1, 5							 
	id p'i'*HelpFDummy(mu?) = vecp'i'(mu);
#enddo

id VertexOfTypeTTH(?x) = -i_*1/2*gw/mw*mt;
