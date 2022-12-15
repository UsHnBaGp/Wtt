#procedure wrapSpinChain(indstart,head)
*******************************************************
*puts products of ``Ubar()*G(...)*U()''
*into head() containers
*******************************************************

#do i=1, `TENSORN'
    #define ind "`indstart'"   
    
    G `head'`i' = mLEFT * `head'`i';
    Chainout G;
    
    
    #do j = 1 , 1 
        id mLEFT * nDUM1?{Vbar,Ubar}(?args) = CCs(nDUM1(?args),CCnull,`ind')*mLEFT;
        #do k = 1 , 1
            if ( match( mLEFT*G(?args) ) || match( mLEFT*GI() ) ) ;
                id mLEFT*G(?args) = CCs(G(?args),`ind',{`ind'-1}) * mLEFT ;
                id mLEFT*GI() = CCs(GI(),`ind',{`ind'-1}) * mLEFT ;
                redefine ind "{`ind' - 1}";
                redefine k "0";
            endif ;
            .sort
        #enddo
        id mLEFT * nDUM1?{V,U}(?args) = CCs(nDUM1(?args),`ind',CCnull) * mLEFT;
        .sort
        
        if ( match( mLEFT*nDUM1?{Vbar,Ubar}(?args) ) ) ;
            redefine ind "{`ind' - 1}";
            redefine j "0";
        endif ;
        .sort
    #enddo
    id mLEFT = 1 ;
    .sort
#enddo
#endprocedure
