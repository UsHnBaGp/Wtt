#procedure feynmanRules(xiGluon)
************************
* incoming external legs
************************
* fermions
  id legin(cDUM1?{Qu,Qd},vDUM1?,sDUM1?,sDUM2?)=CCs(   U(vDUM1,0,indHel(sDUM1),sDUM1), sDUM1,CCnull);
  id legin(cDUM1?{Qubar,Qdbar},vDUM1?,sDUM1?,sDUM2?)=CCs(Vbar(vDUM1,0,indHel(sDUM1),sDUM1),CCnull, sDUM1);
  
  id legin(cDUM1?{Qt},vDUM1?,sDUM1?,sDUM2?)=CCs(   U(vDUM1,mt,indHel(sDUM1),sDUM1), sDUM1,CCnull);
  id legin(cDUM1?{Qtbar},vDUM1?,sDUM1?,sDUM2?)=CCs(Vbar(vDUM1,mt,indHel(sDUM1),sDUM1),CCnull, sDUM1);

* W boson
  id legin(cDUM1?{Wp,Wm},vDUM1?,sDUM1?,sDUM2?) = Eps(vDUM1,mw,indLor(sDUM1),indHel(sDUM1),sDUM1);
  
.sort
  
************************
* propagators
************************
* massless fermions: i*slashed(p)/p^2
  id prop(cDUM1?{Qu,Qd},vDUM1?,sDUM1?,sDUM2?,sDUM3?,sDUM4?)
    = i_ * Prop(vDUM1,0,indVert(sDUM3),indVert(sDUM4)) * CCs(G(vDUM1),sDUM1,sDUM2) ;
    
* massive fermions: i*(slashed(p)+m)/(p^2-m^2)  
  id prop(cDUM1?{Qt},vDUM1?,sDUM1?,sDUM2?,sDUM3?,sDUM4?)
    = i_ * Prop(vDUM1,m,indVert(sDUM3),indVert(sDUM4)) * CCs(G(vDUM1)+m*GI(),sDUM1,sDUM2) ;

* gluon: i/p^2*(- g_{mu,nu} + (1-xi)*p_mu*p_nu/p^2)
  id prop(gluon,vDUM1?,sDUM1?,sDUM2?,sDUM3?,sDUM4?)
    = i_*Prop(vDUM1,0,indVert(sDUM3),indVert(sDUM4)) * (
        - dtmp(indLor(sDUM1),indLor(sDUM2))
        + (1-`xiGluon')*momtmp(vDUM1,indLor(sDUM1))*momtmp(vDUM1,indLor(sDUM2))
            * Prop(vDUM1,0,indVert(sDUM3),indVert(sDUM4))
        );
* ghosts
  id prop(ghost,vDUM1?,sDUM1?,sDUM2?,sDUM3?,sDUM4?)
     = i_*Prop(vDUM1,0,indVert(sDUM3),indVert(sDUM4))*
       dtmp(indColA(sDUM1),indColA(sDUM2));
* TODO
*  id prop(ghostbar,vDUM1?,sDUM1?,sDUM2?,sDUM3?,sDUM4?)
*     = i_*Prop(vDUM1,0,indVert(sDUM3),indVert(sDUM4))*
*       dtmp(indColA(sDUM1),indColA(sDUM2));
    

.sort

************************
*vertices
************************
* gluon-fermion-fermion
  id vertex(gluon(vDUM3?,sDUM3?),cDUM1?{Qubar,Qdbar}(vDUM1?,sDUM1?),cDUM1?{Qu,Qd}(vDUM2?,sDUM2?)) 
    =   i_ * gs * CCs(G(indLor(sDUM3)),sDUM1,sDUM2) *
        CCc(T(indColA(sDUM3)),indColF(sDUM1),indColF(sDUM2));
.sort

************************
*misc
************************
id dtmp(iDUM1?,iDUM2?) = d_(iDUM1,iDUM2);
id momtmp(vDUM1?,iDUM1?) = vDUM1(iDUM1);

#endprocedure
