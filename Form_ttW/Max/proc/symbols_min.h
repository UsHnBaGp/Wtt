#define MAXINDEX "1000"
#define MAXNEGINDEX "1000"
#define MAXMOM "1000"
#define MAXDUM "1000"
#define MAXPROP "{`NLOOP' * ( `NLOOP' + 1 ) / 2 + `NLOOP' * ( `NEXT' - 1 )}"

**********************
*General symbols
**********************
Symbol sqrt2,D,half,TR;
CFunction diagid,DiaMatch;

*******************************
*QGRAF output
*******************************
* Diagram elements
CFunction symF,legin,legout,prop,vertex;
* Field types
CFunction em,ep,Em,Ep,A;
* Momenta
V p1,...,p`MAXMOM',q1,...,q`MAXMOM',k1,...,k`MAXMOM';
Set momE : p1,...,p`MAXMOM';
Set momL : k1,...,k`MAXMOM';

*******************************
*Feynman rules
*******************************
* Spinor {U,Ubar,V,Vbar}(momentum,mass,helicity,field index), Dirac matrix G(lorentz index), Dirac Identity matrix GI()
NFunction U,Ubar,V,Vbar,G, GI;
*Polarisation EpsA(momentum,lorentz index,helicity,field index), EpsC is complex conjugate
CFunction EpsA,EpsAC
* Dirac trace
CFunction Tr;
* Scalar propagator Prop(mom,mass,vertex1,vertex2)
CFunction Prop, IProp,PropIProp;
* Gauge fixing parameters
Symbol xiPhoton;
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
Symbol s,t,u,m,msq;

*******************************
*Scalar integrals / Reduze
*******************************
Symbol D1,...,D`MAXPROP';
set setD : D1,...,D`MAXPROP';

CFunction Sector, Shift, Den, INT;
NFunction redT, redID , redR , redS ;
S [];

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
NFunction Utmp,Vtmp,mLEFT;


*******************************
*Indices
*******************************
* Lorentz indices
Dimension D;
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
Symbol im;
CFunction dd,sp;
