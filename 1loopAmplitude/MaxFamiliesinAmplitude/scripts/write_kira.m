IntegralFamilyString[fams_List,nloop_Integer,topsec_List,magicrel_] :=  Module[

    {tmpstring="",loopmom,
    ii,props,
    jj,mom,mass
    }
    ,
    (*If[Length[topL]===Length[fams],Nothing[],Print["err "];Return[];];*)
    loopmom = Table[ToExpression["k"<>ToString[i]],{i,1,nloop}];
    
    tmpstring = "integralfamilies:\n";
    For[ii=1,ii<=Length[fams],ii++,
        tmpstring = tmpstring <> "  - name: \"" <> fams[[ii,1]] <> "\"\n";
        tmpstring = tmpstring <> "    loop_momenta: [" <> StringRiffle[loopmom, ","] <> "]\n";
        If[ topsec === {},Nothing[] , 
        tmpstring = tmpstring <> "    top_level_sectors: [" <> StringRiffle[topsec[[ii]],","] <> "]\n";
        ];
        If[ magicrel === True,
        tmpstring = tmpstring <> "    magic_relations: true\n";
        ,
        Nothing[]
        ];
        tmpstring = tmpstring <> "    propagators:\n";
        
        props= fams[[ii,2]];
        For[jj=1,jj<=Length[props],jj++,
            {mom,mass}=props[[jj]];
            If[ mass === 0 ,
                tmpstring=tmpstring<>"      - [\""<>ToString[mom]<>"\", 0]\n";
                ,
                tmpstring=tmpstring<>"      - [\""<>ToString[mom]<>"\", \""<>ToString[mass]<>"\"]\n";
            ];
        ];
    ];
    Return[tmpstring]
];
     
JobfileString[topos_List, ordering_Integer , mode_String , prefbase_String ] := Module[

   {tmpstring,ii,jj}
   ,
   
   If[(mode==="master")||(mode==="reduce")||(mode==="reduce_ff"),Nothing[],Print["-->wrong mode"];Return[""];];
   
   tmpstring = "";
   tmpstring = tmpstring <> "jobs:\n";
   tmpstring = tmpstring <> " - reduce_sectors:\n";
   tmpstring = tmpstring <> "    conditional : false\n";
   tmpstring = tmpstring <> "    reduce:\n";

   For[ii=1,ii<=Length[topos],ii++,
      topS=topos[[ii,1]];
      tmpstring = tmpstring <> "     - {topologies: ["<>topS<>"]";
      
      If[ topos[[ii,2]]==={}, Nothing[],
        secS=StringRiffle[Map[ToString[#]&,topos[[ii,2]]],","];
        tmpstring = tmpstring <> ", sectors: ["<>secS<> "]";
      ];
      
      If[ topos[[ii,3]]===Null, Nothing[],
        rS=ToString[topos[[ii,3]]];
        tmpstring = tmpstring <> ", r: "<>rS;
      ];
      
      If[ topos[[ii,4]]===Null, Nothing[],
        sS=ToString[topos[[ii,4]]];
        tmpstring = tmpstring <> ", s: "<>sS;
      ];
      
      If[ topos[[ii,5]]===Null, Nothing[],
        dS=ToString[topos[[ii,5]]];
        tmpstring = tmpstring <> ", d: "<>dS;
      ];
      tmpstring = tmpstring <>"}\n";
   ];

   tmpstring = tmpstring <> "    integral_ordering: "<>ToString[ordering]<>"\n";
   tmpstring = tmpstring <> "    select_integrals:\n";
   tmpstring = tmpstring <> "     select_mandatory_list:\n";
   tmpstring = tmpstring <> "      - [list]\n";
   
   If[ prefbase === "",
    Nothing[]
    ,
    tmpstring = tmpstring <> "    preferred_masters: \""<>prefbase<>"\"\n";
   ];
   
   tmpstring = tmpstring <> "    run_symmetries: true\n";
   
   If[ mode === "master",
    tmpstring = tmpstring <> "    run_initiate: masters\n";
    ,
    Nothing[]
   ];

   If[ mode === "reduce",
    tmpstring = tmpstring <> "    run_initiate: true\n";
    tmpstring = tmpstring <> "    run_triangular: true\n";
    tmpstring = tmpstring <> "    run_back_substitution: true\n";
    ,
    Nothing[]
   ];
   
   If[ mode === "reduce_ff",
    tmpstring = tmpstring <> "    run_initiate: true\n";
    tmpstring = tmpstring <> "    run_triangular: false\n";
    tmpstring = tmpstring <> "    run_back_substitution: false\n";
    tmpstring = tmpstring <> "    run_firefly: true\n";
    tmpstring = tmpstring <> "    factor_scan: true\n";
    ,
    Nothing[]
   ];
   
   Return[tmpstring]
];
