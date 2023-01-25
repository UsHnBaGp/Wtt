* reminder: Lorenzo calls this doing the color algebra. When I say doing color algebra I mean to contract all color indices.


* I have to be very careful with the normalizations !!!!!!!!!!!!!!!!!!!!!!
* !!!!!!!!!! Double check all indentities for consistency



* Extract all color objects and treat the rest in the brackets.

b fcol, T ;

.sort

keep brackets ;


* First I eliminate the fcol from every expression. To prevent the RAM from exploding I do one fcol at the time.

* The number 100 is chosen such that it is high enough to avoid any double counting in the indices. 
# $ColFunI = 100;

#do i = 0, 1


* First, I simplify my life by replacing the structure constants of SU(3)

* The trace Tr(T^a, T^b) is symmetric in a,b. fcol(a,b,c) is antisymmetric in a,b -> contraction of both is 0

	id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun1?)*fcol(col1?, col2?, col3?) = 0; 





* Eq. (25.33) in Schwarz:

*!!!!!!!!!!!!!!!!!!!!!!!!!!!!   I removed the factor of 2 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	id once fcol( col1?, col2?, col3? ) = -2*i_*(   T(col1, ColFun'$ColFunI', ColFun{'$ColFunI'+1})*T(col2, ColFun{'$ColFunI'+1}, ColFun{'$ColFunI'+2})*T(col3, ColFun{'$ColFunI'+2}, ColFun'$ColFunI')
	                                              - T(col1, ColFun'$ColFunI', ColFun{'$ColFunI'+1})*T(col3, ColFun{'$ColFunI'+1}, ColFun{'$ColFunI'+2})*T(col2, ColFun{'$ColFunI'+2}, ColFun'$ColFunI') );

* Use (color) Fierz identity:

	id T(col1?, ColFun1?, ColFun2?)*T(col1?, ColFun3?, ColFun4?) = 1/2*(d_( ColFun1, ColFun4)*d_( ColFun3, ColFun2) - 1/SUN * d_( ColFun1, ColFun2)*d_( ColFun3, ColFun4));                                                           


* The SU(3) generators are traceless

	id T(col1?, ColFun1?, ColFun1?) = 0;
		
	
	if( match(fcol(col1?, col2?, col3? )) );
		redefine i "0";
	endif;
	
* Increase Dummy Index by 3 (3 indices used per iteration in rewriting fcol() )
	#$ColFunI = $ColFunI + 3 ;
	
	.sort
	


#enddo

*b T, ColTr;
*print;

.sort

repeat;
	id T(col1?, ColFun1?, ColFun2?)*T(col1?, ColFun3?, ColFun4?) = 1/2*(d_( ColFun1, ColFun4)*d_( ColFun3, ColFun2) - 1/SUN * d_( ColFun1, ColFun2)*d_( ColFun3, ColFun4));  
endrepeat;


*The remainig objects have to be rewritten into traces. At two loops I can have maximally 2 insertions of T matrices
*I should check all these identites!!!!

repeat ;
	id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun1?)                                                                                        = ColTr(col1, col2) ;
	id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun3?)*T(col3?, ColFun3?, ColFun1?)                                                           = ColTr(col1,col2,col3) ;
	id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun3?)*T(col3?, ColFun3?, ColFun4?)*T(col4?, ColFun4?, ColFun1?)                              = ColTr(col1,col2,col3,col4) ;
	id T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun3?)*T(col3?, ColFun3?, ColFun4?)*T(col4?, ColFun4?, ColFun5?)*T(col5?, ColFun5?, ColFun1?) = ColTr(col1,col2,col3,col4,col5) ;
endrepeat ;


* I don't know yet if I need this
*id ColTr(col1?, col2?) = 1/2*d_(col1, col2);

.sort

*checked on 12. Jan
id T(col1?, ColFun1?, ColFun2?)*ColTr(col1?, col2?, col3?) = 1/2*(TProduct(col2, col3, ColFun1, ColFun2) - 1/SUN*d_(ColFun1, ColFun2)*ColTr(col2, col3));

repeat;
	id TProduct(?col1, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun3?)   = TProduct(?col1, col2, ColFun1, ColFun3);
	id once   T(col1?, ColFun1?, ColFun2?)*T(col2?, ColFun2?, ColFun3? )  = TProduct( col1, col2, ColFun1, ColFun3);
endrepeat;
