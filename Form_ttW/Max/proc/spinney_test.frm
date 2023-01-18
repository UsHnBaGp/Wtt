#-
Off statistics;
Vectors pI, q, pi, s;
Vectors k1, ..., k4;
Symbol mI, CL, CR, temp;
Index mu;

#Include- spinney.hh
#Procedure AssertZero(?names)
   #Do name={`?names'}
      #$termsin`name' = termsin_(`name');

      #If `$termsin`name'' != 0
         #Message "Assertion failed: `name' != 0."
         #Write "`name' = %E", `name'
         #Terminate 1
      #Else
         #Write "Test `name' succeeded."
      #EndIf
   #EndDo
#EndProcedure
.global

Local test1 = s.s - (-1);
Local test2 = s.pI;
Local test3 = pI.pI - mI^2;
Id s = 1/mI * pI - mI/pI.q * q;
#Call LightConeDecomposition(pI, pi, q, mI)

Id SpDenominator(mI?) = 1/mI;
Id 1/Spa2(pi?, q?) = Spb2(q, pi) / (2 * pi.q);
Id 1/Spb2(pi?, q?) = Spa2(q, pi) / (2 * pi.q);
Id Spa2(pi?, q?) * Spb2(q?, pi?) = 2 * pi.q;

Id pi.q = pI.q;
Id pi.pi = 0;
Id q.q = 0;

.sort
#Call AssertZero(test1,test2,test3)
.store:polarisation vector;
Local test4 = SpDenominator(Spb2(pi, q)) *
   (Sm4(pI) + (+1) * mI) * USpb(q) - USpa(pI, +1);
Local test5 = SpDenominator(Spa2(pi, q)) *
   (Sm4(pI) + (+1) * mI) * USpa(q) - USpb(pI, +1);
Local test6 = UbarSpb(q) * (Sm4(pI) + (+1) * mI) *
   SpDenominator(Spb2(q, pi)) - UbarSpa(pI, +1);
Local test7 = UbarSpa(q) * (Sm4(pI) + (+1) * mI) *
   SpDenominator(Spa2(q, pi)) - UbarSpb(pI, +1);
Local test8 = SpDenominator(Spb2(pi, q)) *
   (Sm4(pI) + (-1) * mI) * USpb(q) - USpa(pI, -1);
Local test9 = SpDenominator(Spa2(pi, q)) *
   (Sm4(pI) + (-1) * mI) * USpa(q) - USpb(pI, -1);
Local test10 = UbarSpb(q) * (Sm4(pI) + (-1) * mI) *
   SpDenominator(Spb2(q, pi)) - UbarSpa(pI, -1);
Local test11 = UbarSpa(q) * (Sm4(pI) + (-1) * mI) *
   SpDenominator(Spa2(q, pi)) - UbarSpb(pI, -1);

#Call LightConeDecomposition(pI, pi, q, mI)

Id SpDenominator(mI?) = 1/mI;
Id 1/Spa2(pi?, q?) = Spb2(q, pi) / (2 * pi.q);
Id 1/Spb2(pi?, q?) = Spa2(q, pi) / (2 * pi.q);
Id Spa2(pi?, q?) * Spb2(q?, pi?) = 2 * pi.q;

Id pi.q = pI.q;
Id pi.pi = 0;
Id q.q = 0;

Repeat;
   Id Sm4(pi?) * USpa(q?) = USpb(pi) * Spa2(pi, q);
   Id Sm4(pi?) * USpb(q?) = USpa(pi) * Spb2(pi, q);
   Id UbarSpa(q?) * Sm4(pi?) = Spa2(q, pi) * UbarSpb(pi);
   Id UbarSpb(q?) * Sm4(pi?) = Spb2(q, pi) * UbarSpa(pi);
EndRepeat;
Id Spa2(pi?, q?) * Spb2(q?, pi?) = 2 * pi.q;
.sort
#Call AssertZero(test4,test5,test6,test7)
#Call AssertZero(test8,test9,test10,test11)
.store:def massive spinors;
Local test12 = (Sm4(pI) - mI) * USpb(pI, +1);
Local test13 = (Sm4(pI) - mI) * USpa(pI, +1);
Local test14 = (Sm4(pI) + mI) * USpb(pI, -1);
Local test15 = (Sm4(pI) + mI) * USpa(pI, -1);
Local test16 = UbarSpb(pI, +1) * (Sm4(pI) - mI);
Local test17 = UbarSpa(pI, +1) * (Sm4(pI) - mI);
Local test18 = UbarSpb(pI, -1) * (Sm4(pI) + mI);
Local test19 = UbarSpa(pI, -1) * (Sm4(pI) + mI);

#Call LightConeDecomposition(pI, pi, q, mI)

Id SpDenominator(mI?) = 1/mI;
Id 1/Spa2(pi?, q?) = Spb2(q, pi) / (2 * pi.q);
Id 1/Spb2(pi?, q?) = Spa2(q, pi) / (2 * pi.q);
Id Spa2(pi?, q?) * Spb2(q?, pi?) = 2 * pi.q;

Id pi.q = pI.q;
Id pi.pi = 0;
Id q.q = 0;

Repeat;
   Id Sm4(pi?) * USpa(q?) = USpb(pi) * Spa2(pi, q);
   Id Sm4(pi?) * USpb(q?) = USpa(pi) * Spb2(pi, q);
   Id UbarSpa(q?) * Sm4(pi?) = Spa2(q, pi) * UbarSpb(pi);
   Id UbarSpb(q?) * Sm4(pi?) = Spb2(q, pi) * UbarSpa(pi);
EndRepeat;
Id Spa2(pi?, q?) * Spb2(q?, pi?) = 2 * pi.q;
.sort
#Call AssertZero(test12,test13,test14,test15)
#Call AssertZero(test16,test17,test18,test19)
.store:massive Dirac equation;
Local test20 = USpa(pI, +1) * UbarSpb(pI, +1)
   - 1/2 * (1 + (+1) * Gamma5 * Sm4(s)) * (Sm4(pI) + (+1) * mI);
Local test21 = USpb(pI, +1) * UbarSpa(pI, +1)
   - 1/2 * (1 - (+1) * Gamma5 * Sm4(s)) * (Sm4(pI) + (+1) * mI);
Local test22 = USpa(pI, -1) * UbarSpb(pI, -1)
   - 1/2 * (1 + (-1) * Gamma5 * Sm4(s)) * (Sm4(pI) + (-1) * mI);
Local test23 = USpb(pI, -1) * UbarSpa(pI, -1)
   - 1/2 * (1 - (-1) * Gamma5 * Sm4(s)) * (Sm4(pI) + (-1) * mI);
Id s = 1/mI * pI - mI/pI.q * q;
#Call LightConeDecomposition(pI, pi, q, mI)

Id SpDenominator(mI?) = 1/mI;
Id 1/Spa2(pi?, q?) = Spb2(q, pi) / (2 * pi.q);
Id 1/Spb2(pi?, q?) = Spa2(q, pi) / (2 * pi.q);
Id Spa2(pi?, q?) * Spb2(q?, pi?) = 2 * pi.q;

Id pi.q = pI.q;
Id pi.pi = 0;
Id q.q = 0;

Id USpa(q)  =
   SpDenominator(Spb2(q, pi)) * ProjPlus * Sm4(q) * USpb(pi);
Id USpb(q)  =
   SpDenominator(Spa2(q, pi)) * ProjMinus * Sm4(q) * USpa(pi);
Id UbarSpa(q)  =
   UbarSpb(pi) * Sm4(q) * ProjPlus * SpDenominator(Spb2(pi, q));
Id UbarSpb(q)  =
   UbarSpa(pi) * Sm4(q) * ProjMinus * SpDenominator(Spa2(pi, q));
Id USpb(q?) * UbarSpa(q?) = ProjMinus * Sm4(q);
Id USpa(q?) * UbarSpb(q?) = ProjPlus * Sm4(q);

#Call LightConeDecomposition(pI, pi, q, mI)

Id SpDenominator(mI?) = 1/mI;
Id 1/Spa2(pi?, q?) = Spb2(q, pi) / (2 * pi.q);
Id 1/Spb2(pi?, q?) = Spa2(q, pi) / (2 * pi.q);
Id Spa2(pi?, q?) * Spb2(q?, pi?) = 2 * pi.q;

Id pi.q = pI.q;
Id pi.pi = 0;
Id q.q = 0;

Id ProjPlus = 1/2 * (1 + Gamma5);
Id ProjMinus = 1/2 * (1 - Gamma5);
Repeat Id Sm4(q?) * Gamma5 = - Gamma5 * Sm4(q);
Id Gamma5 * Gamma5 = 1;

#Call SpOrder(pi,q)
Id d4(pi?, q?) = pi.q;
Id 1/pi.q = 1/pI.q;
#Call LightConeDecomposition(pI, pi, q, mI)

Id SpDenominator(mI?) = 1/mI;
Id 1/Spa2(pi?, q?) = Spb2(q, pi) / (2 * pi.q);
Id 1/Spb2(pi?, q?) = Spa2(q, pi) / (2 * pi.q);
Id Spa2(pi?, q?) * Spb2(q?, pi?) = 2 * pi.q;

Id pi.q = pI.q;
Id pi.pi = 0;
Id q.q = 0;

.sort
#Call AssertZero(test20,test21,test22,test23)
.store:completeness for massive spinors;
Local test24 = Spba(k1,iDUMMY1,k1,iDUMMY2,k2) *
     Spab(k3,iDUMMY1,k4) * Spab(k4,iDUMMY2,k3)
   - 4 * Spa2(k3,k1)*Spb2(k1,k4)*Spa2(k4,k2)*Spb2(k1,k3);
Local test25 = Spba(k1,iDUMMY1,k1,iDUMMY2,k2) *
     Spba(k3,iDUMMY1,k4) * Spab(k4,iDUMMY2,k3)
   - 4 * Spb2(k3,k1)*Spa2(k1,k4)*Spa2(k4,k2)*Spb2(k1,k3);
Local test26 = Spba(k1,iDUMMY1,k1,iDUMMY2,k2) *
     Spab(k3,iDUMMY1,k4) * Spba(k4,iDUMMY2,k3)
   - 4 * Spa2(k3,k1)*Spb2(k1,k4)*Spb2(k1,k4)*Spa2(k3,k2);
Local test27 = Spba(k1,iDUMMY1,k1,iDUMMY2,k2) *
     Spba(k3,iDUMMY1,k4) * Spba(k4,iDUMMY2,k3)
   - 4 * Spb2(k3,k1)*Spa2(k1,k4)*Spb2(k1,k4)*Spa2(k3,k2);
#Call SpContract
#Call SpOpen
.sort
#Call AssertZero(test24,test25,test26,test27)
.store:tests for SpContract;
#Do lambda1={a,b}
   #Do lambda2={a,b}
      Local test28`lambda1'`lambda2' =
         + UbarSp`lambda1'(k1) * Sm(iDUMMY1) * Sm(k3) *
                    Sm(iDUMMY2) * (CL * ProjMinus + CR * ProjPlus) *
           Sm(k4) * Sm(iDUMMY1) * USp`lambda2'(k2)
         - UbarSp`lambda1'(k1) * Sm(iDUMMY1) * Sm(k3) * Sm(iDUMMY2) *
                    Sm(k4) * Sm(iDUMMY1) * USp`lambda2'(k2);
      Local test29`lambda1'`lambda2' =
         + UbarSp`lambda1'(k1) * Sm(iDUMMY1) * (CL*ProjMinus + CR*ProjPlus) *
           Sm(k3) * Sm(iDUMMY2) * (CL * ProjMinus + CR * ProjPlus) *
           Sm(k4) * Sm(iDUMMY1) * (CL * ProjMinus + CR * ProjPlus) *
           USp`lambda2'(k2)
         - UbarSp`lambda1'(k1) * Sm(iDUMMY1) * Sm(k3) * Sm(iDUMMY2) *
               Sm(k4) * Sm(iDUMMY1) * USp`lambda2'(k2);
   #EndDo
#EndDo

#Call tHooftAlgebra
Id CL = 1;
Id CR = 1;
.sort
#Call AssertZero(test28aa,test28ab,test28ba,test28bb,\
    test29aa,test29ab,test29ba,test29bb)

.store:tests for ProjPlus/Minus;
Local test30a = Spa2(q,k1)*
   SpDenominator(Spa2(q,k2))*SpDenominator(Spa2(q,k3))
 - Spa2(k2,k1)*SpDenominator(Spa2(q,k2))*SpDenominator(Spa2(k2,k3))
 - Spa2(k3,k1)*SpDenominator(Spa2(q,k3))*SpDenominator(Spa2(k3,k2));
Local test30b = - Spa2(q,k1)*
   SpDenominator(Spa2(k2,q))*SpDenominator(Spa2(q,k3))
 - Spa2(k2,k1)*SpDenominator(Spa2(q,k2))*SpDenominator(Spa2(k2,k3))
 - Spa2(k3,k1)*SpDenominator(Spa2(q,k3))*SpDenominator(Spa2(k3,k2));
Local test30c = - Spa2(q,k1)*
   SpDenominator(Spa2(q,k2))*SpDenominator(Spa2(k3,q))
 - Spa2(k2,k1)*SpDenominator(Spa2(q,k2))*SpDenominator(Spa2(k2,k3))
 - Spa2(k3,k1)*SpDenominator(Spa2(q,k3))*SpDenominator(Spa2(k3,k2));
Local test30d = + Spa2(q,k1)*
   SpDenominator(Spa2(k2,q))*SpDenominator(Spa2(k3,q))
 - Spa2(k2,k1)*SpDenominator(Spa2(q,k2))*SpDenominator(Spa2(k2,k3))
 - Spa2(k3,k1)*SpDenominator(Spa2(q,k3))*SpDenominator(Spa2(k3,k2));
Local test30e = + Spa2(q,k1)*
   SpDenominator(Spa2(k2,q))*SpDenominator(Spa2(k2,q))
   - temp;

#Call Schouten(q)
* make sure test30e has *NOT* been matched [requires Form 33 > 5 Aug 2010]
Id temp = + Spa2(q,k1)*
   SpDenominator(Spa2(k2,q))*SpDenominator(Spa2(k2,q));

FactArg (-1), SpDenominator;
ChainOut SpDenominator;
Id SpDenominator(sDUMMY1?number_) = 1/sDUMMY1;
.sort
#Call AssertZero(test30a,test30b,test30c,test30d,test30e)
.sort

.store:tests for Schouten;
Local test31a = e_(k1,k2,k3,mu) * (2*k4(mu) - Spab(k4, mu, k4));
Local test31b = e_(k1,k2,k3,mu) * (2*k4(mu) - Spba(k4, mu, k4));
#Call SpContractLeviCivita(k4)
#Call SpOpen
.sort
#Call AssertZero(test31a,test31b)
.sort

.store:tests for epsilon tensors;
#Write "All tests passed."
.end
