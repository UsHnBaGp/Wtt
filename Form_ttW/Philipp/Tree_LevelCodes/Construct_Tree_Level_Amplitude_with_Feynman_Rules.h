*functions defined in the QGRAF file
functions ExtState, Propagator, gluon, top, antitop, higgs, quark, antiquark;
autodeclare functions Vertex;


****************************************************
********** User input: Qgraf file  *****************
****************************************************


#include TreeLevelGGToTTH



*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Rewrite QGRAF expressions in suitable form for replacement with Feynman rules  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



*Rewrite vertices and propagators such that they have the same structure
id Vertex( gluon( aux1?, ?x  ), gluon( aux2?, ?y ), gluon( aux3?, ?z  ) )   =   VertexOfTypeGGG(aux1, aux2, aux3, ?x, ?y, ?z);
id Vertex( antitop(aux1?, ?x ), top( aux2? , ?y ), gluon( aux3?, ?z ) )     =   VertexOfTypeTTG(aux1, aux2, aux3, ?x, ?y, ?z);
id Vertex( antitop(aux1?, ?x ), top( aux2? , ?y ), higgs( aux3?, ?z ) )     =   VertexOfTypeTTH(aux1, aux2, aux3, ?x, ?y, ?z);
id Vertex( antiquark(aux1?, ?x ), quark( aux2? , ?y ), gluon( aux3?, ?z ) ) =   VertexOfTypeQQG(aux1, aux2, aux3, ?x, ?y, ?z);



*The -100 is just an auxiliary number to make the propagater of the same structure like vertices (number1, number2, number3, momenta). As all particles are taken to be incoming the number can not appear anywhere (incoming states are always odd negatives -> see QGRAF Documentation) In case I would like to reuse that code, -100 is a high number for an external state.

id Propagator(top(x?int_, y?int_ , ?aux))   =  TopPropagator(x,y,-100,?aux);
id Propagator(quark(x?int_, y?int_ , ?aux)) =  QuarkPropagator(x,y,-100,?aux);
id Propagator(gluon(x?int_, y?int_ , ?aux)) =  GluonPropagator(x,y,-100,?aux);



*Rewrite external state
id ExtState(antitop(?x)) =   ExternalAntiTop(?x);
id ExtState(top(?x))     =   ExternalTop(?x);
id ExtState(higgs(?x))   =   1;
id ExtState(gluon(?x))   =   ExternalGluon(?x);


*At 1 loop one must think of quark lines and ghosts
*At 2 loop one can have closed fermion lines of which I have to take care


*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* Rearrange terms and set Lorentz indices   %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



*We first reconstruct the top fermion line
#include Modules_Tree_Level_Computation/Reconstruction_Of_Top_AntiTop_Fermion_Line.h




*The insertion of the TTH vertex must be at this place because otherwise the routines get messed up
id VertexOfTypeTTH(?x) = -i_*1/2*gw/mw*mt;


*We prepare the replacement of the Feynman rules by first setting the Lorentz and color indices correctly
#include Modules_Tree_Level_Computation/Setting_Color_And_Lorentz_Indices.h



.store




*%%%%%%%%%%%%%%%%%%%%%%%
* Insert Feynman rules %
*%%%%%%%%%%%%%%%%%%%%%%%



*#include Modules_Tree_Level_Computation/Insert_Feynmanrules_Lorenzo.h
#include Modules_Tree_Level_Computation/Insert_Feynmanrules.h




*These things should be set as early as possible to avoid the plurification of terms.



*Transversality condition
id vecp1(nu1) = 0;
id vecp2(nu2) = 0;


*Gauge choice
id vecp1(nu2) = 0;
id vecp2(nu1) = 0;

.sort


*Choose Feynman gauge for gluon propagator
id Xi = 1;

.sort


*At tree level we can forget about Feynman's i*epsilon prescription

argument;
	id Feps = 0;
endargument;

.sort


*reorder terms such that color matrices T are in front.
repeat;
	id g_(1, mu?)*T(col?, ColFun1?, ColFun2?) = T(col, ColFun1, ColFun2)*g_(1,mu);
	id ExternalAntiTop(aux?)*T(col?, ColFun1?, ColFun2?) = T(col, ColFun1, ColFun2)*ExternalAntiTop(aux);
endrepeat;


.sort
