#procedure output(doout,domma,res,basename,?bracket)
* Export an expression `res' into a file with name `basename'.END
* arguments:
* - doout:          If 1, produce a .out file in FORM format.
* - domma:          If 1, produce a .m file in Mathematica format.
* - res:            Expression
* - basename:       Filename 
* - bracket:        List of objects that are bracketed before output.

#if `doout' == 1
  Bracket `?bracket';
  Format normal;
  .sort:Before form output;
  #create <out/`basename'.out>
  #write <out/`basename'.out> "%E", `res'
  #close <out/`basename'.out>
#endif
  
#if `domma' == 1
  id i_ = I;
  id d_(iDUM1?,iDUM2?) = dd(iDUM1,iDUM2);
  id vDUM1?.vDUM2? = sp(vDUM1,vDUM2);
  argument;
    id vDUM1?.vDUM2? = sp(vDUM1,vDUM2);
  endargument;
  id INT(?args1,[],?args2) = INT(?args1,?args2);
  Format Mathematica;
  Bracket `?bracket';
  .sort:Before mathematica output;
  #create <out/`basename'.m>
  #write <out/`basename'.m> "(%E)", `res'
  #close <out/`basename'.m>
  Format normal;
#endif

#endprocedure
