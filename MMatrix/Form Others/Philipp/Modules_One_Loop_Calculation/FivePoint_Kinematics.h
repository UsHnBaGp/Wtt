*Onshell conditions:

id vecp1.vecp1 = 0;
id vecp2.vecp2 = 0;
id vecp3.vecp3 = mt^2;
id vecp4.vecp4 = mt^2;
id vecp5.vecp5 = mh^2;


*Replacement with Mandelstam variables (not complete, be very careful and check again !)

id vecp1.vecp2 =  s12/2;
id vecp1.vecp3 = (s13 - mt^2)/2;
id vecp1.vecp4 = (s14 - mt^2)/2;
id vecp1.vecp5 = (s15 - mh^2)/2;


id vecp2.vecp3 = (s23 - mt^2)/2;
id vecp2.vecp4 = (s24 - mt^2)/2;
id vecp2.vecp5 = (s25 - mh^2)/2;


id vecp3.vecp4 = (s34 - 2*mt^2)/2;
id vecp3.vecp5 = (s35 - mt^2 - mh^2)/2;


id vecp4.vecp5 = (s45 - mt^2 - mh^2)/2;


*perform the replacements in the arguments of denom(...)
argument;

	id p1*p1 = 0;
	id p2*p2 = 0;
	id p3*p3 = mt^2;
	id p4*p4 = mt^2;
	id p5*p5 = mh^2;
	
	id p1*p2 = s12/2;
	id p1*p3 = (s13 - mt^2)/2;
	id p1*p4 = (s14 - mt^2)/2;
	id p1*p5 = (s15 - mh^2)/2;
	
	id p2*p3 = (s23 - mt^2)/2;
	id p2*p4 = (s24 - mt^2)/2;
	id p2*p5 = (s25 - mh^2)/2;
	
	id p3*p4 = (s34 - 2*mt^2)/2;
	id p3*p5 = (s35 - mt^2 - mh^2)/2;
	
	
	id p4*p5 = (s45 - mt^2 - mh^2)/2;
	

	id vecp1.vecp2 =  s12/2;
	id vecp1.vecp3 = (s13 - mt^2)/2;
	id vecp1.vecp4 = (s14 - mt^2)/2;
	id vecp1.vecp5 = (s15 - mh^2)/2;


	id vecp2.vecp3 = (s23 - mt^2)/2;
	id vecp2.vecp4 = (s24 - mt^2)/2;
	id vecp2.vecp5 = (s25 - mh^2)/2;


	id vecp3.vecp4 = (s34 - 2*mt^2)/2;
	id vecp3.vecp5 = (s35 - mt^2 - mh^2)/2;


	id vecp4.vecp5 = (s45 - mt^2 - mh^2)/2;
	
endargument;

.sort


*independent variables s12, s13, s14, s35, s45, the choice is not unique and might not be the best -> think about it.


id s15 = 2*mt^2 + mh^2 - s12 - s13 - s14;
id s25 = 2*mt^2 + mh^2 - s12 - s23 - s24;
id s35 = 3*mt^2 + mh^2 - s13 - s23 - s34;
id s45 = 3*mt^2 + mh^2 - s14 - s24 - s34;


*For derivation see Derivation_last_kinematic_Replacement.frm
id s34 = -s24 - s23 - s14 - s13 - s12 + 4*mt^2 + mh^2;


argument;
	id s15 = 2*mt^2 + mh^2 - s12 - s13 - s14;
	id s25 = 2*mt^2 + mh^2 - s12 - s23 - s24;
	id s35 = 3*mt^2 + mh^2 - s13 - s23 - s34;
	id s45 = 3*mt^2 + mh^2 - s14 - s24 - s34;


	id s34 = -s24 - s23 - s14 - s13 - s12 + 4*mt^2 + mh^2;
endargument;

.sort

*id s15 = 2*mt^2 + mh^2 - s12 - s13 - s14;
*id s23 = s45 - s12 - s13 + mt^2;
*id s24 = s35 - s12 - s14 + mt^2;
*id s25 = 0      + mh^2 + s12 + s13 + s14 - s45 - s35;
*id s34 = 2*mt^2 + mh^2 - s45 - s35 + s12;

*argument denom;

*	id s15 = 2*mt^2 + mh^2 - s12 - s13 - s14;
*	id s23 = s45 - s12 - s13 + mt^2;
*	id s24 = s35 - s12 - s14 + mt^2;
*	id s25 = 0      + mh^2 + s12 + s13 + s14 - s45 - s35;
*	id s34 = 2*mt^2 + mh^2 - s45 - s35 + s12;
	
*endargument;

.sort

