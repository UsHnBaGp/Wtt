#-
off statistics;

*** Preliminary definitions ***

*length tensors
#define lengthT "24"

*massless fermions
autodeclare cfunction vbaru; 

*massive fermions
autodeclare cfunction UbarV;

*polarization
autodeclare cfunction eps;

*momenta
autodeclare vectors p;

*MassesAndMandelstam
autodeclare symbol m,s;

*Prefactors, Formfactor and Label
autodeclare cfunction F,C,Label;

*Indices
index i,j;

*Indices
autodeclare index mu;

.global


*** Include Tensors ***

#include tensors.h

id vbaru(i?) = vbaru(i);
id UbarV(i?) = UbarV(i);
.store
.sort 


*** Complex Conjugate Tensors ***

#do i=1, 'lengthT'
	global T'i'CC = T'i' ;
#enddo

id eps(p?) = epsC(p);
id vbaru(p?) = vbaruC(p);
id UbarV = UbarVC;
id UbarV(p?) = UbarVC(p);
id UbarV(pi?,pj?) = UbarVC(pj,pi);
id vbaru(mui?) = vbaruC(mui);
id UbarV(pi?,mui?) = UbarVC(mui,pi);
.store
.sort


*** Compute Matrix elements ***

#do i=1, 'lengthT'
	#do j=1, 'lengthT'
		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
	#enddo
#enddo

.sort


*** Fermion Spin Sums ***

id vbaru(p?) = g_(1,p2,p); 
id vbaruC(p?)= g_(1,p1,p);
id UbarV = g_(2,p3)+mt*gi_(2);
id UbarVC = g_(2,p4)-mt*gi_(2);
id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
id vbaru(mui?) = g_(1,p2,mui); 
id vbaruC(mui?)= g_(1,p1,mui);
id UbarV(pi?,mui?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,mui);
id UbarVC(mui?,pi?) = (g_(2,p4)-mt*gi_(2))*g_(2,mui,pi);
.sort


Trace4, 1;
Trace4, 2;

.sort


*** Polarisation Sum ***

id eps(pi?)*epsC(pj?)= (- pi.pj + (p5.pi)*(p5.pj)/mw^2);

.sort	

print;
*** Kinematics/Mandelstam Identities ***

#include FivePointKinematics.h


*** Make matrix look nicer ***
*** Do we need this, how is it done best?***


*** Save Matrix and drop it***

#do i = 1, 'lengthT'
	#do j = 1, 'lengthT'
		#write <M_Matrix_Form.out> "MMatrixForm[['i','j']] =  %e ", MMatrixI'i'J'j';
	#enddo
#enddo

#do i = 1, 'lengthT'
	#do j = 1, 'lengthT'
		#write <M_Matrix_Form.txt> " %e ", MMatrixI'i'J'j';
	#enddo
#enddo

#do i = 1, 'lengthT'
	#do j = 1, 'lengthT'
		drop MMatrixI'i'J'j';
	#enddo
#enddo

.end
.sort

*******************************************************************************************
***************************    *Compute Projectors*     ***********************************
*******************************************************************************************

*** Define general Amplitude ***

g S =
#do i = 1,'lengthT'
+ F'i'*T'i'
#enddo
;

*** Define general Projectors ***

g R =
#do i = 1,'lengthT'
+ C'i'*T'i'CC
#enddo
;
.store

*** Multiply them***

g expr = R*S ;

b F1,...,F'lengthT',C1,...,C'lengthT';
.sort

*** Fermion Spin Sums ***

id vbaru(p?) = g_(1,p2,p); 
id vbaruC(p?)= g_(1,p1,p);
id UbarV = g_(2,p3)+mt*gi_(2);
id UbarVC = g_(2,p4)-mt*gi_(2);
id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);

.sort

Trace4, 1;
Trace4, 2;

.sort


*** Polarisation Sum ***

id eps(pi?)*epsC(pi?)= (- pi.pi + (p5.pi)^2/mw^2);
id eps(pi?)*epsC(pj?)=  (p5.pi)*(p5.pj)/mw^2;

.sort	


*** Kinematics/Mandelstam Identities ***

id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;
id p5.p5=mw^2;

id p1.p2=s12/2;
id p1.p3=(s13-mt^2)/2;
id p1.p4=(s14-mt^2)/2;
id p1.p5=(s15-mw^2)/2;

id p2.p3=(s23-mt^2)/2;
id p2.p4=(s24-mt^2)/2;
id p2.p5=(s25-mw^2)/2;

id p3.p4=(s34-2*mt^2)/2;
id p3.p5=(s35-mw^2-mt^2)/2;

id p4.p5=(s45-mw^2-mt^2)/2;

.sort


*** Fivepoint Kinematics ***

id s15=2*mt^2+mw^2-s12-s13-s14;
id s25=2*mt^2+mw^2-s12-s23-s24;
id s35=3*mt^2+mw^2-s13-s23-s34;
id s45=3*mt^2+mw^2-s14-s24-s34;
.sort
id s34=-(s24+s23+s14+s13+s12)+4*mt^2+mw^2;
.sort

*** Make equation system ***

#do i=1,'lengthT'
b F1,...,F'lengthT';
.sort
g eq'i' = expr[F'i'];
.sort
#enddo

b C1,...,C'lengthT',Label;
.sort


*** Solve equation system for all Projectors ***

* system number 'N'
#do N = 1,'lengthT'

*on statistics ;

#message Projector 'N'

#do i=1,'lengthT'
	#if('i'== 'N')
		l zero'i' = eq'i' - 1 ;
	#else
		l zero'i' = eq'i' ;
	#endif
#enddo
.sort


#do i=1,'lengthT'
b C1,C2;
p +s zero'i';
#enddo

.sort
#enddo

.end

