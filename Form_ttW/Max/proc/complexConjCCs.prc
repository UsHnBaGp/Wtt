#procedure complexConjCCs(shiftInternal,shiftExternal,shiftCCs)

*U<->Ubar
id CCs(Ubar(?arg1),CCnull,sDUM1?!{CCnull})  = CCs(Utmp(?arg1),sDUM1+`shiftCCs',CCnull);
id CCs(U(?arg1),sDUM1?!{CCnull},CCnull)  = CCs(Ubar(?arg1),CCnull,sDUM1+`shiftCCs');
id CCs(Utmp(?arg1),sDUM1?,CCnull) = CCs(U(?arg1),sDUM1,CCnull);

*V<->Vbar
id CCs(Vbar(?arg1),CCnull,sDUM1?!{CCnull})  = CCs(Vtmp(?arg1),sDUM1+`shiftCCs',CCnull);
id CCs(V(?arg1),sDUM1?!{CCnull},CCnull)  = CCs(Vbar(?arg1),CCnull,sDUM1+`shiftCCs');
id CCs(Vtmp(?arg1),sDUM1?,CCnull) = CCs(V(?arg1),sDUM1,CCnull);

*Eps<->EpsC
id Eps(?arg1) = Epstmp(?arg1);
id EpsCC(?arg1) = Eps(?arg1);
id Epstmp(?arg1) = EpsCC(?arg1);

*Reverse G-chain
id CCs(nDUM1?!{U,Ubar,V,Vbar}(?args),sDUM1?,sDUM2?) = CCs(nDUM1(?args),sDUM2+`shiftCCs',sDUM1+`shiftCCs');


* Explicit imaginary factors
  id i_ = -i_;

*** Replace indices to avoid clashes
* internal (positive) indices
  Multiply replace_(
    #do i=1,`shiftInternal'
      mu`i',mu{`i'+`shiftInternal'},
      muT`i',muT{`i'+`shiftInternal'},
      vi`i',vi{`i'+`shiftInternal'},
    #enddo
    iDUM1,iDUM1
  );
* external (negative) indices
  Multiply replace_(
    #do i=1,`shiftExternal'
      mum`i',mum{`i'+`shiftExternal'},
      muTm`i',muTm{`i'+`shiftExternal'},
    #enddo
    iDUM1,iDUM1
  );
#endprocedure
