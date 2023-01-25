#-

off statistics;

autodeclare index mu;

symbols [.];
functions [];
autodeclare symbols x, y;
symbols mh, mt;
functions f,g;
autodeclare cfunctions p;
autodeclare symbols s;

.global

#message Mandelstam replacements for fivepoint kinematics with 2 incoming and 3 outgoing momenta

* Check trivial identities first: 


global ReplacementS15PartA = (p1 + p2)^2 + (p1 - p3)^2 + (p1 - p4)^2 + (p1 - p5)^2;  
global ReplacementS25PartA = (p1 + p2)^2 + (p2 - p3)^2 + (p2 - p4)^2 + (p2 - p5)^2;  
global ReplacementS35PartA = (p2 - p3)^2 + (p1 - p3)^2 + (p3 + p4)^2 + (p3 + p5)^2;  
global ReplacementS45PartA = (p2 - p4)^2 + (p4 + p3)^2 + (p1 - p4)^2 + (p4 + p5)^2;  



id p1*p1 = 0;
id p2*p2 = 0;
id p3*p3 = mt^2;
id p4*p4 = mt^2;
id p5*p5 = mh^2;

*momentum conservation all incoming
id p5 =  p1 + p2 - p3 - p4;


id p1*p2 = -(s12 - p1^2 - p2^2)/2;
id p1*p3 = -(s13 - p1^2 - p3^2)/2;
id p1*p4 = -(s14 - p1^2 - p4^2)/2;

id p2*p3 = -(s23 - p2^2 - p3^2)/2;
id p2*p4 = -(s24 - p2^2 - p4^2)/2;

id p3*p4 = -(s34 - p3^2 - p4^2)/2;

id p1*p1 = 0;
id p2*p2 = 0;
id p3*p3 = mt^2;
id p4*p4 = mt^2;
id p5*p5 = mh^2;

.store


global ReplacementS15PartB = s12 + s13 + s14 + s15;  
global ReplacementS25PartB = s12 + s23 + s24 + s25;  
global ReplacementS35PartB = s23 + s13 + s34 + s35;  
global ReplacementS45PartB = s24 + s34 + s14 + s45; 


.store

#message By construction the left-hand side is equal to 0
 
local ReplacementS15 =  ReplacementS15PartA - ReplacementS15PartB;
local ReplacementS25 =  ReplacementS25PartA - ReplacementS25PartB;
local ReplacementS35 =  ReplacementS35PartA - ReplacementS35PartB;
local ReplacementS45 =  ReplacementS45PartA - ReplacementS45PartB;


print;
.store
.sort



* There is one non-trivial identity, which we will find now:

global NonTrivialReplacementPartA = (p1 + p2)^2 + (p1 - p3)^2 + (p1 - p4)^2 + (p1 - p5)^2 + (p2 - p3)^2 + (p2 - p4)^2 + (p2 - p5)^2 + (p3 + p4)^2 + (p3 + p5)^2 + (p4 + p5)^2;



*momentum conservation all incoming
id p5 =  p1 + p2 - p3 - p4;


id p1*p2 =  (s12 - p1^2 - p2^2)/2;
id p1*p3 = -(s13 - p1^2 - p3^2)/2;
id p1*p4 = -(s14 - p1^2 - p4^2)/2;

id p2*p3 = -(s23 - p2^2 - p3^2)/2;
id p2*p4 = -(s24 - p2^2 - p4^2)/2;

id p3*p4 =  (s34 - p3^2 - p4^2)/2;

id p1*p1 = 0;
id p2*p2 = 0;
id p3*p3 = mt^2;
id p4*p4 = mt^2;
id p5*p5 = mh^2;


.sort
.store


global NonTrivialReplacementPartB = s12 + s13 + s14 + s15 + s23 + s24 + s25 + s34 + s35 + s45;


*These relations were found with the previous block
id s15 = 2*mt^2 + mh^2 - s12 - s13 - s14;
id s25 = 2*mt^2 + mh^2 - s12 - s23 - s24;
id s35 = 3*mt^2 + mh^2 - s13 - s23 - s34;
id s45 = 3*mt^2 + mh^2 - s14 - s24 - s34;


.sort


.store

#message By construction the left-hand side is equal to 0
 
local NonTrivialReplacement = NonTrivialReplacementPartA  -  NonTrivialReplacementPartB;


print;

.end
