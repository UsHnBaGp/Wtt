#define MAXINDEX "1000"
#define MAXNEGINDEX "1000"
#define MAXMOM "1000"
#define MAXDUM "1000"
#define MAXPROP "{`NLOOP'*(`NLOOP'+1)/2+`NLOOP'*(`NEXT'-1)}"

**********************
*General symbols
**********************
Symbol sqrt2,d,half,TR;
CFunction diagid,DiaMatch;

*******************************
*QGRAF output
*******************************
* Diagram elements
CFunction symF,legin,legout,prop,vertex;
* Field types
CFunction Qu,Qubar,Qd,Qdbar,Qt,Qtbar;
CFunction Wp,Wm;
CFunction gluon, ghost, ghostbar;
* Momenta
V p1,...,p{`NEXT'},q1,...,q`MAXMOM',k1,...,k`NLOOP';
Set momE : p1,...,p{`NEXT'};
Set momL : k1,...,k{`NLOOP'};

*******************************
*Feynman rules
*******************************
* Spinor {U,Ubar,V,Vbar}(momentum,mass,helicity,field index), Dirac matrix G(lorentz index), Dirac Identity matrix GI()
NFunction U,Ubar,V,Vbar,G,GI;
*Polarisation Eps(momentum,mass,lorentz index,helicity,field index), EpsC is complex conjugate
CFunction Eps,EpsCC
* Dirac trace
CFunction Tr;
* Scalar propagator Prop(mom,mass,vertex1,vertex2)
CFunction Prop, IProp,PropIProp;
* Helicity marker
CFunction HEL;
* Temporary markers for d_ and vectors that don't require indices as arguments
* right away: dtmp(mu,nu) -> d_(mu,nu); momtmp(p,mu) -> p(mu);
CFunction dtmp,momtmp;
* Container for sorting the non-commuting spin objects CCs(symbol,index1,index2)
CFunction CCs;
* Terminal index for single index objects
Symbol CCnull;

*******************************
*Kinematics 
*******************************
Symbol s12,s13,s14,s23,s24,s34
Symbol mt,mtsq,mw,mwsq

*******************************
*Scalar integrals / Reduze
*******************************
Symbol D1,...,D`MAXPROP';
set setD : D1,...,D`MAXPROP';

CFunction Sector, Shift, Den, INT;
NFunction redT, redID , redR , redS ;
S [];

*#if `NLOOP' >= 1
*  #if `TOPO'== YJZ
*    #include ../mma/fcode_YJZ/`NLOOP'l_def.fcode
*  #else
*    #include ../mma/fcode/`NLOOP'l_def.fcode
*  #endif
*#endif


*******************************
*Spinor helicity formalism
*******************************
*auxilliary polarisation
Vector naxA;
* denominator
CFunction den;
* numerator
CFunction num;
* rational function
CFunction ratio;


*******************************
*Dummys
*******************************
Symbol sDUM1,...,sDUM`MAXDUM';
Index iDUM1,...,iDUM`MAXDUM';
Vector vDUM1,...,vDUM`MAXDUM';
CFunction cDUM1,...,cDUM`MAXDUM';
NFunction nDUM1,...,nDUM`MAXDUM';
NFunction Epstmp,Utmp,Vtmp,mLEFT;


*******************************
*Indices
*******************************
* Lorentz indices
Dimension d;
Index mu1,...,mu`MAXINDEX',mum1,...,mum`MAXNEGINDEX';
Index muT1,...,muT`MAXINDEX',muTm1,...,muTm`MAXNEGINDEX';
* External helicities
Symbol la1,...,la`MAXINDEX',lam1,...,lam`MAXNEGINDEX';
* Vertex indices
Index vi1,...,vi`MAXINDEX';

*******************************
*Index translation tables
*******************************
*Define tables
Table,relax indLor(-`MAXNEGINDEX':`MAXINDEX');
Table,relax indHel(-`MAXNEGINDEX':`MAXINDEX');
Table,relax indVert(1:`MAXINDEX');
*Fill tables
#do i=1,`MAXINDEX'
  Fill indLor(`i') = mu`i';
  Fill indHel(`i') = la`i';
  Fill indVert(`i') = vi`i';
#enddo
#do i=1,`MAXNEGINDEX'
  Fill indLor(-`i') = mum`i';
  Fill indHel(-`i') = lam`i';
#enddo
  
*******************************
*MMA output
*******************************
Symbol I;
CFunction dd,sp;
