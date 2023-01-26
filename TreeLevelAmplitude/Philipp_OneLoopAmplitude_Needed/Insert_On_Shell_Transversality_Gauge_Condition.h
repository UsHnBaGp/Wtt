*#################################################################################
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*                                                                               %#
* Impose simplifications due to on-shell, transversality, and gauge condition   %#
*                                                                               %#
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#
*#################################################################################




*%%%%%%%%%%%%%%%%%%%%%%%%%%%%	
* Transversality condition  %
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%



id eps1.vecp1 = 0;
id eps2.vecp2 = 0;

id eps1C.vecp1 = 0;
id eps2C.vecp2 = 0;	

.sort



*%%%%%%%%%%%%%%%%%%%%%%
*     Gauge choice    %
*%%%%%%%%%%%%%%%%%%%%%%




id eps1.vecp2 = 0;
id eps2.vecp1 = 0;

id eps1C.vecp2 = 0;
id eps2C.vecp1 = 0;


.sort

*%%%%%%%%%%%%%%%%%%%%%%
* on-shell conditionn %
*%%%%%%%%%%%%%%%%%%%%%%




id vecp1.vecp1 = 0;
id vecp2.vecp2 = 0;
id vecp3.vecp3 = mt^2;
id vecp4.vecp4 = mt^2;
id vecp5.vecp5 = mh^2;



* Make use of slash slashvecp.slashvecp = vecp^2

id g_(HelpI?, vecp1)*g_(HelpI?, vecp1) = 0;
id g_(HelpI?, vecp2)*g_(HelpI?, vecp2) = 0;
id g_(HelpI?, vecp3)*g_(HelpI?, vecp3) = mt^2;
id g_(HelpI?, vecp4)*g_(HelpI?, vecp4) = mt^2;
id g_(HelpI?, vecp5)*g_(HelpI?, vecp5) = mh^2;

.sort

