#define TENSORN "24"

#define V1  "Vbar(p1, 0)"
#define U2     "U(p2, 0)"
#define V3  "Vbar(p3,mt)"
#define U4     "U(p4,mt)"
#define Eps  "Eps(p5,mw,muT1)"


#define SpChA1 "`V1'*(G(p3)+G(p4))*`U2'"
#define SpChA2 "`V1'*(G(p3)-G(p4))*`U2'"

#define SpChB1 "mtsq*`V3'*`U4'"
#define SpChB3 "mt*`V3'*(G(p1)+G(p2))*`U4'"
#define SpChB4 "mt*`V3'*(G(p1)-G(p2))*`U4'"
#define SpChB2 "`V3'*G(p1)*G(p2)*`U4'"

#define PolCon1 "`Eps'*p2(muT1)"
#define PolCon2 "`Eps'*p3(muT1)"
#define PolCon3 "`Eps'*p4(muT1)"

#define count "1"
#do iipol = 1 , 3
#do iia = 1 , 2
#do iib = 1 , 4
  G t`count' = `SpChA`iia'' * `SpChB`iib'' * `PolCon`iipol'' ;
  .sort
  redefine count "{`count' + 1}";
  .sort
#enddo
#enddo
#enddo
.sort

*#do i = 1 , `TENSORN'
*  print t`i';
*  .sort
*#enddo

#call wrapSpinChain(-1,t)
.sort

Hide t1,...,t`TENSORN';


#do i = 1 , `TENSORN'
    G tcc`i' = t`i';
    #call complexConjCCs(50,50,-50)
    .sort
    Hide tcc`i';
    .sort
#enddo


#do i=1,`TENSORN'
 #do j=1,`TENSORN'
  #define PTt`i'`j' "0"
 #enddo
#enddo

#do i=1,`TENSORN'
  #define PTt`i'`i' "1"
#enddo

#do suf={,cc}
  #do i=1,`TENSORN'
    G T`suf'`i' = 
    #do j=1,`TENSORN'
      + `PTt`i'`j'' * t`suf'`j'
    #enddo
    ;
  #enddo
#enddo
.sort

Hide T1,...,T`TENSORN';
Hide Tcc1,...,Tcc`TENSORN';
.sort
