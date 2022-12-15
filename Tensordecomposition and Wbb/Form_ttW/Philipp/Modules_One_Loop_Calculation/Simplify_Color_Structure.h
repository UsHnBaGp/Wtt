*###########################################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
* Apply SU(3) algebra relations to simplify color factors %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*###########################################################
#if 'Quiet' == 0
#message Do color algebra
#endif

* reminder: Lorenzo calls this doing the color algebra. When I say doing color algebra I mean to contract all color indices.



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Remove SU(3) structure constatns fcol(...)   %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%




* The number 100 is chosen such that it is high enough to avoid any double counting in the indices. 
# $ColFunI = 100;

#do i = 0, 1


* First, I simplify my life by replacing the structure constants of SU(3)

* The trace Tr(T^a, T^b) is symmetric in a,b. fcol(a,b,c) is antisymmetric in a,b -> contraction of both is 0

	id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun1?)*fcol(col1?, col2?, col3?) = 0; 

.sort



* Eq. (25.33) in Schwarz:
	id once fcol( col1?, col2?, col3? ) = -2*i_*(   T(col1, ColFun'$ColFunI', ColFun{'$ColFunI'+1})*T(col2, ColFun{'$ColFunI'+1}, ColFun{'$ColFunI'+2})*T(col3, ColFun{'$ColFunI'+2}, ColFun'$ColFunI')
	                                              - T(col1, ColFun'$ColFunI', ColFun{'$ColFunI'+1})*T(col3, ColFun{'$ColFunI'+1}, ColFun{'$ColFunI'+2})*T(col2, ColFun{'$ColFunI'+2}, ColFun'$ColFunI') );
	                                              
	         
.sort
* Use (color) Fierz identity:
	id T(col1?, ColFun1?, ColFun2?)*T(col1?, ColFun3?, ColFun4?) = 1/2*(d_( ColFun1, ColFun4)*d_( ColFun3, ColFun2) - 1/SUN * d_( ColFun1, ColFun2)*d_( ColFun3, ColFun4));                                                           

.sort

* The SU(3) generators are traceless
	id T(col1?, ColFun1?, ColFun1?) = 0;
		
.sort
	
	if( match(fcol(col1?, col2?, col3? )) );
		redefine i "0";
	endif;
	
* Increase Dummy Index by 3 (3 indices used per iteration in rewriting fcol() )
	#$ColFunI = $ColFunI + 3 ;
	
	.sort
	
#enddo





*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*  Contract adjoint color indices  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%





*If I keep the fundamental indices untouched I can replace the non-commuting T's with commuting T's and rebuild everything at the end
id T(?aux) = T(?aux);

* Use (color) Fierz identity:
	id T(col1?, ColFun1?, ColFun2?)*T(col1?, ColFun3?, ColFun4?) = 1/2*(d_( ColFun1, ColFun4)*d_( ColFun3, ColFun2) - 1/SUN * d_( ColFun1, ColFun2)*d_( ColFun3, ColFun4));                                                           
* The SU(3) generators are traceless
	id T(col1?, ColFun1?, ColFun1?) = 0;


.sort






*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*  Rebuild color structures in the right order  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%





id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun3?) = TProduct(col1, col2, ColFun1, ColFun3);


repeat;
	id TProduct(?aux, ColFun1?, ColFun2?)*T(col?, ColFun2?, ColFun3?) = TProduct(?aux, col, ColFun1, ColFun3);
	id TProduct(?aux1, ColFun1?, ColFun2?)*TProduct(?aux2, ColFun2?, ColFun3?) = TProduct(?aux1, ?aux2, ColFun1, ColFun3);
endrepeat;




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Apply color trace identities  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


id TProduct(?aux, ColFun?, ColFun?) = ColTr(?aux);


* Eq. (25.37) in Schwarz:
id ColTr(col1?, col2?) = 1/2*d_(col1, col2);


.sort


*checked on 12. Jan
id T(col1?, ColFun1?, ColFun2?)*ColTr(col1?, col2?, col3?) = 1/2*(TProduct(col2, col3, ColFun1, ColFun2) - 1/SUN*d_(ColFun1, ColFun2)*ColTr(col2, col3));

Multiply left replace_(SUN, CA);
Multiply left replace_(NGen, 2*CF*CA);


.sort



