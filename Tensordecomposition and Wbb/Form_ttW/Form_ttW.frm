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

.global


*** Define Tensors ***

global T1=eps(p1)*vbaru(p3)*UbarV;
global T2=eps(p1)*vbaru(p4)*UbarV;
global T3=eps(p2)*vbaru(p3)*UbarV;
global T4=eps(p2)*vbaru(p4)*UbarV;
global T5=eps(p3)*vbaru(p3)*UbarV;
global T6=eps(p3)*vbaru(p4)*UbarV;

global T7=eps(p1)*vbaru(p3)*UbarV(p1);
global T8=eps(p1)*vbaru(p4)*UbarV(p1);
global T9=eps(p2)*vbaru(p3)*UbarV(p1);
global T10=eps(p2)*vbaru(p4)*UbarV(p1);
global T11=eps(p3)*vbaru(p3)*UbarV(p1);
global T12=eps(p3)*vbaru(p4)*UbarV(p1);
global T13=eps(p1)*vbaru(p3)*UbarV(p2);
global T14=eps(p1)*vbaru(p4)*UbarV(p2);
global T15=eps(p2)*vbaru(p3)*UbarV(p2);
global T16=eps(p2)*vbaru(p4)*UbarV(p2);
global T17=eps(p3)*vbaru(p3)*UbarV(p2);
global T18=eps(p3)*vbaru(p4)*UbarV(p2);

global T19=eps(p1)*vbaru(p3)*UbarV(p1,p2);
global T20=eps(p1)*vbaru(p4)*UbarV(p1,p2);
global T21=eps(p2)*vbaru(p3)*UbarV(p1,p2);
global T22=eps(p2)*vbaru(p4)*UbarV(p1,p2);
global T23=eps(p3)*vbaru(p3)*UbarV(p1,p2);
global T24=eps(p3)*vbaru(p4)*UbarV(p1,p2);

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

.sort

Trace4, 1;
Trace4, 2;

.sort


*** Polarisation Sum ***

id eps(pi?)*epsC(pi?)= (- pi.pi + (p5.pi)^2/mw^2);
id eps(pi?)*epsC(pj?)=  (p5.pi)*(p5.pj)/mw^2;

.sort	


*** Mandelstam ***

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

*** Make matrix look nicer ***
*** Do we need this, how is it done best?***


*** Save Matrix ***

#do i = 1, 'lengthT'
	#do j = 1, 'lengthT'
		#write <M_Matrix_Form.out> "MMatrixForm[['i','j']] =  %e ", MMatrixI'i'J'j';
	#enddo
#enddo

#do i = 1, 'lengthT'
	#do j = 1, 'lengthT'
		#write <M_Matrix_Form.txt> "MMatrixForm[['i','j']] =  %e ", MMatrixI'i'J'j';
	#enddo
#enddo

.end

