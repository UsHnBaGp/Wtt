id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;
id p5.p5=mw^2;

id p1.p2=s12/2;
id p1.p3=(s13-mt^2)/2;
id p1.p4=(s14-mt^2)/2;
id p1.p5=(s15-mw^2)/2;

id p2.p3=(s23-mt^2)/2;
id p2.p4=(s24-mt^2)/2;
id p2.p5=(s25-mw^2)/2;

id p3.p4=(s34-2*mt^2)/2;
id p3.p5=(s35-mw^2-mt^2)/2;

id p4.p5=(s45-mw^2-mt^2)/2;

.sort

id s15=2*mt^2+mw^2-s12-s13-s14;
id s25=2*mt^2+mw^2-s12-s23-s24;
id s35=3*mt^2+mw^2-s13-s23-s34;
id s45=3*mt^2+mw^2-s14-s24-s34;
.sort
id s34=-(s24+s23+s14+s13+s12)+4*mt^2+mw^2;
.sort

argument;
id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;
id p5.p5=mw^2;

id p1.p2=s12/2;
id p1.p3=(s13-mt^2)/2;
id p1.p4=(s14-mt^2)/2;
id p1.p5=(s15-mw^2)/2;

id p2.p3=(s23-mt^2)/2;
id p2.p4=(s24-mt^2)/2;
id p2.p5=(s25-mw^2)/2;

id p3.p4=(s34-2*mt^2)/2;
id p3.p5=(s35-mw^2-mt^2)/2;

id p4.p5=(s45-mw^2-mt^2)/2;
endargument;
.sort

argument;
id s15=2*mt^2+mw^2-s12-s13-s14;
id s25=2*mt^2+mw^2-s12-s23-s24;
id s35=3*mt^2+mw^2-s13-s23-s34;
id s45=3*mt^2+mw^2-s14-s24-s34;
endargument;
.sort
argument;
id s34=-(s24+s23+s14+s13+s12)+4*mt^2+mw^2;
endargument;

.sort