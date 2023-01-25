#-
#:maxtermsize 1000000
#:workspace 1G

* analyze the 5 gluon diagrams
* 1) do color algebra
* 2) group them by color factors
* 3) substitute Feynman Rules and prepare contractions

autodeclare s A,B,C,TA,TB,TC,PL,NPL,y ;
s s12,s13,s23,s34,s45,s51;
s s24 ;
s eq,g,Nc,NA,CF,d,Nf,NfV,NfV2,[],[Nc^2-1],[Nc-1],[gh] ;
autodeclare s d ;
s n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15 ;
autodeclare i mu=d , nu=d, Nu=d, b=NA, i=Nc, j=Nc, J=Nc, l=Nc, L=Nc ;

i
#do i=1,100
a'i'=NA,
#enddo
;

autodeclare v k,p,q ;
autodeclare v mk,eps,mp ;


cf Quark, Qbar, gluon, H, QE, QbE, ghost, Ghost, photon,  Save ;
cf prop, vrtx, pol, Vqqbph, Vqqbg, Vggg,Vgggg,Vgggg1,Vgggg2,Vgggg3, VghGgh, VHpb, Bi, BiVU,BiUV, BiUU ;
cf gaQ,Eps1,Eps2,Eps3,Eps4,Eps5 ;
cf T,f,Dd,Tr,delC,C ;
cf LoopF,LoopGh ;
cf U,V,Ub,Vb,UEb,Num,Label,INT,coeff,Den,Ratio,DiaMatch,Shift,Sector ;

s D1,...,D15 ;

#do j=1,3
s
Dk'j',
#do i1=1,3
Dk'j'p'i1',Dk'j'm'i1',
#do i2='i1',3
Dk'j'p'i1''i2',Dk'j'm'i1''i2',
#do i3='i2',3
Dk'j'p'i1''i2''i3',Dk'j'm'i1''i2''i3',
#enddo
#enddo
#enddo
;
#enddo

#do j1=1,2
#do j2='j1',3
s
Dk`j1'`j2',

#do i1=1,3
Dk`j1'`j2'p'i1',Dk`j1'`j2'm'i1',

#do i2='i1',3
Dk`j1'`j2'p'i1''i2',Dk`j1'`j2'm'i1''i2'

#do i3='i2',3
Dk`j1'`j2'p'i1''i2''i3',Dk`j1'`j2'm'i1''i2''i3',

#enddo
#enddo
#enddo
;
#enddo
#enddo

s
Dk123,

#do i1=1,3
Dk123p'i1',Dk123m'i1',

#do i2='i1',3
Dk123p'i1''i2',Dk123m'i1''i2',

#do i3='i2',3
Dk123p'i1''i2''i3',Dk123m'i1''i2''i3',

#enddo
#enddo
#enddo
;


set color: Nc,Nf,NfV,NfV2,CF,NA ;

set props: 

#do j=1,3

Dk'j',
#do i1=1,3
Dk'j'p'i1',Dk'j'm'i1',
#do i2='i1',3
Dk'j'p'i1''i2',Dk'j'm'i1''i2'
#do i3='i2',3
Dk'j'p'i1''i2''i3',Dk'j'm'i1''i2''i3',
#enddo
#enddo
#enddo

#enddo

Dk12,
#do i1=1,3
Dk12p'i1',Dk12m'i1',
#do i2='i1',3
Dk12p'i1''i2',Dk12m'i1''i2'
#do i3='i2',3
Dk12p'i1''i2''i3',Dk12m'i1''i2''i3',
#enddo
#enddo
#enddo

Dk13,
#do i1=1,3
Dk13p'i1',Dk13m'i1',
#do i2='i1',3
Dk13p'i1''i2',Dk13m'i1''i2'
#do i3='i2',3
Dk13p'i1''i2''i3',Dk13m'i1''i2''i3',
#enddo
#enddo
#enddo

Dk23,
#do i1=1,3
Dk23p'i1',Dk23m'i1',
#do i2='i1',3
Dk23p'i1''i2',Dk23m'i1''i2'
#do i3='i2',3
Dk23p'i1''i2''i3',Dk23m'i1''i2''i3',
#enddo
#enddo
#enddo

Dk123,
#do i1=1,3
Dk123p'i1',Dk123m'i1',
#do i2='i1',3
Dk123p'i1''i2',Dk123m'i1''i2'
#do i3='i2',3
Dk123p'i1''i2''i3',Dk123m'i1''i2''i3',
#enddo
#enddo
#enddo
;





set propsnum: D1,...,D15 ;

set topoPL: PL,PLx14x23,PLx1423,PLx14,PLx143,PLx142,PLx1432,PLx1324,PLx13x24,PLx134,PLx13,PLx1342,PLx132,PLx124,PLx1243,PLx1234,PLx123,PLx12x34,PLx12,PLx24,PLx243,PLx234,PLx23,PLx34 ;
set topoNPL: NPL,NPLx14x23,NPLx1423,NPLx14,NPLx143,NPLx142,NPLx1432,NPLx1324,NPLx13x24,NPLx134,NPLx13,NPLx1342,NPLx132,NPLx124,NPLx1243,NPLx1234,NPLx123,NPLx12x34,NPLx12,NPLx24,NPLx243,NPLx234,NPLx23,NPLx34 ;


#include ../Procedures.proc
#include ../Procedures_2.proc

off statistics ;
.global


* all in all, 72 effective diagrams
#do i = 17,143

#message ******* ----- ~~~~~ process diagram 'i' ~~~~~ ----- *******
#message 

l tmp = d'i'*DiaMatch('i') ;

#include qqphph.2loop ;
.sort

multiply replace_(k1,q1,k2,q2) ;
.sort

#include qqphph.2loop.shifts.inc

multiply replace_(p4,-p1-p2-p3) ;
.sort

id Shift(k1,p1?,[],k2,p2?,[]) = replace_(q1,p1,q2,p2) ;
id Shift(k2,p2?,[],k1,p1?,[]) = replace_(q2,p2,q1,p1) ;
.sort


multiply replace_(p4,-p1-p2-p3) ;
.sort


#message start Feynman rules
argument pol, vrtx ;
id Quark(-1,p1?)  = Quark(99,p1) ;
id Qbar(-3,p1?)   = Qbar(97,p1) ;
id photon(-5,p1?) = photon(95,p1) ; 
id photon(-7,p1?) = photon(93,p1) ;
endargument ;
.sort


#message propagators
#do i=1,20
#do j=1,20
* gluon is in axial lightcone gauge, the gauge momentum must be pbar
id prop(gluon('i','j',p1?))  = - i_*d_(a'i',a'j')*prop(p1)*d_(mu'i',mu'j') ;

id prop(ghost('i','j',p1?))  = + i_*ghost('i','j') 
                                 *d_(a'i',a'j')*prop(p1) ;

#enddo
#enddo
id prop(Quark(n1?,n2?,p1?)) = i_*gaQ(n1,n2,p1)*delC(n1,n2)*prop(p1) ;
.sort

**************** relabelling the indices
argument vrtx,pol ;
#do j1=99,90,-1
id photon('j1',p1?) = photon(mu'j1',p1) ;
id gluon('j1',p1?)  = gluon(mu'j1',a'j1',p1) ;
id ghost('j1',p1?)  = ghost('j1',a'j1',p1) ;
id Ghost('j1',p1?)  = Ghost('j1',a'j1',p1) ;
#enddo
#do j1=1,20
id photon('j1',p1?) = photon(mu'j1',a'j1',p1) ;
id gluon('j1',p1?)  = gluon(mu'j1',a'j1',p1) ;
id ghost('j1',p1?)  = ghost('j1',a'j1',p1) ;
id Ghost('j1',p1?)  = Ghost('j1',a'j1',p1) ;
#enddo
endargument ;
.sort

**************************************************
#message vertices 
*************** rename vertices


id vrtx(Qbar(n1?,p1?),photon(mu1?,p3?),Quark(n2?,p2?))  
    = Vqqbph( n1,n2,mu1)*( -i_*eq*delC(n1,n2) ) ;

id vrtx(Qbar(n1?,p1?),gluon(mu1?,a1?,p3?),Quark(n2?,p2?))  
    = Vqqbg( n1,n2,mu1)*( -i_*g*T(a1,n1,n2) ) ;

id vrtx(Ghost(n1?,a1?,p1?),gluon(mu1?,a2?,p2?),ghost(n3?,a3?,p3?))  
    = VghGgh(n1,n3,p1,mu1)*( + g*f(a2,a1,a3) ) ;

id vrtx(gluon(mu1?,a1?,p1?),gluon(mu2?,a2?,p2?),gluon(mu3?,a3?,p3?))
    = Vggg(a1,a2,a3,mu1,mu2,mu3,p1,p2,p3) ;

id vrtx(gluon(mu1?,a1?,p1?),gluon(mu2?,a2?,p2?),gluon(mu3?,a3?,p3?),
      gluon(mu4?,a4?,p4?)) = Vgggg(a1,a2,a3,a4,mu1,mu2,mu3,mu4);

**************************************************
*************** external gluons and photons

id pol(gluon(mu1?,a1?,p1?))  = gluon(mu1,a1,p1) ;
id pol(photon(mu1?,p1?)) = photon(mu1,p1) ;
id pol(Quark(n1?,p1?)) = U(p1,n1) ;
id pol(Qbar(n1?,p1?))  = Vb(p1,n1) ;
.sort


#message build bilinears first
**************************************************
******** Building up first the bilinears -- external lines
id Vb(p1?,n1?)*Vqqbph(n1?,n2?,mu?)  = Bi(p1,mu,n2) ;
id Vb(p1?,n1?)*Vqqbg( n1?,n2?,mu?)  = Bi(p1,mu,n2) ;
repeat ;
id Bi(?p1,n1?)*gaQ(n1?,n2?,p2?)     = Bi(?p1,p2,n2) ;
id Bi(?p1,n1?)*Vqqbph(n1?,n2?,mu?)  = Bi(?p1,mu,n2) ;
id Bi(?p1,n1?)*Vqqbg( n1?,n2?,mu?)  = Bi(?p1,mu,n2) ;
endrepeat ;
id Bi(?p1,n1?)*U(p2?,n1?) = BiVU(?p1,p2) ;
.sort


#message fermion loops
#message differentiate if photons attach in different places
**************************************************
******** Building up the fermion loops
******** repeat for more than one fermion loop

* first with a photon
id once Vqqbph( n1?,n2?,mu?)*gaQ(n2?,n3?,p1?) = NfV*LoopF(1,n1,mu,p1,n3) ;
repeat ;
id LoopF(1,n1?,?p1,n2?)*gaQ(n2?,n3?,p2?)    = LoopF(1,n1,?p1,p2,n3) ;
id LoopF(1,n1?,?p1,n2?)*Vqqbg(n2?,n3?,mu?)  = LoopF(1,n1,?p1,mu,n3) ;
* two photons on the same loop
id NfV*LoopF(1,n1?,?p1,n2?)*Vqqbph(n2?,n3?,mu?) = NfV2*LoopF(1,n1,?p1,mu,n3) ;
endrepeat ;
.sort
******** double check that everything closes to itself
id LoopF(n1?,n2?,?x,n2?) = LoopF(n1,?x) ;
.sort

#message check that LoopF closes properly
id LoopF(?x,n1?number_) = 1/(1-1) ;
.sort

* second with a photon, here there cannot be a second photon
id once Vqqbph( n1?,n2?,mu?)*gaQ(n2?,n3?,p1?) = NfV*LoopF(2,n1,mu,p1,n3) ;
repeat ;
id LoopF(2,n1?,?p1,n2?)*gaQ(n2?,n3?,p2?)    = LoopF(2,n1,?p1,p2,n3) ;
id LoopF(2,n1?,?p1,n2?)*Vqqbg(n2?,n3?,mu?)  = LoopF(2,n1,?p1,mu,n3) ;
endrepeat ;
.sort
******** double check that everything closes to itself
id LoopF(n1?,n2?,?x,n2?) = LoopF(n1,?x) ;
.sort

#message check that LoopF closes properly
id LoopF(?x,n1?number_) = 1/(1-1) ;
.sort

* third, without photons
id once Vqqbg( n1?,n2?,mu?)*gaQ(n2?,n3?,p1?) = Nf*LoopF(3,n1,mu,p1,n3) ;
repeat ;
id LoopF(3,n1?,?p1,n2?)*gaQ(n2?,n3?,p2?)    = LoopF(3,n1,?p1,p2,n3) ;
id LoopF(3,n1?,?p1,n2?)*Vqqbg(n2?,n3?,mu?)  = LoopF(3,n1,?p1,mu,n3) ;
endrepeat ;
.sort
******** double check that everything closes to itself
id LoopF(n1?,n2?,?x,n2?) = LoopF(n1,?x) ;
.sort

#message check that LoopF closes properly
id LoopF(?x,n1?number_) = 1/(1-1) ;
.sort

* fourth, without photons
id once Vqqbg( n1?,n2?,mu?)*gaQ(n2?,n3?,p1?) = Nf*LoopF(4,n1,mu,p1,n3) ;
repeat ;
id LoopF(4,n1?,?p1,n2?)*gaQ(n2?,n3?,p2?)    = LoopF(4,n1,?p1,p2,n3) ;
id LoopF(4,n1?,?p1,n2?)*Vqqbg(n2?,n3?,mu?)  = LoopF(4,n1,?p1,mu,n3) ;
endrepeat ;
.sort
******** double check that everything closes to itself
id LoopF(n1?,n2?,?x,n2?) = LoopF(n1,?x) ;
.sort

#message check that LoopF closes properly
id LoopF(?x,n1?number_) = 1/(1-1) ;
.sort

#message ghost loops
**************************************************
******** working out the ghost-loop contribution
#do j=1,1
#message do ghost loop
id once VghGgh(n1?,n2?,p1?,mu?)*ghost(n2?,n3?)  = LoopGh(n1,n3,p1,mu) ;
repeat ;
id LoopGh(n1?,n2?,?p1)*ghost(n2?,n3?) = LoopGh(n1,n3,?p1) ;
id LoopGh(n1?,n2?,?p1)*VghGgh(n2?,n3?,p2?,nu?) = LoopGh(n1,n3,?p1,p2,nu) ;
endrepeat ;
.sort
#message check that the ghost loop closed
id LoopGh(n1?,n1?,?p1) = LoopGh(?p1) ;
.sort
id LoopGh(n1?number_,?x) = 1/(1-1) ;
.sort
if(match(ghost(?x))) ;
redefine j "0" ;
endif ;
.sort
#if('j'==0)
#message one more ghost loop to be done
#elseif('j'==1)
#message no more ghost loops
#endif

#enddo

* for easy substitutions the LoopGh are F loops without gamma matrices
* it means that every momentum has the mu index which follows it
* and there are no gamma matrices

repeat ;
id LoopGh(p1?,mu1?,?x) = p1(mu1)*LoopGh(?x) ;
id LoopGh = 1 ;
endrepeat ;
.sort



******** external polarizations
*id gluon(mu?,a1?,p1) = Eps1(mu) ;
*id gluon(mu?,a1?,p2) = Eps2(mu) ;
*id gluon(mu?,a1?,p3) = Eps3(mu) ;
*id gluon(mu?,a1?,p4) = Eps4(mu) ;
id photon(mu?,p3) = Eps3(mu) ;
id photon(mu?,-p1-p2-p3) = Eps4(mu) ;

b prop ;
* print[] ;
.sort

#message clean up props
factarg prop ;
.sort

repeat id prop(k1?,-1,1) = prop(k1) ;
repeat id prop(-1,p?) = prop(p) ;
.sort


#do i1=1,3
#do i2='i1'+1,3
id prop(p'i1'+p'i2') = Den( ( p'i1'(mu)+p'i2'(mu) )
                          * ( p'i1'(mu)+p'i2'(mu) ) ) ;
#do i3='i2'+1,3
id prop(p'i1'+p'i2'+p'i3') = Den( ( p'i1'(mu)+p'i2'(mu)+p'i3'(mu) )
                                * ( p'i1'(mu)+p'i2'(mu)+p'i3'(mu) ) ) ;

#enddo
#enddo
#enddo
.sort

argument Den ;
id p4 = -p1-p2-p3 ;
id p1.p1 = 0 ;
id p2.p2 = 0 ;
id p3.p3 = 0 ;
id p1.p2 = - (s13+s23)/2 ;
id p1.p3 = s13/2 ;
id p2.p3 = s23/2 ;
endargument ;
.sort
#call FactArgDen


#message color algebra 1/4

b delC,T ;
.sort
keep brackets ;
*************************************************
********* Some simplifications in The color structure now
#do i=1,100
#do j=1,100
id delC('i','j') = d_(j'i',j'j') ;
id T(a1?,'i','j') = T(a1,j'i',j'j') ;
#enddo
#enddo
.sort


#message color algebra 2/4
b Vggg ;
.sort
keep brackets ;
id Vggg(a1?,a2?,a3?,mu1?,mu2?,mu3?,p1?,p2?,p3?) =
      f(a1,a2,a3)*(    Vggg(p1,p2,p3,mu1,mu2,mu3)  ) ;

* where
* Vggg(p1,p2,p3,mu1,mu2,mu3) = -g*( d_(mu1,mu2)*(p1(mu3)-p2(mu3))
*                                 + d_(mu2,mu3)*(p2(mu1)-p3(mu1))
*                                 + d_(mu3,mu1)*(p3(mu2)-p1(mu2))  )

.sort
#message color algebra 3/4: 4-gluon vertices

#$num = 4 ;
.sort
#do i=1,1
#$num = $num + 1 ;
.sort
b Vgggg ;
.sort
keep brackets ;
id once Vgggg(b1?,b2?,b3?,b4?,nu1?,nu2?,nu3?,nu4?) = 
      f(b1,b2,b'$num')*f(b3,b4,b'$num')*Vgggg1(nu1,nu2,nu3,nu4)
    + f(b1,b4,b'$num')*f(b2,b3,b'$num')*Vgggg2(nu1,nu2,nu3,nu4)
    + f(b1,b3,b'$num')*f(b4,b2,b'$num')*Vgggg3(nu1,nu2,nu3,nu4)  ;
.sort

* where:
* Vgggg1(nu1,nu2,nu3,nu4) = -i_*g^2*( d_(nu1,nu3)*d_(nu2,nu4)-d_(nu1,nu4)*d_(nu2,nu3) )
* Vgggg2(nu1,nu2,nu3,nu4) = -i_*g^2*( d_(nu1,nu2)*d_(nu3,nu4)-d_(nu1,nu3)*d_(nu2,nu4) )
* Vgggg3(nu1,nu2,nu3,nu4) = -i_*g^2*( d_(nu1,nu4)*d_(nu2,nu3)-d_(nu1,nu2)*d_(nu3,nu4) )

if( match(Vgggg(b1?,b2?,b3?,b4?,nu1?,nu2?,nu3?,nu4?)) ) ;
redefine i "0" ;
endif ;
.sort
#message {'$num'-4} 4-gluon vertex(s)

#enddo

antisymmetrize f ;
.sort

#call coloralgebra

#message now substitute the kinematics of the vertices

#do i=1,1

b Vgggg1,Vgggg2,Vgggg3,Vgggg,Vggg,eps1,eps2,eps3,eps4,eps4,p1,p2,p3,p4,p5 ;
.sort
keep brackets ;
id once Vggg(p1?,p2?,p3?,mu1?,mu2?,mu3?) = -g*( d_(mu1,mu2)*(p1(mu3)-p2(mu3))
                                              + d_(mu2,mu3)*(p2(mu1)-p3(mu1))
                                              + d_(mu3,mu1)*(p3(mu2)-p1(mu2))  ) ;

id once Vgggg1(nu1?,nu2?,nu3?,nu4?) = -i_*g^2*( d_(nu1,nu3)*d_(nu2,nu4)-d_(nu1,nu4)*d_(nu2,nu3) ) ;
id once Vgggg2(nu1?,nu2?,nu3?,nu4?) = -i_*g^2*( d_(nu1,nu2)*d_(nu3,nu4)-d_(nu1,nu3)*d_(nu2,nu4) ) ;
id once Vgggg3(nu1?,nu2?,nu3?,nu4?) = -i_*g^2*( d_(nu1,nu4)*d_(nu2,nu3)-d_(nu1,nu2)*d_(nu3,nu4) ) ;

#call allsimplnosort

.sort

if ( match(Vggg(p1?,p2?,p3?,mu1?,mu2?,mu3?)) ) ;
redefine i "0" ;
elseif( match(Vgggg(nu1?,nu2?,nu3?,nu4?)) ) ;
redefine i "0" ;
elseif( match(Vgggg1(nu1?,nu2?,nu3?,nu4?)) ) ;
redefine i "0" ;
elseif( match(Vgggg2(nu1?,nu2?,nu3?,nu4?)) ) ;
redefine i "0" ;
elseif( match(Vgggg3(nu1?,nu2?,nu3?,nu4?)) ) ;
redefine i "0" ;
endif ;
.sort

#message i is 'i'
#enddo


#message final kinematics + gauge choice
#call kinematics
#call transversality
#call gaugechoice
.sort


#do i=3,4
id Eps'i'(mu?) = eps'i'(mu) ;
#enddo
.sort
b Tr,f,T,prop;
* print +s ;
.sort

#call identifyprop

#call namemomenta

* the color delta function to one

id d_(j97,j99) = 1 ;
.sort

#message contract here either by tree-level or by projectors
* for now use the tree level for simplicity

* the complex conjugate of the tree-level diagrams
#include /Users/lorenzo/Dropbox/WORK/OXFORD/Projectors/qqbphph/tensors_all.inc ;

* print +s ;
.sort

#do j=1,5
l tmpP'j' = [D'j'dtilde]*tmp ;
#enddo
.sort

drop <[D1tilde]>,...,<[D5tilde]>,tmp,<[D1dtilde]>,...,<[D5dtilde]> ;
.sort


id BiVU(p2,?x,p1)*BiUU(p1,?y,p2) = LoopF(5,p2,?x,p1,?y) ;
.sort

multiply eps4(nu104)*eps3(nu103) ;

#message trace fermion loops
id g_(1,?x) = 1/(1-1) ;
id g_(2,?x) = 1/(1-1) ;
id g_(3,?x) = 1/(1-1) ;
id g_(4,?x) = 1/(1-1) ;
id g_(5,?x) = 1/(1-1) ;
.sort


id LoopF(1,?x) = g_(1,?x) ;
id LoopF(2,?x) = g_(2,?x) ;
id LoopF(3,?x) = g_(3,?x) ;
id LoopF(4,?x) = g_(4,?x) ;
id LoopF(5,?x) = g_(5,?x) ;
.sort
id LoopF(?x) = 1/(1-1) ;
.sort


tracen,1 ;
#call allsimplnosort
.sort
tracen,2 ;
#call allsimplnosort
.sort
tracen,3 ;
#call allsimplnosort
.sort
tracen,4 ;
#call allsimplnosort
.sort
tracen,5 ;
#call allsimplnosort
.sort

repeat ;
id mp12 = -p12 ;
id mp13 = -p13 ;
id mp23 = -p23 ;
id mp123 = -p123 ;

id p12 = p1+p2 ;
id p13 = p1+p3 ;
id p23 = p2+p3 ;
id p123 = p1+p2+p3 ;
endrepeat ;
.sort

#call kinematics
#call transversality
#call gaugechoice
.sort

b i_,eq,g,Nc,Nf,NfV,NfV2,d_,LoopF,Sector,prop ;
.sort

#message contract the epsilon of the external photons
#message gauge eps3.p2 = 0, eps4.p1 = 0
#message 1/2
id eps3.p6?*eps3.p7? = (-p6.p7 + ( p3.p6*p2.p7 + p3.p7*p2.p6 )/s23*2 ) ;
id eps3.p6?*eps3.p6? = (-p6.p6 + ( p3.p6*p2.p6 + p3.p6*p2.p6 )/s23*2 ) ;
id eps3.eps3 = 2-d ;
#call allsimplnosort
.sort
#call kinematics
#call transversality
#call gaugechoice

b i_,eq,g,Nc,Nf,NfV,NfV2,d_,LoopF,Sector,prop ;
.sort
#message 2/2
id eps4.p6?*eps4.p7? = (-p6.p7 + ( p4.p6*p1.p7 + p4.p7*p1.p6 )/s23*2 ) ;
id eps4.p6?*eps4.p6? = (-p6.p6 + ( p4.p6*p1.p6 + p4.p6*p1.p6 )/s23*2 ) ;
id eps4.eps4 = 2-d ;
#call allsimplnosort
.sort
#call kinematics
#call transversality
#call gaugechoice

.sort


id Sector(PL?$topo,?x) = Label(PL) ;

#include ../../qqbQQ/2loop/TOPOLOGIES/ToposPL1.rec
#include ../../qqbQQ/2loop/TOPOLOGIES/ToposNPL.rec
.sort


id 1/Dk1?props = 1/(1-1) ;
.sort

#message change sign

#call mktok
#call openmomenta

#call kinematics

#message now substitute the right scalar products

*print +s ;
.sort

ab i_,Nc,Nf,NfV,NfV2,g,eq,d,s12,s13,s23 ;
.sort
collect Num ;
.sort

#call FactArgNum
#call kinematics

ab Num,i_,g,eq,Nc,[Nc^2-1],d,s12,s13,s23 ;
.sort
keep brackets ;

#include ../../qqbQQ/2loop/TOPOLOGIES/ScalProdNPL.inc
#include ../../qqbQQ/2loop/TOPOLOGIES/ScalProdPL1.inc
.sort

id k1 = 1/(1-1) ;
id k2 = 1/(1-1) ;
.sort


#message now recognize integrals
id Label(PL?)/<D1^n1?>/.../<D9^n9?> = INT(PL,n1,...,n9) ;
.sort

id D1?propsnum = 1/(1-1) ;
id 1/D1?propsnum = 1/(1-1) ;
.sort


#message polyratfun
b Nc,Nf,NfV,NfV2,g,eq,i_,INT,Den,Num,Ratio,Label,INT,d_ ;
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

#message add topology identifiers for Reduze
id INT(PL?,n1?,n2?,n3?,n4?,n5?,n6?,n7?,n8?,n9?) =
   INT(PL, coeff(n1)
        + coeff(n2)
        + coeff(n3)
        + coeff(n4)
        + coeff(n5)
        + coeff(n6)
        + coeff(n7)
        + coeff(n8)
        + coeff(n9) ,

          coeff(n1)*2^0  
        + coeff(n2)*2^1  
        + coeff(n3)*2^2  
        + coeff(n4)*2^3  
        + coeff(n5)*2^4  
        + coeff(n6)*2^5  
        + coeff(n7)*2^6  
        + coeff(n8)*2^7  
        + coeff(n9)*2^8  ,

         (abs_(n1) + n1 )/2 
       + (abs_(n2) + n2 )/2
       + (abs_(n3) + n3 )/2
       + (abs_(n4) + n4 )/2
       + (abs_(n5) + n5 )/2
       + (abs_(n6) + n6 )/2
       + (abs_(n7) + n7 )/2
       + (abs_(n8) + n8 )/2
       + (abs_(n9) + n9 )/2 ,

         (abs_(n1) - n1 )/2
       + (abs_(n2) - n2 )/2
       + (abs_(n3) - n3 )/2
       + (abs_(n4) - n4 )/2
       + (abs_(n5) - n5 )/2
       + (abs_(n6) - n6 )/2
       + (abs_(n7) - n7 )/2
       + (abs_(n8) - n8 )/2
       + (abs_(n9) - n9 )/2
       , [], n1,...,n9) ;

.sort

argument INT ;
id coeff(0) = 0 ;
endargument ;
.sort
argument INT ;
id coeff(n1?) = (abs_(n1) + n1 )/2/n1 ;
endargument ;
.sort

#message mount and simplify proper form factors


#do j=1,5
l tmp'j' =
#do l=1,5
+ y'l'p'j'*tmpP'l' 
#enddo
;
.sort
#enddo

#include /Users/lorenzo/Dropbox/WORK/OXFORD/Projectors/qqbphph/coefficients_all.inc


b d_,eq,i_,g,Den,Num,INT ;
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
#call FactArgNum
#call FactArgDen

.sort

b Nc,Nf,NfV,NfV2,eq,g,Den,i_,d_,Num ;
.sort
#do j=1,5
#write <Diagrams/diag_'i'.out> "g [F'j'_diag'i'] = %E ; " tmp'j'
#write <Diagrams/diag_'i'.out> ""
#enddo
#close <Diagrams/diag_'i'.out>
.sort

b Nc,Nf,NfV,NfV2,eq,g,Den,i_ ;
* print +s ;
.sort
.store
delete storage ;
.sort

#enddo



.end













* now the form factors

#do i=1,5

g F'i' =
#do j=1,5
 + y'j'p'i'*tmpP'i'
#enddo
;

#enddo

#include /Users/lorenzo/Dropbox/WORK/OXFORD/Projectors/qqbphph/coefficients_all.inc

b d_,eq,i_,g,Den,Num ;
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
#call FactArgNum
#call FactArgDen



b d_,eq,i_,g ;
.sort

#do i=1,5
#write <results_Tree.out> "g [F'i'_tree] = %E ;" F'i'
#enddo

#write <results_Tree.out> ""

#do i=1,5
#write <results_Tree.out> "g [T'i'_tree] = %E ;" tmpP'i'
#enddo

print +s ;
.end









