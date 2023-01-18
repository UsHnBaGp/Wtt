#procedure sumSpinHel

******************************************
*Constract spinors
*U(p_i)Ubar(p_i) = slashed(p_i) + m_i
*V(p_i)Vbar(p_i) = slashed(p_i) - m_i
******************************************
id CCs(U(vDUM1?,sDUM1?,?args1),sDUM2?,CCnull)*CCs(Ubar(vDUM1?,sDUM1?,?args2),CCnull,sDUM3?)
    = CCs(G(vDUM1) + GI()* sDUM1,sDUM2,sDUM3);

id CCs(V(vDUM1?,sDUM1?,?args1),sDUM2?,CCnull)*CCs(Vbar(vDUM1?,sDUM1?,?args2),CCnull,sDUM3?)
    = CCs(G(vDUM1) - GI()*sDUM1,sDUM2,sDUM3);

******************************************
*Contract Helicities
*TODO
******************************************

id Eps(vDUM1?,sDUM1?,iDUM1?,?args1)*EpsCC(vDUM1?,sDUM1?,iDUM2?,?args2)
    = -d_(iDUM1,iDUM2);
    
*id Eps(vDUM1?,sDUM1?,iDUM1?,?args1)*EpsCC(vDUM1?,sDUM1?,iDUM2?,?args2)
*    = -d_(iDUM1,iDUM2)
*      + (p1(iDUM1)*vDUM1(iDUM2)+p1(iDUM2)*vDUM1(iDUM1))*den(p1.p2+p1.p3+p1.p4)*(-1) ;

*id Eps(vDUM1?,sDUM1?,iDUM1?,?args1)*EpsCC(vDUM1?,sDUM1?,iDUM2?,?args2)
*    = -d_(iDUM1,iDUM2)
*      + vDUM1(iDUM1)*vDUM1(iDUM2)/mwsq;

#endprocedure
