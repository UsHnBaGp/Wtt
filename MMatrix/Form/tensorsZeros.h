*** Define Tensors ***

global T1=eps(p1)*vbaru(p3)*VbarU;
global T2=eps(p1)*vbaru(p4)*VbarU;
global T3=eps(p2)*vbaru(p3)*VbarU;
global T4=eps(p2)*vbaru(p4)*VbarU;
global T5=eps(p3)*vbaru(p3)*VbarU;
global T6=eps(p3)*vbaru(p4)*VbarU;

global T7=eps(p1)*vbaru(p3)*VbarU(p1);
global T8=eps(p1)*vbaru(p4)*VbarU(p1);
global T9=eps(p2)*vbaru(p3)*VbarU(p1);
global T10=eps(p2)*vbaru(p4)*VbarU(p1);
global T11=eps(p3)*vbaru(p3)*VbarU(p1);
global T12=eps(p3)*vbaru(p4)*VbarU(p1);
global T13=eps(p1)*vbaru(p3)*VbarU(p2);
global T14=eps(p1)*vbaru(p4)*VbarU(p2);
global T15=eps(p2)*vbaru(p3)*VbarU(p2);
global T16=eps(p2)*vbaru(p4)*VbarU(p2);
global T17=eps(p3)*vbaru(p3)*VbarU(p2);
global T18=eps(p3)*vbaru(p4)*VbarU(p2);

global T19=eps(p1)*vbaru(mu1)*VbarU(p2,mu1);
global T20=eps(p2)*vbaru(mu2)*VbarU(p2,mu2);
global T21=eps(p3)*vbaru(mu3)*VbarU(p2,mu3);
global T22=eps(p1)*vbaru(mu4)*VbarU(p1,mu4);
global T23=eps(p2)*vbaru(mu5)*VbarU(p1,mu5);
global T24=eps(p3)*vbaru(mu6)*VbarU(p1,mu6);