#-
Off Statistics;
#include symbols.h
#include tensordef.h

************************************
************************************
**compute M_ij = T_i^dagger  *  T_j**
************************************
************************************

#if `debug'==1
    #define iMIN  "1"
    #define iMAX "1"
    #define jMIN  "1"
    #define jMAX  "1"
#else
    #define iMIN  "1"
    #define iMAX "`TENSORN'"
    #define jMIN  "1"
    #define jMAX  "`TENSORN'"
#endif

#do i = `iMIN' , `iMAX'
    unhide T`i';
    #call output(0,1,T`i',tensors/T`i')
    .sort
    hide T`i';
    .sort
    
    #do j = `jMIN' , `jMAX'

    #if `debug'==1
            #message
            unhide Tcc`i' , T`j';
            .sort
            print Tcc`i';
            print T`j';
            .sort
            hide Tcc`i' , T`j';
            .sort
    #endif
****************************
*     compute T_i^dagger * T_j
****************************
        L m`i'`j' = Tcc`i' * T`j';
        .sort
        #if `debug'==1
            #message original T_i^dagger  *  T_j
            print m`i'`j';
            .sort
        #endif
        
******************************************
*      sum over spins and helicites
******************************************
        #call sumSpinHel
        .sort
        #if `debug'==1
            #message sum over spin and helicities
            print m`i'`j';
            .sort
        #endif
        
******************************************
*      Collect into CCs
******************************************
        #call collectCC(CCs,Tr,1,0)
        .sort
        #if `debug'==1
            #message collect CCs
            print m`i'`j';
            .sort
        #endif
        
******************************************
*      compute traces
******************************************
        #call performDiracTraces
        .sort
        #if `debug'==1
            #message traces
            print m`i'`j';
            .sort
        #endif
        
******************************************
*      final replacements
******************************************
*        #include ../mma/fcode/kin_num.fcode
*        .sort
        
        id p5 = -p1-p2-p3-p4;
        id p1.p1 = 0;
        id p2.p2 = 0;
        id p3.p3 = mtsq;
        id p4.p4 = mtsq;
        id mt^sDUM1? = mtsq^(sDUM1/2);
        .sort
                
        #if `verbosity' >= 5
            print m`i'`j';
            .sort
        #endif

        #call output(0,1,m`i'`j',mm/m_`i'_`j')
        .sort
                
    #enddo
#enddo


.end
