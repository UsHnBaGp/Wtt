#procedure INTtoR(expr)
*****************************
* Prints INTs
*****************************
 pushhide;
 
 L intsum = `expr';
 id INT(?args1,[],?args2) = INT(?args1,?args2);
 .sort
 
*remove all prefactors
  Bracket INT;
  .sort
  collect cDUM1;
  .sort
  id cDUM1(?args) = 1;
  id cDUM1 = 1;
  .sort
  
  Format Mathematica;
  Bracket INT;
  Print[];
  .sort
  
  
  Format normal;
  pophide;
#endprocedure
