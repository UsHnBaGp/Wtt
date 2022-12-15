#procedure performDiracTraces

#if `verbosity' >= 9
  On Statistics;
#endif

#do tr=1,5
    #if `verbosity' >= 9
        #message Working on trace `tr'
    #endif
    
    Keep Brackets;
    id,once Tr(sDUM1?) = CCs(sDUM1);
    argument CCs;
        id G(iDUM1?) = g_(`tr',iDUM1);
        id G(vDUM1?) = g_(`tr',vDUM1);
        id GI() = gi_(`tr');
    endargument;
    id CCs(sDUM1?) = sDUM1;
    tracen,`tr';
    Bracket Tr;
    .sort : Trace `tr';
#enddo
  
#if `verbosity' >= 9
  Off Statistics;
#endif

#endprocedure
