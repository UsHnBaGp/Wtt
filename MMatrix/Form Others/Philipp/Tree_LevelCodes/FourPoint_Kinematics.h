id vecp1.vecp1 = 0;
id vecp2.vecp2 = 0;
id vecp3.vecp3 = mt^2;
id vecp4.vecp4 = mt^2;
id vecp1.vecp2 = s12/2;
id vecp3.vecp4 = (s12 - 2*mt^2)/2;
id vecp1.vecp3 = (s13 - mt^2)/2;
id vecp2.vecp4 = (s13 - mt^2)/2;

id vecp1.vecp4 = (s14 - mt^2)/2;
id vecp2.vecp3 = (s14 - mt^2)/2;


argument;

	id p1*p1 = 0;
	id p2*p2 = 0;
	id p3*p3 = mt^2;
	id p4*p4 = mt^2;
	id vecp1.vecp2 = s12/2;
	id p1*p2 = s12/2;
	id p1*p3 = (s13 - mt^2)/2;
	id p1*p4 = (s14 - mt^2)/2;
	
endargument;


*id  s14  = 2*mt^2 - s13 - s12;

*argument;
*	id  s14  = 2*mt^2 - s13 - s12;
*endargument;
