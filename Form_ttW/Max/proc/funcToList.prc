#procedure funcToList(expr,head,fname)
***************************************************
* Exports `head' in `expr' into `fname'
***************************************************
 pushhide;
 L term = `expr';    
 
*Replace all prefactors -> sDUM1  
  Bracket `head';
  .sort
  collect cDUM1;
  .sort
  id cDUM1(?args)=sDUM1;
  .sort
  
*Put all `head's into cDUM1
  Bracket sDUM1;
  .sort
  collect cDUM1;
  id sDUM1=1;
  .sort
  splitarg cDUM1;
  factarg cDUM1;
  transform , cDUM1 , dedup(1,last);
  transform , cDUM1 , mulargs(1,last);
  factarg cDUM1;
  argument cDUM1;
    id `head'(sDUM1?) = sDUM1 ;
  endargument;
  .sort

*Export cDUM1 as mma List
  CF List;
  id cDUM1(?args) = List(?args);
  .sort
  #call output(0,1,term,`fname')
  .sort
  pophide;
#endprocedure


