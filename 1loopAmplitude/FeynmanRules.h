************
*** remove unnecessary prop and pol *****
*****************

*remove fermionprop*
id prop(quark(?helperidx))=1;
id prop(antiquark(?helperidx))=1;
id prop(top(?helperidx))=1;
id prop(antitop(?helperidx))=1;
.sort

*remove polarizations*

id pol(quark(?helperidx))=1;
id pol(antiquark(?helperidx))=1;
id pol(top(?helperidx))=1;
id pol(antitop(?helperidx))=1;
.sort

**********************
*** fermion lines ***
*********************

* replace start and end by vbar, u*
id helperfctStartQuarkLine*vrtx(antiquark('LabelAQ',helpervec?),?helperfct)=vbar(helpervec)*helperfctQuarkLine*vrtx(antiquark('LabelAQ',helpervec),?helperfct);
id vrtx(?helperfct1,quark('LabelQ',helpervec?),?helperfct2)*helperfctEndQuarkLine=vrtx(?helperfct1,quark('LabelQ',helpervec),?helperfct2)*u(helpervec);
id helperfctStartTopLine*vrtx(antitop('LabelAT',helpervec?),?helperfct)=Vbar(helpervec)*helperfctTopLine*vrtx(antitop('LabelAT',helpervec),?helperfct);
id vrtx(?helperfct1,top('LabelT',helpervec?),?helperfct2)*helperfctEndTopLine=vrtx(?helperfct1,top('LabelT',helpervec),?helperfct2)*U(helpervec);
.sort


*****************************
***** massless external line *******
***************************
*reconstruct step by step, first and last seperate(not prop)*
*move colorindices along line, insert vertices*

id helperfctQuarkLine*vrtx(antiquark('LabelAQ',helpervec1?),quark(helperidx2?,helpervec2?),wboson(?helpervec))=del(cidxext(-'LabelAQ'),cidx(helperidx2+1))*vrtx(wboson)*propquark(helpervec2)*helperfctQuarkLine;
id helperfctQuarkLine*vrtx(antiquark('LabelAQ',helpervec1?),quark(helperidx2?,helpervec2?),gluon(helperidx3?,helpervec3?))=-i_*gs*gamma(1,lidx(helperidx3))*T(cidx(helperidx3),cidx(helperidx2+1),cidxext(-'LabelAQ'))*propquark(helpervec2)*helperfctQuarkLine;

repeat;
id helperfctQuarkLine*vrtx(antiquark(helperidx1?,helpervec1?),quark(helperidx2?,helpervec2?),wboson(?helpervec))=del(cidx(helperidx1),cidx(helperidx2+1))*vrtx(wboson)*propquark(helpervec2)*helperfctQuarkLine;
id helperfctQuarkLine*vrtx(antiquark(helperidx1?,helpervec1?),quark(helperidx2?,helpervec2?),gluon(helperidx3?,helpervec3?))=-i_*gs*gamma(1,lidx(helperidx3))*T(cidx(helperidx3),cidx(helperidx2+1),cidx(helperidx1))*propquark(helpervec2)*helperfctQuarkLine;
endrepeat;

id helperfctQuarkLine*vrtx(antiquark(helperidx1?,helpervec1?),quark('LabelQ',helpervec2?),wboson(?helpervec))=del(cidx(helperidx1),cidxext(-'LabelQ'))*vrtx(wboson);
id helperfctQuarkLine*vrtx(antiquark(helperidx1?,helpervec1?),quark('LabelQ',helpervec2?),gluon(helperidx3?,helpervec3?))=-i_*gs*gamma(1,lidx(helperidx3))*T(cidx(helperidx3),cidxext(-'LabelQ'),cidx(helperidx1));

.sort

********************
*** massless loop ***
*********************

id helperfctStartLoop=helperfctLoop;

repeat;

id helperfctLoop*vrtx(antiquark(helperidx1?,helpervec1?),quark(helperidx2?,helpervec2?),gluon(helperidx3?,helpervec3?))=-i_*gs*gamma(3,lidx(helperidx3))*T(cidx(helperidx3),cidx(helperidx1),cidx(helperidx2+1))*propquarkloop(helpervec2)*helperfctLoop;
endrepeat;

id helperfctLoop*helperfctEndLoop=1;


***************
*** massive line: 
*********************

*reconstruct step by step, last seperate(not prop), only one line at treelevel*

id helperfctTopLine*vrtx(antitop('LabelAT',helpervec1?),top('LabelT',helpervec2?),gluon(helperidx3?,helpervec3?))=-i_*gs*gamma(2,lidx(helperidx3))*T(cidx(helperidx3),cidxext(-'LabelT'),cidxext(-'LabelAT'));

id helperfctTopLine*vrtx(antitop('LabelAT',helpervec1?),top(helperidx2?,helpervec2?),gluon(helperidx3?,helpervec3?))=-i_*gs*gamma(2,lidx(helperidx3))*T(cidx(helperidx3),cidxext(-'LabelAT'),cidx(helperidx2+1))*proptop(helpervec2)*helperfctTopLine;

repeat;
id helperfctTopLine*vrtx(antitop(helperidx1?,helpervec1?),top(helperidx2?,helpervec2?),gluon(helperidx3?,helpervec3?))=-i_*gs*gamma(2,lidx(helperidx3))*T(cidx(helperidx3),cidx(helperidx2+1),cidx(helperidx1))*proptop(helpervec2)*helperfctTopLine;
endrepeat;

id helperfctTopLine*vrtx(antitop(helperidx1?,helpervec1?),top('LabelT',helpervec2?),gluon(helperidx3?,helpervec3?))=-i_*gs*gamma(2,lidx(helperidx3))*T(cidx(helperidx3),cidxext(-'LabelT'),cidx(helperidx1));

.sort

************************
**** Move Ts to front *** 
**********************
*repeat;
*id helperfct?!{T}(?helperidx)*T(?helperidx2)=T(?helperidx2)*helperfct(?helperidx);
*endrepeat;
.sort

**********************+
*** Replace vertices and propagators*******+
***************************

***** Wvertex ****
id vrtx(wboson)=-i_*gW*g_(1,muw);


*** 3gluon vertex ***
id vrtx (gluon (helperidx1?, helpervec1?),gluon (helperidx2?, helpervec2?),gluon (helperidx3?, helpervec3?)) = gs*f (cidx (helperidx1), cidx (helperidx2), cidx (helperidx3))*((-helperfct (helpervec1)*helperfct (lidx (helperidx3)) +helperfct (helpervec2)*helperfct (lidx ((helperidx3)))*del (lidx (helperidx1), lidx (helperidx2)) + (-helperfct (helpervec2)*helperfct (lidx (helperidx1)) +helperfct (helpervec3)*helperfct (lidx (helperidx1)))*del (lidx (helperidx2),lidx (helperidx3)) + (-helperfct (helpervec3)*helperfctlidx (helperidx2) +helperfct (helpervec1)*helperfct (lidx (helperidx2)))*del (lidx (helperidx3), lidx (helperidx1))));

*** ghost gluon vertex ***
id vrtx((antighost (helperidx1?, helpervec1?),ghost (helperidx2?, helpervec2?),gluon (helperidx3?, helpervec3?))=gs*f(cidx(helperidx),cidx(helperidx,cidx(helperidx)))



*** propagators (deltafct in quark propagator already included above) ***

id prop(gluon(helperidx1?,helperidx2?,helpervec?))=-i_*del(cidx(helperidx1),cidx(helperidx2))*(del(lidx(helperidx1),lidx(helperidx2))*den(helpervec.helpervec)-(1-xi)*helperfctvec(helpervec)*helperfct(lidx(helperidx1))*helperfctvec(helpervec)*helperfct(lidx(helperidx2))*den((helpervec.helpervec)^2));
id prop(ghost(helperidx1?,helperidx2?,helpervec?))=i_*del(cidx(helperidx1),cidx(helperidx2))*den(helpervec.helpervec);


.sort

id propquark(helpervec?)=den(helpervec.helpervec)*i_*g_(1,helpervec);
id proptop(helpervec?)=den(helpervec.helpervec-mt^2)*i_*(g_(2,helpervec)+mt);
id propquarkloop(helpervec?)=den(helpervec.helpervec)*i_*g_(3,helpervec);
.sort


*polarization W*
id pol(wboson(?helperidx))=epsmuw;
.sort


*replace spaceholderfunctions*
id helperfctvec(helpervec?)*helperfct(helperidx?)=helpervec(helperidx);
id del(helperidx1?,helperidx2?)=d_(helperidx1,helperidx2);
id gamma(2,helperidx?)=g_(2,helperidx);
id gamma(1,helperidx?)=g_(1,helperidx);
id gamma(3,helperidx?)=g_(3,helperidx);
.sort

**** Trace in Loop ***
tracen 3;

******************
*Chose gauge
******************

id xi=1;
.sort