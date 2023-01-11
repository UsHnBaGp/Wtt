#procedure propToInt
***************************************************
*translate D1*...*Dn*den(Dn+1)*...*den(m) to  INT()
***************************************************


*****************************************************
*STEP 1 : map to INT(Fam,T,ID,[],ind)
*****************************************************
id den(sDUM1?setD) = 1/sDUM1;
id <D1^sDUM1?>*...*<D`MAXPROP'^sDUM`MAXPROP'?> = INT(sDUM1,...,sDUM`MAXPROP');
id Sector(sDUM1?,?args) * INT(?ind) = INT(sDUM1,[],?ind);

*****************************************************
*STEP 2 : map to INT(Fam,T,ID,R,S[],ind)
*****************************************************
id INT(sDUM1?,[],?ind) = INT(sDUM1,redT(?ind),redID(reverse_(?ind)),redR(?ind),redS(?ind),[],?ind);
argument INT;
    chainout redT;
    chainout redID;
    chainout redR;
    chainout redS;
    id redT(sDUM1?neg_) = redT(0);
    id redT(sDUM1?pos_) = redT(1);
    
    id redID(sDUM1?neg_) = redID(0);
    id redID(sDUM1?pos_) = redID(1);
    
    id redR(sDUM1?neg_) = redR(0);
    
    id redS(sDUM1?pos_) = redS(0);
    id redS(sDUM1?neg_) = redS(-sDUM1);
    
    chainin redT;
    chainin redID;
    chainin redR;
    chainin redS;
    
    transform redT,redR, redS, addargs(1,last);
    transform redID , encode(1,last):base=2;
    id nDUM1?{redT,redID,redR,redS}(sDUM1?int_) = sDUM1;

endargument;
#endprocedure
