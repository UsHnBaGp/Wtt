#: MaxTermSize 10M
#: WorkSpace 1000M
#: SubTermsInSmall 1M
#: SubSmallSize 100M
#: SubLargeSize 1000M
#: MaxNumberSize 50K

*#: maxtermsize: 2M
*#: SmallExtension: 2M
*#: workspace: 10G

#-
* attempt to obtain the most general tensor structure for
* q qb -> Q Qb

s [],d, [d-1],[d-2],[d-3],[d-4],[d-5],[d-6],dm2,OnShell ;
s [d-3+24*x-27*y];
s [24-x], GRAM ;
autodeclare s a,b,n,X,Y,x,y,A,m ;
autodeclare s proj ;
s s12,s23,s13,s14,s24,s34,s35,s45,s,t,m2 ;
s c1,c2,ep,mt,mH,mt2,mH2 ;
s D1,...,D6 ;
autodeclare i mu = d, nu = d ;
autodeclare v eps,epsc,p,q,V ;
cf A,B,C,D,E,F,Eps,S,Bfactor,[Eps.P],Swap,Save,Den,Label,coeff,DenS,Equation,Num,Ratio ;
autodeclare cf P ;
cf BiUU, BiVV, BiVU, BiUV, count ;
f U,Ub, spA,spB,spAB,spBA ;
autodeclare cf T,Tdag,K ;
autodeclare s x,y;


#Procedure FactArgDen
factarg Den ;
.sort
repeat id Den(n1?,n2?,?x) = Den(n1)*Den(n2,?x) ;
.sort
repeat id Den(n1?number_) = 1/n1 ;
repeat id Den(n1?symbol_) = 1/n1 ;
repeat id Den(1/n1?symbol_) = n1 ;
.sort
#EndProcedure


#Procedure FactArgNum
factarg Num ;
.sort
repeat id Num(n1?,n2?,?x) = Num(n1)*Num(n2,?x) ;
.sort
repeat id Num(n1?number_) = n1 ;
repeat id Num(n1?symbol_) = n1 ;
repeat id Num(1/n1?symbol_) = 1/n1 ;
.sort
#EndProcedure

* number of physical tensor structures
#define NUM "16" ;
#define NUMall "16"
.sort

off statistics ;
.global


* first of all the kinematics
#do i=1,5
#do j='i'+1,5
g [s'i''j'] = 2*p'i'.p'j' + p'i'.p'i' + p'j'.p'j' ;
#enddo
#enddo
.sort

#do i=1,5
#do j='i',5
g [p'i'.p'j'] = p'i'.p'j' ;
#enddo
#enddo
.sort

repeat ;
id p1.p1 = 0 ;
id p2.p2 = 0 ;
id p3.p3 = mt^2 ;
id p4.p4 = mt^2 ;
id p5.p5 = mH^2 ;
id p5 = -p1-p2-p3-p4 ;
endrepeat ;
.sort

id p1.p2 = s12/2 ;
id p1.p4 = (s14 - mt^2)/2 ;
id p2.p3 = (s23 - mt^2)/2 ;
id p1.p3 = ( mH^2 - s23 - s35 - 2*p3.p4) /2 ;
id p3.p4 = ( mH^2 + mt^2 - s35 - s23 - s13 )/2 ;
id p2.p4 = ( - mt^2 + s35 - s14 + s13 + s23 - s45)/2 ;

.sort

* now we know that p5^2 = mH^2, let's write it here
* use p5 = -p1-p2-p3-p4

l [mH^2] = (p1(mu)+p2(mu)+p3(mu)+p4(mu))*(p1(mu)+p2(mu)+p3(mu)+p4(mu)) ;

#do i=1,5
#do j='i',5
id p'i'.p'j' = [p'i'.p'j'] ;
#enddo
#enddo
.sort

print +s ;
.sort

id s13 = mt^2 + s45 - s23 - s12 ;
* naive equation below is wrong somehow
* id s13 = 2*mt^2+mH^2 - ( mH^2 + 3*mt^2 - s45 + s23 + s12 ) ;
.sort

* sum of all mandelstams should give sum of external masses .... ?

l [s12+s13+s14+s23+s24+s34] = [s12]+[s13]+[s14]+[s23]+[s24]+[s34] ;
.sort


* test, using p1+p2+(pTT)+p5 -> 0, it becomes a 2->2
* I know that s12+s1TT+s2TT = mH^2 + s34 (s34 is the invariant mass of p3+p4=pTT)
* and use s1TT=s134=s25, s2TT=s234=s15 we get

l [test_mH^2] = [s12]+[s25]+[s15]-[s34] ;



#do i=1,5
#do j='i',5
#write <kinematics.inc> "id p'i'.p'j' = %E ;" [p'i'.p'j']
#enddo
#enddo

print +s ;
.store

* we have the process
* g(p1) + g(p2) + t(p3) + tb(p4) + H(p5) -> 0
* 4 independent momenta in 4 dimensions, choose p1,p2,p3,p4 for symmetry

* generate a tensor of rank 2, which depends on 4 momenta
* use the fact that in d=4, ga(mu) = sum_i ( ci*pi(mu) )
* where the cis are

l [sum(mu,nu)] =
#do i= 1, 4
#do j= 1, 4
+  A(1,[],'i','j')*BiVU(p4,p3)*p'i'(nu1)*p'j'(nu2) 
#enddo
#enddo
***************
#do i= 1, 4
#do j= 1, 4
+  A(2,[],'i','j')*BiVU(p4,p1,p3)*p'i'(nu1)*p'j'(nu2) 
#enddo
#enddo
***************
#do i= 1, 4
#do j= 1, 4
+  A(3,[],'i','j')*BiVU(p4,p2,p3)*p'i'(nu1)*p'j'(nu2) 
#enddo
#enddo
***************
#do i= 1, 4
#do j= 1, 4
+  A(4,[],'i','j')*BiVU(p4,p2,p1,p3)*p'i'(nu1)*p'j'(nu2)
#enddo
#enddo
***************
#do i= 1, 4
*+  A(4,[],'i')*BiVU(p4,nu1,p3)*p'i'(nu2) 
#enddo
#do i= 1, 4
*+  A(5,[],'i')*BiVU(p4,nu2,p3)*p'i'(nu1) 
#enddo
***************
#do i= 1, 4
*+  A(7,[],'i')*BiVU(p4,nu1,nu2,p3)
#enddo
;
.sort

* now fix transversality and gauge on external gluons
* eps1(nu1)*eps2(nu2)
id p1(nu1) = 0 ;
id p2(nu2) = 0 ;
* gauge choice
* eps1.p2 = eps2.p1 = 0 ;
id p1(nu2) = 0 ;
id p2(nu1) = 0 ;
.sort

#do i=1,5
#do j='i',5
id p'i'.p'j' = [p'i'.p'j'] ;
#enddo
#enddo

id mt^2 = mt2 ;
id mH^2 = mh2 ;

b eps1,eps2,BiVU ;
print +s ;
.sort

b A ;
.sort
* remultiply by some powers of mt in order to have uniform mass dimension

g [D1] = mt^2*[sum(mu,nu)][A(1,[],3,3)] ;
g [D2] = mt^2*[sum(mu,nu)][A(1,[],3,4)] ;
g [D3] = mt^2*[sum(mu,nu)][A(1,[],4,3)] ;
g [D4] = mt^2*[sum(mu,nu)][A(1,[],4,4)] ;

g [D5]  = mt*[sum(mu,nu)][A(2,[],3,3)] ;
g [D6]  = mt*[sum(mu,nu)][A(2,[],3,4)] ;
g [D7]  = mt*[sum(mu,nu)][A(2,[],4,3)] ;
g [D8]  = mt*[sum(mu,nu)][A(2,[],4,4)] ;
g [D9]  = mt*[sum(mu,nu)][A(3,[],3,3)] ;
g [D10] = mt*[sum(mu,nu)][A(3,[],3,4)] ;
g [D11] = mt*[sum(mu,nu)][A(3,[],4,3)] ;
g [D12] = mt*[sum(mu,nu)][A(3,[],4,4)] ;

g [D13] = [sum(mu,nu)][A(4,[],3,3)] ;
g [D14] = [sum(mu,nu)][A(4,[],3,4)] ;
g [D15] = [sum(mu,nu)][A(4,[],4,3)] ;
g [D16] = [sum(mu,nu)][A(4,[],4,4)] ;

print +s ;
.sort

drop [sum(mu,nu)] ;
.store

* since the gauge choice is symmetric swapping p1,p2
* it might be useful to symmetrise the tensors too
* in order to be able to use p1<->p2 swap on color factors

* T1,T4 are p1,p2 independent

g c33  =   p3(nu1)*p3(nu2) ;
g c44  =   p4(nu1)*p4(nu2) ;
g c34S = ( p3(nu1)*p4(nu2) + p4(nu1)*p3(nu2) ) ;
g c34A = ( p3(nu1)*p4(nu2) - p4(nu1)*p3(nu2) ) ;
.store

* these tensors only project ont LL or RR states,
* the first 4 are symmetric, the other 4 are antisymmetric

g [T1]  = mt*c34A*BiVU(p4,p1-p2,p3) ;
g [T2]  = mt*c33 *BiVU(p4,p1+p2,p3) ; 
g [T3]  = mt*c44 *BiVU(p4,p1+p2,p3) ;
g [T4]  = mt*c34S*BiVU(p4,p1+p2,p3) ;

g [T5]  = mt*c34A*BiVU(p4,p1+p2,p3) ;
g [T6]  = mt*c33 *BiVU(p4,p1-p2,p3) ;
g [T7]  = mt*c44 *BiVU(p4,p1-p2,p3) ;
g [T8]  = mt*c34S*BiVU(p4,p1-p2,p3) ;

* these tensors only project on LR or RL
* the first 4 are symmetric, the last 4 antisymmetric

g [T9]  =      c34A*( BiVU(p4,p1,p2,p3) - BiVU(p4,p2,p1,p3) ) ;
g [T10] = mt^2*c34S*  BiVU(p4,p3) ;
g [T11] = s12 *c33 *  BiVU(p4,p3) ;
g [T12] = s12 *c44 *  BiVU(p4,p3) ;

g [T13] = mt^2*c34A*  BiVU(p4,p3) ;
g [T14] =      c33 * ( BiVU(p4,p1,p2,p3) - BiVU(p4,p2,p1,p3) ) ;
g [T15] =      c44 * ( BiVU(p4,p1,p2,p3) - BiVU(p4,p2,p1,p3) ) ;
g [T16] =      c34S* ( BiVU(p4,p1,p2,p3) - BiVU(p4,p2,p1,p3) ) ;

repeat id BiVU(?x,p1+p2,?y) = BiVU(?x,p1,?y) + BiVU(?x,p2,?y) ;
repeat id BiVU(?x,p1-p2,?y) = BiVU(?x,p1,?y) - BiVU(?x,p2,?y) ;

print +s ;
.sort

#message write them down
#do i=1,'NUM'
#write <tensors_philipp.inc> "g [T'i'] = %E ;" [T'i']
#enddo
.sort

#do i=1,'NUM'
g [T'i'd] = [T'i'] ;
.sort
skip ;
nskip [T'i'd] ;
id BiVU(p4,p1?,p2?,p3) = BiUV(p3,p2,p1,p4) ;
id BiVU(p4,p1?,p3) = BiUV(p3,p1,p4) ;
id BiVU(p4,p3) = BiUV(p3,p4) ;
multiply replace_(nu1,mu1,nu2,mu2) ;
.sort
#enddo
.sort

#write <tensors_philipp.inc> ""

#do i=1,'NUM'
#write <tensors_philipp.inc> "g [T'i'd] = %E ;" [T'i'd]
#enddo

print +s;
.store
.sort

#define NUM1 "1"
#define NUM2 "16"
.sort

************************************************************
* now I want to compute projectors and projectors tilde
* we can do this by gram-schmidt orthogonalisation

g [S] =
#do i = 1,'NUM'
+ A`i'*[T'i']
#enddo
;

g [Proj] = 
#do i = 1,'NUM'
+ y`i'*[T'i'd]
#enddo
;

b y1,...,y'NUM' ;
print +s ;
.store

* apply the general projector on the tensor structure
* and obtain the system of equations

g expr = [Proj]*[S] ;


id BiVU(p4,?x,p3)*BiUV(p3,?y,p4) = ( g_(1,p4) - mt*gi_(1) )
                                 * g_(1,?x)
				 * ( g_(1,p3) + mt*gi_(1) )
				 * g_(1,?y) ;		 

.sort

* polarisation sums with gauge choice eps1.p2 = eps2.p1 = 0
multiply (-d_(nu1,mu1) + 2*( p1(nu1)*p2(mu1) + p2(nu1)*p1(mu1) )/s12 ) ;
multiply (-d_(nu2,mu2) + 2*( p2(nu2)*p1(mu2) + p1(nu2)*p2(mu2) )/s12 ) ;
.sort

tracen,1 ;
.sort

* "good" mandelstam variables are
* s12 (gluons), s35, s45, s23, s14
#do i=1,5
#do j='i',5
id p'i'.p'j' = [p'i'.p'j'] ;
#enddo
#enddo

id mt^2 = mt2 ;
id mH^2 = mh2 ;

b mt ;
print[] ;
.sort

drop ;
ndrop expr ;
.sort

b A1,...,A16,y1,...,y16 ;
print +s ;
.sort

#-
**********************************************************
#message write down the equations
**********************************************************

#do i=1,'NUM'
#message ******
b A1,...,A'NUM' ;
.sort
g eq'i' =Label('i')*( expr[A'i'] ) ;
.sort
#enddo

b y1,...,y'NUM',Label;
print +s ;
.sort

b Label,y1,...,y'NUM',Den ;
.sort
collect Num ;
.sort
id Num(n1?) = Ratio(n1,1) ;
id Den(n1?) = Ratio(1,n1) ;
.sort

*****multiply replace_(mt2,1,mh2,3,s12,13,s35,29,s45,37,s14,111) ;
b Equation,Label ; 
print +s;
.store


*************************************************************
* solve now the systems, 'NUM' systems, each of 'NUM' equations 
************************************************************

* system number 'N'
#do N = 1,'NUM'

*on statistics ;

#message *******************************
#message Start Projector 'N'

#do i=1,'NUM'
#if('i'== 'N')
l zero'i' = eq'i' - Label('i')*1 ;
#else
l zero'i' = eq'i' ;
#endif
#enddo
.sort


polyratfun Ratio ;
.sort

#do i=1,'NUM'
l [y'i'] = y'i' ;
#enddo


print +s ;
.sort


* solve the equations
* 'i' is the y we solve for
#define	JJ "-99"
.sort
#do i={1,5,9,13,2,4,3,7,8,12,15,16,10,11,6,14}


#message Invert Coefficient 'i' for projector 'N'
#$NN = 1 ;
#$DD = 1 ;
#$Eq = -9 ;
.sort

#if('i'==62)

id Ratio(n1?,n2?) = count(nterms_(n1),nterms_(n2))*Ratio(n1,n2) ;

b y1,...,y16,count ;
print[] ;
.end
#endif


#if('i'==4)
#redefine JJ "10" ;
#elseif('i'==3)
#redefine JJ "12" ;
#elseif('i'==7)
#redefine JJ "15" ;
#elseif('i'==8)
#redefine JJ "16" ;
#elseif('i'==12)
#redefine JJ "3" ;
#elseif('i'==15)
#redefine JJ "7" ;
#elseif('i'==16)
#redefine JJ "8" ;
#elseif('i'==10)
#redefine JJ "4" ;
#elseif('i'==6)
#redefine JJ "14" ;
#elseif('i'==14)
#redefine JJ "6" ;
#else
#redefine JJ "`i'" ;
#endif
.sort

id Label('i')*y'JJ'*Ratio(n?$NN,m?$DD) = Label('i')*y'JJ'*Ratio(n,m) ;
.sort
#message use equation 'i' for coefficient 'JJ'
id y'JJ' = 0 - zero'i'*[]*Ratio($DD,$NN) ;
id Label('i') = 1 ;
id []*y'JJ' = 0 ;
id [] = 1 ;
.sort

print +s zero'i' ;
.sort

#enddo


polyratfun ;
.sort
id Ratio(n1?,n2?) = Num(n1)*Den(n2) ;
.sort
#call FactArgDen
#call FactArgNum

id Den(mt2^4 - 2*s35*s45*mt2^2 + s35^2*s45^2 - 2*s14*mt2^3 + 2*s14*
      s45*mt2^2 + 2*s14*s35*s45*mt2 - 2*s14*s35*s45^2 + s14^2*mt2^2 - 2*s14^2*
      s45*mt2 + s14^2*s45^2 - 2*s23*mt2^3 + 2*s23*s35*mt2^2 + 2*s23*s35*s45*
      mt2 - 2*s23*s35^2*s45 + 2*s23*s14*mt2^2 - 2*s23*s14*s45*mt2 - 2*s23*s14*
      s35*mt2 + 2*s23*s14*s35*s45 + s23^2*mt2^2 - 2*s23^2*s35*mt2 + s23^2*
      s35^2 - 2*s12*mt2^2*mh2 - 2*s12*s35*s45*mh2 + 2*s12*s14*mt2*mh2 + 2*s12*
      s14*mt2^2 + 2*s12*s14*s45*mh2 - 4*s12*s14*s45*mt2 + 2*s12*s14*s35*s45 - 
      2*s12*s14^2*mt2 - 2*s12*s14^2*s45 + 2*s12*s23*mt2*mh2 + 2*s12*s23*mt2^2
       + 2*s12*s23*s35*mh2 - 4*s12*s23*s35*mt2 + 2*s12*s23*s35*s45 - 4*s12*s23
      *s14*mh2 + 4*s12*s23*s14*mt2 + 2*s12*s23*s14*s45 + 2*s12*s23*s14*s35 - 2
      *s12*s23^2*mt2 - 2*s12*s23^2*s35 + s12^2*mh2^2 - 2*s12^2*s14*mh2 + s12^2
      *s14^2 - 2*s12^2*s23*mh2 - 2*s12^2*s23*s14 + s12^2*s23^2) = 1/GRAM ;

b GRAM ;
.sort

print +s ;
.end


* write Down the results
#write <coefficients_philipp.inc> "**** Projector 'N' ****" 
#write <coefficients_philipp.inc> ""
#do i=1,'NUM'
#write <coefficients_philipp.inc> "id y'i'p'N' = %E ; " [y'i']
#write <coefficients_philipp.inc> ""
#enddo

print +s ;
.store

#enddo
******************************************************
* END solution
******************************************************
.store
.end































#do i1='NUM1','NUM2'
g [P'i1'] = 
#do i2='NUM1','NUM2'
+ y'i2'p'i1'*[T'i2'd]
#enddo
;

#enddo


#include coefficients_'NUM1'to'NUM2'.inc

b Den ;
print +s ;
.store

* now project the remaining ones, along the ones that I choose to be independent

#do j=5,16
#do i='NUM1','NUM2'
g [P'i'*T'j'] = [P'i']*[T'j'] ;
#enddo
#enddo


id BiVU(p4,?x,p3)*BiUV(p3,?y,p4) = ( g_(1,p4) - mt*gi_(1) )
                                 * g_(1,?x)
                                 * ( g_(1,p3) + mt*gi_(1) )
                                 * g_(1,?y) ;

.sort

* polarisation sums with gauge choice eps1.p2 = eps2.p1 = 0
multiply (-d_(nu1,mu1) + 2*( p1(nu1)*p2(mu1) + p2(nu1)*p1(mu1) )/s12 ) ;
multiply (-d_(nu2,mu2) + 2*( p2(nu2)*p1(mu2) + p1(nu2)*p2(mu2) )/s12 ) ;
.sort

tracen,1 ;
.sort

* "good" mandelstam variables are
* s12 (gluons), s35, s45, s23, s14
#do i=1,5
#do j='i',5
id p'i'.p'j' = [p'i'.p'j'] ;
#enddo
#enddo

id mt^2 = mt2 ;
id mH^2 = mh2 ;


b Den,Num ;
.sort
collect Num ;
.sort
id Num(n1?) = Ratio(n1,1) ;
id Den(n1?) = Ratio(1,n1) ;
.sort
polyratfun Ratio ;
.sort

polyratfun ;
.sort
id Ratio(n1?,n2?) = Num(n1)*Den(n2) ;
.sort
#call FactArgNum
#call FactArgDen

print +s ;
.sort
.store

* now build new tilda basis


#do i=1,4
g [T'i'tilde]  = [T'i'] ;
g [T'i'dtilde] = [T'i'd] ;
#enddo

#do i=5,'NUM'
g [T'i'tilde] = [T'i']
#do j=1,4
- [P'j'*T'i']*[T'j']
#enddo
;
#enddo

#do i=5,'NUM'
g [T'i'dtilde] = [T'i'd]
#do j=1,4
- [P'j'*T'i']*[T'j'd]
#enddo
;
#enddo

print +s ;
.sort


#message write them down
#do i=1,'NUM'
#write <tensors_all.inc> "g [T'i'tilde] = %E ;" [T'i'tilde]
#enddo

#write <tensors_all.inc> ""

#do i=1,'NUM'
#write <tensors_all.inc> "g [T'i'dtilde] = %E ;" [T'i'dtilde]
#enddo

b BiUU,BiVV ;
print +s ;
.store

************************************************************
* now I want to compute projectors and projectors tilde


g [Stilde] =
#do i = 1,'NUM'
+ A`i'*[T'i'tilde]
#enddo
;

g [Projtilde] = 
#do i = 1,'NUM'
+ y`i'*[T'i'dtilde]
#enddo
;

b y1,...,y'NUM' ;
print +s ;
.store

* apply the general projector on the tensor structure
* and obtain the system of equations

g exprn = [Projtilde]*[Stilde] ;


id BiVU(p4,?x,p3)*BiUV(p3,?y,p4) = ( g_(1,p4) - mt*gi_(1) )
                                 * g_(1,?x)
                                 * ( g_(1,p3) + mt*gi_(1) )
                                 * g_(1,?y) ;
.sort

* polarisation sums with gauge choice eps1.p2 = eps2.p1 = 0
multiply (-d_(nu1,mu1) + 2*( p1(nu1)*p2(mu1) + p2(nu1)*p1(mu1) )/s12 ) ;
multiply (-d_(nu2,mu2) + 2*( p2(nu2)*p1(mu2) + p1(nu2)*p2(mu2) )/s12 ) ;
.sort

tracen,1 ;
.sort

* "good" mandelstam variables are
* s12 (gluons), s35, s45, s23, s14
#do i=1,5
#do j='i',5
id p'i'.p'j' = [p'i'.p'j'] ;
#enddo
#enddo

id mt^2 = mt2 ;
id mH^2 = mh2 ;
b y1,...,y16,A1,...,A16,Num,Den ;
.sort
collect Num ;


id Num(n1?) = Ratio(n1,1) ;
id Den(n1?) = Ratio(1,n1) ;
.sort
polyratfun Ratio ;
.sort
polyratfun ;


b A1,...,A'NUM' ;
.sort
collect Equation ;
.sort


b A1,...,A'NUM' ;
print +s ;
.sort

#-
**********************************************************
#message write down the equations
**********************************************************
#do i=1,'NUM'
#message ******

id once A'i'*Equation(n?$EQ) = A'i'*Equation(n) ;
.sort
g equ'i' = $EQ*Label('i') ;
.sort
id Equation($EQ) = [] ;
.sort

#$EQ = -99 ;
.sort

#enddo


multiply replace_(mt2,1,mt,1) ;

b y1,...,y16,A1,...,A16,Equation,Label ; 
print[] ;
.store


*************************************************************
* solve now the new system 16x16 which should be decoupled somehow
************************************************************

* system number 'N'
#do N = 1,'NUM'

#message *******************************
#message Start Projector 'N'

#do i=1,'NUM'
#if('i'== 'N')
l zero'i' = equ'i' - Label('i')*1 ;
#else
l zero'i' = equ'i' ;
#endif
#enddo
.sort

polyratfun Ratio ;
.sort

#do i=1,'NUM'
l [y'i'] = y'i' ;
#enddo
.sort

* solve the equations

#do i=1,'NUM'

#message Invert Coefficient 'i' for projector 'N'
#$NN = 1 ;
#$DD = 1 ;
#$Eq = -9 ;
.sort

#if(('i'<=4))
skip ;
nskip zero1,zero2,zero3,zero4 ;
#elseif(('i'<=12)&&('i'>=5))
skip ;
nskip zero5,...,zero12 ;
#endif

id Label(n1?$Eq)*y'i'*Ratio(n?$NN,m?$DD) = Label(n1)*y'i'*Ratio(n,m) ;
.sort
#message use equation '$Eq' for coefficient 'i'
id y'i' = 0 - zero'$Eq'*[]*Ratio($DD,$NN) ;
id Label('$Eq') = 1 ;
id []*y'i' = 0 ;
id [] = 1 ;
.sort
print zero'$Eq' ;
.sort

#enddo


polyratfun ;
.sort
id Ratio(n1?,n2?) = Num(n1)*Den(n2) ;
.sort
#call FactArgDen
#call FactArgNum

* write Down the results
#write <coefficients_all.inc> "**** Projector 'N' ****" 
#write <coefficients_all.inc> ""
#do i=1,'NUM'
#write <coefficients_all.inc> "id y'i'p'N' = %E ; " [y'i']
#write <coefficients_all.inc> ""
#enddo

b Label,[d-3],y1,...,y'NUM',Den ;
print +s ;
.sort


.store

#enddo
******************************************************
* END solution
******************************************************


print +s ;
.end


#message now check what they really are

#do j=1,5
l [P'j'tilde] = 
#do i=1,5
+ y'i'p'j'*D'i' 
#enddo
;
#enddo


#include coefficients_all.inc


b BiUU,BiVV,Num,Den,D1,...,D6 ;
.sort
collect Num ;
.sort
id Num(n1?) = Ratio(n1,1) ;
id Den(n1?) = Ratio(1,n1) ;
.sort
polyratfun Ratio ;
.sort
polyratfun ;
.sort
id Ratio(n1?,n2?) = Num(n1)*Den(n2) ;
.sort
#call FactArgDen
#call FactArgNum


s NewD1, NewD2 ;
.sort


b BiUU,BiVV,Num,Den,D1,...,D6,NewD1,NewD2 ;
.sort
collect Num ;
.sort
id Num(n1?) = Ratio(n1,1) ;
id Den(n1?) = Ratio(1,n1) ;
.sort
polyratfun Ratio ;
.sort
polyratfun ;
.sort
id Ratio(n1?,n2?) = Num(n1)*Den(n2) ;
.sort
#call FactArgDen
#call FactArgNum
b Den ;
print +s ;
.end

.end