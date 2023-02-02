*** fermion lines ***

* replace start and end by vbar, u*
id helperfctStartQuarkLine*vrtx(antiquark('LabelAQ',helpervec?),?helperfct)=vbar(helpervec)*helperfctQuarkLine*vrtx(antiquark('LabelAQ',helpervec),?helperfct);
id vrtx(?helperfct1,quark('LabelQ',helpervec?),?helperfct2)*helperfctEndQuarkLine=vrtx(?helperfct1,quark('LabelQ',helpervec),?helperfct2)*u(helpervec);
id helperfctStartTopLine*vrtx(?helperfct1,top('LabelT',helpervec?),?helperfct2)=Ubar(helpervec)*helperfctTopLine*vrtx(?helperfct1,top('LabelT',helpervec),?helperfct2);
id vrtx(antitop('LabelAT',helpervec?),?helperfct)*helperfctEndTopLine=vrtx(antitop('LabelAT',helpervec),?helperfct)*V(helpervec);
.sort


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

*massless line: reconstruct step by step, first and last seperate(not prop)*
*move colorindices along line, insert vertices*

id helperfctQuarkLine*vrtx(antiquark('LabelAQ',helpervec1?),quark(helperidx2?,helpervec2?),wboson(?helpervec))=del(cidxext(-'LabelAQ'),cidx(helperidx2+1))*vrtx(wboson)*propquark(helpervec2)*helperfctQuarkLine;
id helperfctQuarkLine*vrtx(antiquark('LabelAQ',helpervec1?),quark(helperidx2?,helpervec2?),gluon(helperidx3?,helpervec3?))=imag*gs*gamma(1,lidx(helperidx3))*T(cidx(helperidx3),cidxext(-'LabelAQ'),cidx(helperidx2+1))*propquark(helpervec2)*helperfctQuarkLine;

repeat;
id helperfctQuarkLine*vrtx(antiquark(helperidx1?,helpervec1?),quark(helperidx2?,helpervec2?),wboson(?helpervec))=del(cidx(helperidx1),cidx(helperidx2+1))*vrtx(wboson)*propquark(helpervec2)*helperfctQuarkLine;
id helperfctQuarkLine*vrtx(antiquark(helperidx1?,helpervec1?),quark(helperidx2?,helpervec2?),gluon(helperidx3?,helpervec3?))=imag*gs*gamma(1,lidx(helperidx3))*T(cidx(helperidx3),cidx(helperidx1),cidx(helperidx2+1))*propquark(helpervec2)*helperfctQuarkLine;
endrepeat;

id helperfctQuarkLine*vrtx(antiquark(helperidx1?,helpervec1?),quark('LabelQ',helpervec2?),wboson(?helpervec))=del(cidx(helperidx1),cidxext(-'LabelQ'))*vrtx(wboson);
id helperfctQuarkLine*vrtx(antiquark(helperidx1?,helpervec1?),quark('LabelQ',helpervec2?),gluon(helperidx3?,helpervec3?))=imag*gs*gamma(1,lidx(helperidx3))*T(cidx(helperidx3),cidx(helperidx1),cidxext(-'LabelQ'));

.sort


*massive line: reconstruct step by step, last seperate(not prop), only one line at treelvel*

id helperfctTopLine*vrtx(antitop('LabelAT',helpervec1?),top('LabelT',helpervec2?),gluon(helperidx3?,helpervec3?))=imag*gs*gamma(2,lidx(helperidx3))*T(cidx(helperidx3),cidxext(-'LabelT'),cidxext(-'LabelAT'));

id helperfctTopLine*vrtx(antitop(helperidx1?,helpervec1?),top('LabelT',helpervec2?),gluon(helperidx3?,helpervec3?))=imag*gs*gamma(2,lidx(helperidx3))*T(cidx(helperidx3),cidxext(-'LabelT'),cidx(helperidx1+1))*proptop(helpervec1)*helperfctTopLine;

repeat;
id helperfctTopLine*vrtx(antitop(helperidx1?,helpervec1?),top(helperidx2?,helpervec2?),gluon(?helpervec))=imag*gs*gamma(2,lidx(helperidx3))*T(cidx(helperidx3),cidx(helperidx2),cidx(helperidx1+1))*proptop(helpervec1)*helperfctTopLine;
endrepeat;

id helperfctTopLine*vrtx(antitop('LabelAT',helpervec1?),top(?helperidx2),gluon(?helpervec))=imag*gs*gamma(2,lidx(helperidx3))*T(cidx(helperidx3),cidxext(-'LabelAT'),cidx(helperidx1));

.sort

*replace spaceholderfunctions*
id del(helperidx1?,helperidx2?)=d_(helperidx1,helperidx2);
.sort

****Move Ts to front*** 
repeat;
id helperfct?!{T}(?helperidx)*T(?helperidx2)=T(?helperidx2)*helperfct(?helperidx);
endrepeat;
.sort

***** Wvertex ****
id vrtx(wboson)=imag*gs*den(sqrt(2))*g_(1,muw)*g7_(1)*den(2);

*** rewrite gammas ***
id gamma(?helperidx1)=g_(?helperidx1);

*replace propagators (deltafct in quark propagator already included above)*

id prop(gluon(helperidx1?,helperidx2?,helpervec?))=-imag*del(cidx(helperidx1),cidx(helperidx2))*(del(lidx(helperidx1),lidx(helperidx2))*den(helpervec.helpervec)-helperfctvec(helpervec)*helperfct(lidx(helperidx1))*helperfctvec(helpervec)*helperfct(lidx(helperidx2))*den((helpervec.helpervec)^2));
id helperfctvec(helpervec?)*helperfct(helperidx?)=helpervec(helperidx);
id del(helperidx1?,helperidx2?)=d_(helperidx1,helperidx2);


.sort

id propquark(helpervec?)=den(helpervec.helpervec)*imag*g_(1,helpervec);
.sort


*polarization W*
id pol(wboson(?helperidx))=eps(muw);

.sort