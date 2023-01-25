S I;
S qq7,qq1,qq8,qq2,qq11,qq10,qq9,qq6,qq5,qq4,qq3,qq14,qq12,qq15,qq13,qq17,qq16,qq19,qq18,qq20,qq21;
S D,s,t;
set dens: qq7,qq1,qq8,qq2,qq11,qq10,qq9,qq6,qq5,qq4,qq3,qq14,qq12,qq15,qq13,qq17,qq16,qq19,qq18,qq20,qq21;


#procedure apartreduce(expr)
  .sort
  CF fac;
  S x;
  Skip;
  NSkip `expr';
  AntiBracket dens;
  .sort
  Skip;
  NSkip `expr';

  Collect fac;
  factarg fac;
  id fac(x?number_,?a) = x*fac(?a);
*  repeat id fac(?a,x?,x?,?b) = fac(?a,x*x,?b);
  .sort
  Skip;
  NSkip `expr';
  $repeat = 0;
  #do i=1,1
   id once fac(x?,?a) = x*fac(?a);
   id fac = 1;
    #do k=1,1
     #include apartpattern.inc
     #write "%$",$repeat
     #include apartrules.inc

     if ($repeat == 1);
      redefine k "0";
      $repeat = 0;
     endif;
     .sort
     Skip;
     NSkip `expr';
    #enddo
  if (match(fac(?a)));
   redefine i "0";
  endif;
  .sort
  Skip;
  NSkip `expr';
  #enddo

#endprocedure
