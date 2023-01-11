Last login: Thu Dec 15 15:35:24 on ttys000
saraditsch@Saras-MacBook-Pro ~ % ssh ge84fet@kalamata.t30.ph.tum.de
ge84fet@kalamata.t30.ph.tum.de's password: 
Welcome to Ubuntu 22.04.1 LTS (GNU/Linux 5.15.0-53-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

  System information as of Thu Dec 15 03:37:45 PM CET 2022

  System load:                0.02294921875
  Usage of /:                 60.4% of 78.19GB
  Memory usage:               10%
  Swap usage:                 0%
  Temperature:                49.0 C
  Processes:                  429
  Users logged in:            1
  IPv4 address for enp0s31f6: 10.152.80.65
  IPv6 address for enp0s31f6: 2001:4ca0:24f1:3000:7686:e2ff:fe3a:406d

 * Strictly confined Kubernetes makes edge and IoT secure. Learn how MicroK8s
   just raised the bar for easy, resilient and secure K8s cluster deployment.

   https://ubuntu.com/engage/secure-kubernetes-at-the-edge

1 device has a firmware upgrade available.
Run `fwupdmgr get-upgrades` for more information.



1 device has a firmware upgrade available.
Run `fwupdmgr get-upgrades` for more information.

Last login: Thu Dec 15 10:52:23 2022 from 10.183.64.131
ge84fet@kalamata:~$ ls
Desktop  Documents  Downloads  Music  Pictures  Public  Templates  Videos
ge84fet@kalamata:~$ Public
Public: command not found
ge84fet@kalamata:~$ cd Public/
ge84fet@kalamata:~/Public$ ls
ge84fet@kalamata:~/Public$ exit
logout
Connection to kalamata.t30.ph.tum.de closed.
saraditsch@Saras-MacBook-Pro ~ % ssh ge84fet@.newton1.t30.ph.tum.de
ssh: Could not resolve hostname .newton1.t30.ph.tum.de: -65540
saraditsch@Saras-MacBook-Pro ~ % ssh ge84fet@newton1.t30.ph.tum.de
^C
saraditsch@Saras-MacBook-Pro ~ % ssh ge84fet@newton1.t30.ph.tum.de
^C
saraditsch@Saras-MacBook-Pro ~ % ssh ge84fet@newton1.t30.ph.tum.de
The authenticity of host 'newton1.t30.ph.tum.de (10.152.82.19)' can't be established.
ED25519 key fingerprint is SHA256:AWpG4yefmqEzGnMNgRbzTBHAG4HMBr94DLk17VhIUqA.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes 
Warning: Permanently added 'newton1.t30.ph.tum.de' (ED25519) to the list of known hosts.
ge84fet@newton1.t30.ph.tum.de's password: 
Welcome to Ubuntu 22.04.1 LTS (GNU/Linux 5.15.0-46-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

  System information as of Thu Dec 15 03:43:59 PM CET 2022

  System load:  3.03076171875      Processes:                    2334
  Usage of /:   70.8% of 54.70GB   Users logged in:              3
  Memory usage: 18%                IPv4 address for eno12399np0: 10.152.82.19
  Swap usage:   6%

 * Strictly confined Kubernetes makes edge and IoT secure. Learn how MicroK8s
   just raised the bar for easy, resilient and secure K8s cluster deployment.

   https://ubuntu.com/engage/secure-kubernetes-at-the-edge

1 device has a firmware upgrade available.
Run `fwupdmgr get-upgrades` for more information.



1 device has a firmware upgrade available.
Run `fwupdmgr get-upgrades` for more information.

Last login: Mon Dec  5 16:21:52 2022 from 10.152.80.64
ge84fet@newton1:~$ ls
Desktop  Documents  Downloads  Music  Pictures  Public  Templates  Videos
ge84fet@newton1:~$ cd Desktop
ge84fet@newton1:~/Desktop$ 
ge84fet@newton1:~/Desktop$ ls
'Tensordecomposition new.nb'
ge84fet@newton1:~/Desktop$ cd ...
-bash: cd: ...: No such file or directory
ge84fet@newton1:~/Desktop$ cd ..
ge84fet@newton1:~$ cd ..
ge84fet@newton1:/home/t30/all$ ls
ga25suj  ga74row  ge32cic  ge56roz  ge85jem
ga25van  ga74tar  ge32faj  ge56rum  ge85jeq
ga25zeg  ga74ved  ge34baf  ge56zes  ge85ney
ga26bun  ga74vog  ge34biq  ge57daw  ge85rev
ga27gug  ga74zun  ge34cit  ge57foj  ge85toy
ga27haq  ga75fok  ge34jer  ge57nek  ge86cug
ga27hil  ga76fey  ge34qur  ge57toy  ge86gen
ga27muc  ga76jel  ge34rig  ge57veg  ge86gey
ga27xep  ga76rek  ge34vaf  ge57ves  ge86hab
ga27xez  ga76zud  ge34zun  ge57wic  ge86lod
ga27yem  ga78fed  ge35bix  ge57yog  ge86mom
ga27yir  ga79dub  ge35jot  ge57zev  ge86rov
ga27yub  ga79kaj  ge35tun  ge58keb  ge86run
ga32but  ga79kes  ge35vic  ge58pot  ge86tan
ga32buw  ga79xuj  ge35wej  ge58wex  ge86xok
ga32pex  ga82gan  ge36boj  ge58wom  ge86xop
ga32rav  ga82xox  ge36kek  ge59cek  ge86yaj
ga35bet  ga83bud  ge36mul  ge59goh  ge86yif
ga35pif  ga83kuk  ge36pic  ge59jol  ge87nar
ga37qeq  ga84bid  ge36sud  ge59miw  ge89duv
ga37qin  ga84dic  ge36vag  ge59xux  ge89gom
ga37vus  ga84nox  ge36wan  ge63xov  ge89qoj
ga37wel  ga85xux  ge36xeh  ge63xuv  ge89qoy
ga38dub  ga86fef  ge37bij  ge64meh  ge89tox
ga38lab  ga86jij  ge37buz  ge64nix  ge89wor
ga38qiw  ga86kej  ge37fim  ge64tuj  ge89xaf
ga42jep  ga87bin  ge37kem  ge65fuw  ge89xiv
ga42liy  ga87fag  ge37lib  ge65yun  ge89xod
ga42puq  ga87foh  ge37num  ge67kuv  ge92bif
ga42qad  ga87giw  ge37ses  ge68kuc  ge92fev
ga42vud  ga87jex  ge37soh  ge68qaz  ge92paz
ga42yez  ga87jup  ge37sup  ge69dej  ge92pef
ga42yux  ga87mim  ge38bil  ge69rek  ge92pog
ga42zed  ga87quy  ge38huj  ge69soc  ge92pol
ga45bor  ga87reg  ge38ken  ge69xef  ge92quh
ga45can  ga87tag  ge38lif  ge69zis  ge92quw
ga45cax  ga87vur  ge39loq  ge69zor  ge92raq
ga45goh  ga87yox  ge39nak  ge72geg  ge92tib
ga45huq  ga89cob  ge42ceg  ge72mig  ge92tof
ga45kaw  ga89cox  ge42coq  ge72mox  ge92tox
ga45kuj  ga89kof  ge42far  ge72qup  ge92wer
ga45wam  ga89nir  ge42soq  ge72tal  ge92woj
ga46bak  ga89rub  ge42yug  ge72tav  ge92xuw
ga46nah  ga89zif  ge42yun  ge72ten  ge93lon
ga46rub  ga92hoc  ge42yur  ge72viw  ge94nis
ga46xuc  ga92xes  ge43dop  ge72xul  ge95ral
ga47met  ga93buc  ge43doy  ge73dok  ge96fej
ga48cub  ga93non  ge43fef  ge73fev  ge96les
ga48fes  ga94giv  ge43quj  ge73pef  ge96qaz
ga48juv  ga94sav  ge43vil  ge73pip  ge96vam
ga48lol  ga94tek  ge43xal  ge73quy  ge97bik
ga48nub  ga96jil  ge43zih  ge73rek  ge97bix
ga48qup  ga96roq  ge45beb  ge73siy  ge97coj
ga49yar  ga96vet  ge45bev  ge73vob  ge97giq
ga53cop  ga97hil  ge45dah  ge73vom  ge97jiv
ga53duq  ga97leb  ge45daq  ge73wot  ge97kex
ga53pow  ga97wuf  ge45din  ge74car  ge97tod
ga53suq  ga97zaz  ge45hub  ge74cin  ge97woc
ga53wof  ga98cim  ge45jay  ge74fax  ge97yon
ga53yez  ge23cef  ge45leb  ge74jav  ge97yum
ga54cal  ge23dol  ge45lec  ge74jaz  ge97zif
ga54luq  ge23fav  ge45lij  ge74qez  ge98fiv
ga56gin  ge23giq  ge45lon  ge74raf  ge98get
ga56gix  ge23gur  ge45lox  ge74rak  ge98hay
ga56xox  ge23nuf  ge45tey  ge74ren  ge98soy
ga57jey  ge23nux  ge45tuy  ge74ses  ge98vaw
ga57nun  ge23rof  ge45wem  ge74suj  ge98xew
ga57raj  ge23rur  ge45xur  ge74vig  ge98zah
ga58bec  ge23veq  ge45zog  ge74xir  gi23pah
ga58dom  ge23vik  ge46bap  ge74xiz  gi23viv
ga58fip  ge23web  ge46foh  ge74zaj  gi23vix
ga58fiw  ge23xeq  ge46way  ge74zit  gi23wuh
ga58voh  ge24bih  ge47beh  ge75cof  gi23xan
ga59kal  ge24bix  ge47fal  ge75cox  gi23zev
ga59lod  ge24mad  ge47geg  ge75coy  gi26jej
ga59qol  ge24wev  ge47gix  ge75nam  gi26kaf
ga62got  ge24yob  ge47giy  ge75niz  gi26kez
ga62kos  ge24yop  ge47lib  ge75tak  gi26tiv
ga62nax  ge24yov  ge47sav  ge75xew  gi27gus
ga62rot  ge24zah  ge47soy  ge75zot  gi32gux
ga62suf  ge24zod  ge47yef  ge78nub  gi32kih
ga62sus  ge25buh  ge48pik  ge78nuq  gi32rog
ga62xax  ge25fob  ge49ben  ge78rak  gi32tas
ga63beh  ge25pon  ge49hav  ge78ram  gu23qab
ga63hay  ge25suz  ge49jez  ge78rat  gu27pev
ga63hef  ge25wor  ge49nin  ge78ren  gu32hex
ga63jal  ge26bom  ge49wed  ge78rep  gu32qaw
ga63loc  ge26cim  ge49zij  ge78rer  gu32tel
ga63mad  ge26dan  ge52doz  ge78vow  gu32tos
ga63roq  ge26had  ge52hot  ge78yof  gu45pez
ga63seb  ge26nah  ge52reg  ge79fix  gu45tev
ga63tuq  ge26nat  ge52sir  ge79hoy  gu53dez
ga63vij  ge26naw  ge52voc  ge79qed  gu56naq
ga63xig  ge26nun  ge52war  ge82cid  gu56xap
ga63zit  ge26sib  ge52wik  ge82cov  gu63per
ga63zuh  ge26tog  ge52wim  ge82dun  gu72rus
ga63zuk  ge28bab  ge54heb  ge82kaz  gu74cob
ga65naz  ge28cem  ge54hik  ge82kef  gu74xum
ga67qus  ge28feq  ge54hop  ge82mut  gu92vis
ga68bus  ge28lil  ge54mac  ge82qax  gu92zeh
ga68dok  ge28mik  ge54qav  ge82qog  ne24luk
ga68gew  ge28niq  ge54vez  ge82veh  ne27yav
ga68guw  ge28qut  ge54wis  ge82yiq  ne38xip
ga68luv  ge28vik  ge54wog  ge82ziv  ne59piw
ga68qeb  ge28was  ge54wuh  ge83len  ne84zis
ga68wok  ge28yel  ge54xax  ge83mov  ne97jih
ga68zid  ge28yiq  ge54yos  ge83nuw  no29yaz
ga72wip  ge28yuq  ge56beb  ge83qet  no34kur
ga74diq  ge28zet  ge56gid  ge83qez  README-find-and-remove-broken-links
ga74goh  ge29gag  ge56kih  ge84fet
ga74huc  ge29pir  ge56lap  ge85con
ga74peq  ge29xuf  ge56laq  ge85daw
ge84fet@newton1:/home/t30/all$ cd '/scratch/ge45lec/calc_MM 
> ^C
ge84fet@newton1:/home/t30/all$ cd 
ge84fet@newton1:~$ cd /scratch/
ge84fet@newton1:/scratch$ ls
'FILES IN THIS DIRECTORY ARE NOT BACKUPED AND CAN BE DELETED AT ANY TIME'
 ge45leb
 ge45lec
 ge45lox
 ge45tuy
 ge74zaj
 ge86hab
 ge92wer
 lost+found
 ttpmath
ge84fet@newton1:/scratch$ cd 
ge84fet@newton1:~$ cd /scratch/
ge84fet@newton1:/scratch$ l

^C
ge84fet@newton1:/scratch$ ls
'FILES IN THIS DIRECTORY ARE NOT BACKUPED AND CAN BE DELETED AT ANY TIME'
 ge45leb
 ge45lec
 ge45lox
 ge45tuy
 ge74zaj
 ge86hab
 ge92wer
 lost+found
 ttpmath
ge84fet@newton1:/scratch$ cd ge45lec
ge84fet@newton1:/scratch/ge45lec$ ls
1L1M             calc_MM                pppb              test_tth
bhabha           K2_userdefweight_test  reduction_soft0J  TMP
bhabha_numerics  ppp                    test_seeds        ttbarh_amp
ge84fet@newton1:/scratch/ge45lec$ cd
ge84fet@newton1:~$ /scratch/ge45lec/calc_MM/
-bash: /scratch/ge45lec/calc_MM/: Is a directory
ge84fet@newton1:~$ /scratch/ge45lec/calc_MM
-bash: /scratch/ge45lec/calc_MM: Is a directory
ge84fet@newton1:~$ cd /scratch/ge45lec/calc_MM
ge84fet@newton1:/scratch/ge45lec/calc_MM$ ls
calc_M.frm  out  proc  run.sh
ge84fet@newton1:/scratch/ge45lec/calc_MM$ exit
logout
Connection to newton1.t30.ph.tum.de closed.
saraditsch@Saras-MacBook-Pro ~ % scp -r ge84fet@newton1.t30.ph.tum.de:/scratch/ge45lec/calc_MM /Users/saraditsch/Desktop
ge84fet@newton1.t30.ph.tum.de's password: 
calc_M.frm                                    100% 2547   154.4KB/s   00:00    
run.sh                                        100%  646    59.4KB/s   00:00    
tensordef.h                                   100% 1283   109.7KB/s   00:00    
qgraf2amp.prc                                 100%  649    55.1KB/s   00:00    
output.prc                                    100% 1033    94.4KB/s   00:00    
apartrules.inc                                100%   44KB   1.1MB/s   00:00    
complexConjCCs.prc                            100% 1305   110.2KB/s   00:00    
prf.prc                                       100%  881    76.3KB/s   00:00    
apartpattern.inc                              100%   14KB 802.5KB/s   00:00    
funcToList.prc                                100%  780    53.0KB/s   00:00    
sumSpinHel.prc                                100% 1033    76.6KB/s   00:00    
spinney_test.frm                              100% 8701   649.2KB/s   00:00    
collectCC.prc                                 100% 1383   111.9KB/s   00:00    
diaglist.h                                    100%  189    11.6KB/s   00:00    
spinney.hh                                    100%   30KB   1.1MB/s   00:00    
feynmanRules.prc                              100% 2254   157.2KB/s   00:00    
performDiracTraces.prc                        100%  522    30.1KB/s   00:00    
symbols.h                                     100% 3351   221.5KB/s   00:00    
INTtoR.prc_backup                             100% 1523    88.5KB/s   00:00    
apartreduce.h                                 100%  912    62.6KB/s   00:00    
INTtoR.prc                                    100%  413    25.2KB/s   00:00    
simplify.prc                                  100%  905    68.0KB/s   00:00    
propToInt.prc                                 100% 1363    87.4KB/s   00:00    
symbols_min.h                                 100% 3141   194.8KB/s   00:00    
wrapSpinChain.prc                             100% 1121    69.8KB/s   00:00    
T21.m                                         100%  304    14.1KB/s   00:00    
T8.m                                          100%  675    32.8KB/s   00:00    
T13.m                                         100%  304    19.5KB/s   00:00    
T14.m                                         100%  369    27.5KB/s   00:00    
T3.m                                          100%  675    47.6KB/s   00:00    
T5.m                                          100%  304    22.5KB/s   00:00    
T10.m                                         100%  369    26.7KB/s   00:00    
T7.m                                          100%  675    51.2KB/s   00:00    
T4.m                                          100%  675    42.6KB/s   00:00    
T2.m                                          100%  369    27.4KB/s   00:00    
T11.m                                         100%  675    41.3KB/s   00:00    
T17.m                                         100%  304    18.4KB/s   00:00    
T22.m                                         100%  369    27.3KB/s   00:00    
T23.m                                         100%  675    47.3KB/s   00:00    
T6.m                                          100%  369    23.8KB/s   00:00    
T19.m                                         100%  675    47.5KB/s   00:00    
T12.m                                         100%  675    44.5KB/s   00:00    
T20.m                                         100%  675    45.3KB/s   00:00    
T18.m                                         100%  369    24.2KB/s   00:00    
T1.m                                          100%  304    19.1KB/s   00:00    
T9.m                                          100%  304    19.6KB/s   00:00    
T15.m                                         100%  675    44.1KB/s   00:00    
T24.m                                         100%  675    44.0KB/s   00:00    
T16.m                                         100%  675    44.3KB/s   00:00    
m_1_4.m                                       100%    5     0.4KB/s   00:00    
m_20_3.m                                      100%  628    37.8KB/s   00:00    
m_11_12.m                                     100%  596    39.7KB/s   00:00    
m_19_6.m                                      100%  215    13.4KB/s   00:00    
m_24_4.m                                      100%  631    38.4KB/s   00:00    
m_18_14.m                                     100%  126     8.4KB/s   00:00    
m_15_6.m                                      100%  671    38.6KB/s   00:00    
m_16_6.m                                      100%  671    43.5KB/s   00:00    
m_11_24.m                                     100%  232    14.7KB/s   00:00    
m_1_8.m                                       100%    5     0.3KB/s   00:00    
m_21_18.m                                     100%  399    24.9KB/s   00:00    
m_21_3.m                                      100%  380    24.7KB/s   00:00    
m_4_23.m                                      100%  199    12.7KB/s   00:00    
m_22_6.m                                      100%  319    20.8KB/s   00:00    
m_16_3.m                                      100%  199    12.9KB/s   00:00    
m_21_19.m                                     100%  335    20.3KB/s   00:00    
m_11_10.m                                     100%  596    42.8KB/s   00:00    
m_13_4.m                                      100%  380    24.0KB/s   00:00    
m_11_3.m                                      100% 1585   106.5KB/s   00:00    
m_21_16.m                                     100%  995    64.5KB/s   00:00    
m_1_24.m                                      100%  380    14.7KB/s   00:00    
m_15_19.m                                     100%  687    41.8KB/s   00:00    
m_19_10.m                                     100%  687    42.7KB/s   00:00    
m_18_12.m                                     100%  687     6.9KB/s   00:00    
m_6_3.m                                       100%    5     0.3KB/s   00:00    
m_24_13.m                                     100%  995    56.5KB/s   00:00    
m_4_7.m                                       100%    5     0.3KB/s   00:00    
m_19_22.m                                     100%  209    14.1KB/s   00:00    
m_4_11.m                                      100%  628    48.4KB/s   00:00    
m_18_1.m                                      100%  716    52.1KB/s   00:00    
m_6_9.m                                       100%  425    28.2KB/s   00:00    
m_20_6.m                                      100%  215    15.6KB/s   00:00    
m_14_18.m                                     100%  126     9.1KB/s   00:00    
m_17_5.m                                      100%  186    14.1KB/s   00:00    
m_17_18.m                                     100%  656    56.2KB/s   00:00    
m_1_2.m                                       100%    5     0.4KB/s   00:00    
m_3_6.m                                       100%    5     0.4KB/s   00:00    
m_20_5.m                                      100%  380    25.8KB/s   00:00    
m_18_2.m                                      100%  319    25.8KB/s   00:00    
m_17_16.m                                     100%  422    36.8KB/s   00:00    
m_3_10.m                                      100%  671    43.8KB/s   00:00    
m_24_16.m                                     100% 1510    95.5KB/s   00:00    
m_12_6.m                                      100%  232    18.4KB/s   00:00    
m_14_4.m                                      100%  232    17.3KB/s   00:00    
m_21_17.m                                     100%  162    14.4KB/s   00:00    
m_8_20.m                                      100%  631    52.7KB/s   00:00    
m_23_10.m                                     100%  248    16.2KB/s   00:00    
m_22_11.m                                     100%  248    20.9KB/s   00:00    
m_18_13.m                                     100%  458    34.6KB/s   00:00    
m_21_15.m                                     100%  995    60.1KB/s   00:00    
m_11_4.m                                      100%  628    48.8KB/s   00:00    
m_23_15.m                                     100% 1513   126.0KB/s   00:00    
m_11_8.m                                      100%  199    11.1KB/s   00:00    
m_23_2.m                                      100%  215     9.1KB/s   00:00    
m_8_4.m                                       100%    5     0.3KB/s   00:00    
m_8_11.m                                      100%  199    10.7KB/s   00:00    
m_14_19.m                                     100%  248    13.7KB/s   00:00    
m_14_14.m                                     100%  338    20.1KB/s   00:00    
m_22_7.m                                      100%  628    37.3KB/s   00:00    
m_19_9.m                                      100%  766    46.1KB/s   00:00    
m_21_8.m                                      100%  951    54.0KB/s   00:00    
m_14_23.m                                     100%  687    39.2KB/s   00:00    
m_2_23.m                                      100%  215     9.7KB/s   00:00    
m_21_23.m                                     100%  813    45.9KB/s   00:00    
m_11_5.m                                      100%  380    25.1KB/s   00:00    
m_4_13.m                                      100%  380    23.2KB/s   00:00    
m_24_8.m                                      100% 1418    80.2KB/s   00:00    
m_3_9.m                                       100%  746    46.6KB/s   00:00    
m_13_19.m                                     100%  422    30.8KB/s   00:00    
m_23_23.m                                     100% 1324    83.3KB/s   00:00    
m_22_3.m                                      100%  215    12.7KB/s   00:00    
m_23_21.m                                     100%  813    52.5KB/s   00:00    
m_15_16.m                                     100%  596    33.0KB/s   00:00    
m_19_14.m                                     100%  248    18.6KB/s   00:00    
m_4_3.m                                       100%    5     0.3KB/s   00:00    
m_24_22.m                                     100%  596    31.4KB/s   00:00    
m_5_4.m                                       100%    5     0.3KB/s   00:00    
m_4_22.m                                      100%  215    10.1KB/s   00:00    
m_24_24.m                                     100% 1321    81.2KB/s   00:00    
m_21_7.m                                      100%  951    67.6KB/s   00:00    
m_23_17.m                                     100%  335    25.4KB/s   00:00    
m_23_20.m                                     100%  193    11.5KB/s   00:00    
m_9_2.m                                       100%  723    49.0KB/s   00:00    
m_12_1.m                                      100%  746    48.1KB/s   00:00    
m_13_10.m                                     100%  399    27.0KB/s   00:00    
m_20_8.m                                      100%  631    39.1KB/s   00:00    
m_16_19.m                                     100%  232    11.6KB/s   00:00    
m_14_6.m                                      100%  355    17.0KB/s   00:00    
m_8_16.m                                      100% 1418    76.9KB/s   00:00    
m_4_1.m                                       100%    5     0.3KB/s   00:00    
m_8_6.m                                       100%    5     0.3KB/s   00:00    
m_15_24.m                                     100%  687    47.3KB/s   00:00    
m_2_9.m                                       100%  723    35.2KB/s   00:00    
m_15_18.m                                     100%  248    12.1KB/s   00:00    
m_11_18.m                                     100%  687    28.4KB/s   00:00    
m_17_7.m                                      100%  380    20.9KB/s   00:00    
m_7_24.m                                      100%  628    26.3KB/s   00:00    
m_9_18.m                                      100%  749    47.3KB/s   00:00    
m_7_12.m                                      100%  199    12.9KB/s   00:00    
m_8_23.m                                      100%  628    37.9KB/s   00:00    
m_9_21.m                                      100%  186    12.3KB/s   00:00    
m_20_4.m                                      100% 1575    91.0KB/s   00:00    
m_6_1.m                                       100%    5     0.3KB/s   00:00    
m_5_21.m                                      100%  514    27.8KB/s   00:00    
m_16_21.m                                     100%  995    60.4KB/s   00:00    
m_21_6.m                                      100%  775    58.9KB/s   00:00    
m_15_12.m                                     100%  193    11.8KB/s   00:00    
m_7_3.m                                       100%    5     0.4KB/s   00:00    
m_3_12.m                                      100%  628    41.7KB/s   00:00    
m_4_15.m                                      100%  199    12.7KB/s   00:00    
m_10_9.m                                      100%  656    35.5KB/s   00:00    
m_19_2.m                                      100%  628    32.7KB/s   00:00    
m_13_18.m                                     100%  458    29.0KB/s   00:00    
m_16_12.m                                     100%  599    35.9KB/s   00:00    
m_3_5.m                                       100%    5     0.3KB/s   00:00    
m_19_17.m                                     100%  624    37.0KB/s   00:00    
m_3_15.m                                      100%  628    39.5KB/s   00:00    
m_19_8.m                                      100%  199    13.1KB/s   00:00    
m_3_13.m                                      100%  380    22.6KB/s   00:00    
m_9_9.m                                       100%  390    20.2KB/s   00:00    
m_18_5.m                                      100%  425    27.1KB/s   00:00    
m_13_16.m                                     100%  813    35.8KB/s   00:00    
m_14_3.m                                      100%  232    16.2KB/s   00:00    
m_13_2.m                                      100%  425    24.6KB/s   00:00    
m_18_18.m                                     100%  338    19.4KB/s   00:00    
m_16_10.m                                     100%  209    10.5KB/s   00:00    
m_2_11.m                                      100%  671    29.6KB/s   00:00    
m_22_24.m                                     100%  596    27.1KB/s   00:00    
m_22_14.m                                     100%  370    23.5KB/s   00:00    
m_16_14.m                                     100%  596    30.0KB/s   00:00    
m_20_10.m                                     100%  687    33.6KB/s   00:00    
m_22_21.m                                     100%  690    50.0KB/s   00:00    
m_10_21.m                                     100%  458    27.4KB/s   00:00    
m_20_22.m                                     100%  209    13.7KB/s   00:00    
m_9_14.m                                      100%  399    23.7KB/s   00:00    
m_3_7.m                                       100%    5     0.3KB/s   00:00    
m_16_18.m                                     100%  248    13.0KB/s   00:00    
m_18_20.m                                     100%  596    39.6KB/s   00:00    
m_7_16.m                                      100%  628    35.8KB/s   00:00    
m_12_17.m                                     100%  766    40.8KB/s   00:00    
m_3_18.m                                      100%  628    36.2KB/s   00:00    
m_11_22.m                                     100%  248    13.2KB/s   00:00    
m_5_12.m                                      100%  380    18.9KB/s   00:00    
m_15_9.m                                      100%  335    18.9KB/s   00:00    
m_17_10.m                                     100%  749    49.6KB/s   00:00    
m_15_2.m                                      100%  232    16.1KB/s   00:00    
m_7_18.m                                      100%  215    11.2KB/s   00:00    
m_21_12.m                                     100%  422    26.0KB/s   00:00    
m_12_16.m                                     100%  599    33.8KB/s   00:00    
m_7_1.m                                       100%    5     0.3KB/s   00:00    
m_6_14.m                                      100%  355    22.1KB/s   00:00    
m_12_23.m                                     100%  232    12.0KB/s   00:00    
m_15_14.m                                     100%  596    30.8KB/s   00:00    
m_15_11.m                                     100%  596    37.8KB/s   00:00    
m_21_2.m                                      100%  425    27.2KB/s   00:00    
m_6_21.m                                      100%  775    49.5KB/s   00:00    
m_21_14.m                                     100%  785    49.5KB/s   00:00    
m_2_8.m                                       100%    5     0.3KB/s   00:00    
m_8_22.m                                      100%  628    45.8KB/s   00:00    
m_21_4.m                                      100%  380    19.5KB/s   00:00    
m_18_10.m                                     100%  370    19.6KB/s   00:00    
m_3_19.m                                      100% 1585    82.7KB/s   00:00    
m_21_20.m                                     100%  335    21.8KB/s   00:00    
m_13_12.m                                     100%  335    20.1KB/s   00:00    
m_7_6.m                                       100%    5     0.3KB/s   00:00    
m_17_22.m                                     100%  399    25.7KB/s   00:00    
m_8_14.m                                      100%  671    35.7KB/s   00:00    
m_16_8.m                                      100% 1418    98.4KB/s   00:00    
m_16_9.m                                      100%  335    20.8KB/s   00:00    
m_4_14.m                                      100%  232    15.4KB/s   00:00    
m_20_21.m                                     100%  335    21.6KB/s   00:00    
m_22_1.m                                      100%  425    27.7KB/s   00:00    
m_2_16.m                                      100%  232    14.0KB/s   00:00    
m_8_19.m                                      100%  199     8.8KB/s   00:00    
m_23_14.m                                     100%  687    31.6KB/s   00:00    
m_18_15.m                                     100%  248    12.2KB/s   00:00    
m_17_24.m                                     100%  335    17.4KB/s   00:00    
m_19_3.m                                      100% 1585    92.3KB/s   00:00    
m_7_8.m                                       100%    5     0.4KB/s   00:00    
m_7_19.m                                      100%  628    28.8KB/s   00:00    
m_17_3.m                                      100%  746    37.1KB/s   00:00    
m_6_11.m                                      100%  232    11.2KB/s   00:00    
m_20_14.m                                     100%  248    14.8KB/s   00:00    
m_21_13.m                                     100%  489    30.3KB/s   00:00    
m_9_3.m                                       100%  746    43.7KB/s   00:00    
m_13_8.m                                      100%  951    62.7KB/s   00:00    
m_8_21.m                                      100%  951    48.7KB/s   00:00    
m_10_15.m                                     100%  209    10.2KB/s   00:00    
m_17_8.m                                      100%  380    17.0KB/s   00:00    
m_13_11.m                                     100%  335    19.3KB/s   00:00    
m_23_16.m                                     100%  687    39.7KB/s   00:00    
m_14_24.m                                     100%  687    36.7KB/s   00:00    
m_12_13.m                                     100%  335    20.8KB/s   00:00    
m_8_1.m                                       100%    5     0.3KB/s   00:00    
m_15_1.m                                      100%  380    21.2KB/s   00:00    
m_11_17.m                                     100%  766    51.5KB/s   00:00    
m_1_23.m                                      100%  380    23.6KB/s   00:00    
m_8_7.m                                       100%    5     0.3KB/s   00:00    
m_5_9.m                                       100%  186    14.7KB/s   00:00    
m_2_6.m                                       100%    5     0.3KB/s   00:00    
m_2_10.m                                      100%  355    20.4KB/s   00:00    
m_9_13.m                                      100%  162    11.3KB/s   00:00    
m_21_5.m                                      100%  514    34.8KB/s   00:00    
m_19_19.m                                     100% 1459   115.3KB/s   00:00    
m_3_23.m                                      100%  628    54.3KB/s   00:00    
m_18_21.m                                     100%  399    27.4KB/s   00:00    
m_24_7.m                                      100%  628    43.5KB/s   00:00    
m_9_4.m                                       100%  746    44.1KB/s   00:00    
m_19_11.m                                     100% 1670   105.9KB/s   00:00    
m_17_11.m                                     100%  766    43.6KB/s   00:00    
m_24_2.m                                      100%  215    17.1KB/s   00:00    
m_2_24.m                                      100%  215    14.9KB/s   00:00    
m_15_22.m                                     100%  687    41.8KB/s   00:00    
m_10_11.m                                     100%  596    37.7KB/s   00:00    
m_21_24.m                                     100%  813    56.9KB/s   00:00    
m_20_23.m                                     100%  193    12.6KB/s   00:00    
m_10_16.m                                     100%  209    14.5KB/s   00:00    
m_24_17.m                                     100%  335    24.1KB/s   00:00    
m_13_21.m                                     100%  489    32.9KB/s   00:00    
m_11_15.m                                     100%  596    46.9KB/s   00:00    
m_22_19.m                                     100%  209    15.9KB/s   00:00    
m_22_23.m                                     100%  596    39.8KB/s   00:00    
m_5_2.m                                       100%    5     0.5KB/s   00:00    
m_1_12.m                                      100%  746    63.9KB/s   00:00    
m_17_6.m                                      100%  425    37.4KB/s   00:00    
m_6_7.m                                       100%    5     0.4KB/s   00:00    
m_1_19.m                                      100%  746    50.2KB/s   00:00    
m_13_23.m                                     100%  995    66.8KB/s   00:00    
m_12_19.m                                     100%  687    52.5KB/s   00:00    
m_11_11.m                                     100% 1459   113.7KB/s   00:00    
m_17_9.m                                      100%  455    40.2KB/s   00:00    
m_11_7.m                                      100%  628    28.0KB/s   00:00    
m_1_6.m                                       100%    5     0.3KB/s   00:00    
m_3_2.m                                       100%    5     0.3KB/s   00:00    
m_3_24.m                                      100%  199    12.5KB/s   00:00    
m_4_20.m                                      100% 1575    87.9KB/s   00:00    
m_20_12.m                                     100% 1667   105.5KB/s   00:00    
m_24_18.m                                     100%  209    14.0KB/s   00:00    
m_13_1.m                                      100%  186    11.5KB/s   00:00    
m_10_8.m                                      100%  232    13.9KB/s   00:00    
m_4_2.m                                       100%    5     0.3KB/s   00:00    
m_24_12.m                                     100%  690    42.2KB/s   00:00    
m_6_19.m                                      100%  215    12.4KB/s   00:00    
m_4_17.m                                      100%  746    48.7KB/s   00:00    
m_9_19.m                                      100%  766    51.0KB/s   00:00    
m_13_7.m                                      100%  951    58.7KB/s   00:00    
m_24_19.m                                     100%  193    10.7KB/s   00:00    
m_23_24.m                                     100%  596    29.1KB/s   00:00    
m_14_16.m                                     100%  596    37.9KB/s   00:00    
m_8_5.m                                       100%    5     0.3KB/s   00:00    
m_4_16.m                                      100%  631    51.0KB/s   00:00    
m_11_23.m                                     100%  687    39.5KB/s   00:00    
m_23_7.m                                      100% 1421   102.3KB/s   00:00    
m_10_23.m                                     100%  248    14.6KB/s   00:00    
m_2_18.m                                      100%  319    20.7KB/s   00:00    
m_17_14.m                                     100%  458    27.3KB/s   00:00    
m_1_18.m                                      100%  716    43.9KB/s   00:00    
m_5_6.m                                       100%    5     0.3KB/s   00:00    
m_8_12.m                                      100%  631    41.8KB/s   00:00    
m_9_24.m                                      100%  422    25.6KB/s   00:00    
m_17_17.m                                     100%  390    25.8KB/s   00:00    
m_11_21.m                                     100%  422    23.1KB/s   00:00    
m_23_11.m                                     100%  687    51.6KB/s   00:00    
m_6_18.m                                      100%  108     6.8KB/s   00:00    
m_23_8.m                                      100%  628    30.4KB/s   00:00    
m_18_23.m                                     100%  209    10.5KB/s   00:00    
m_5_11.m                                      100%  380    23.5KB/s   00:00    
m_18_3.m                                      100%  628    37.3KB/s   00:00    
m_14_13.m                                     100%  690    43.0KB/s   00:00    
m_22_2.m                                      100%  108     5.4KB/s   00:00    
m_9_5.m                                       100%  186    11.7KB/s   00:00    
m_3_11.m                                      100% 1585    97.7KB/s   00:00    
m_16_1.m                                      100%  380    20.8KB/s   00:00    
m_22_9.m                                      100%  458    27.6KB/s   00:00    
m_19_24.m                                     100%  193    13.7KB/s   00:00    
m_12_18.m                                     100%  687    40.5KB/s   00:00    
m_6_2.m                                       100%    5     0.3KB/s   00:00    
m_6_13.m                                      100%  759    48.2KB/s   00:00    
m_1_1.m                                       100%    5     0.3KB/s   00:00    
m_5_20.m                                      100%  380    24.5KB/s   00:00    
m_2_15.m                                      100%  232    14.9KB/s   00:00    
m_19_7.m                                      100%  628    41.6KB/s   00:00    
m_24_6.m                                      100%  628    39.3KB/s   00:00    
m_2_3.m                                       100%    5     0.3KB/s   00:00    
m_20_24.m                                     100%  599    39.4KB/s   00:00    
m_19_1.m                                      100%  746    45.4KB/s   00:00    
m_4_18.m                                      100%  628    40.6KB/s   00:00    
m_12_14.m                                     100%  209    11.3KB/s   00:00    
m_13_14.m                                     100%  690    39.6KB/s   00:00    
m_11_2.m                                      100%  671    59.5KB/s   00:00    
m_9_10.m                                      100%  656    49.9KB/s   00:00    
m_15_8.m                                      100%  628    49.1KB/s   00:00    
m_24_21.m                                     100%  813    61.6KB/s   00:00    
m_22_18.m                                     100%  116     8.9KB/s   00:00    
m_23_22.m                                     100%  596    42.9KB/s   00:00    
m_19_15.m                                     100%  687    47.1KB/s   00:00    
m_18_9.m                                      100%  749    55.3KB/s   00:00    
m_9_7.m                                       100%  380    25.2KB/s   00:00    
m_23_4.m                                      100%  199    14.6KB/s   00:00    
m_24_10.m                                     100%  248    18.3KB/s   00:00    
m_20_2.m                                      100%  628    43.3KB/s   00:00    
m_13_17.m                                     100%  186    13.9KB/s   00:00    
m_16_24.m                                     100% 1510   119.2KB/s   00:00    
m_8_2.m                                       100%    5     0.4KB/s   00:00    
m_22_13.m                                     100%  785    40.9KB/s   00:00    
m_1_22.m                                      100%  425    31.5KB/s   00:00    
m_15_3.m                                      100%  628    45.5KB/s   00:00    
m_16_11.m                                     100%  193    17.2KB/s   00:00    
m_5_10.m                                      100%  425    33.9KB/s   00:00    
m_7_4.m                                       100%    5     0.3KB/s   00:00    
m_8_8.m                                       100%    5     0.4KB/s   00:00    
m_17_19.m                                     100%  624    39.9KB/s   00:00    
m_5_16.m                                      100%  951    67.9KB/s   00:00    
m_12_5.m                                      100%  380    26.6KB/s   00:00    
m_9_22.m                                      100%  458    29.5KB/s   00:00    
m_8_17.m                                      100%  380    31.9KB/s   00:00    
m_1_20.m                                      100%  746    55.4KB/s   00:00    
m_7_10.m                                      100%  232    12.0KB/s   00:00    
m_2_17.m                                      100%  716    50.8KB/s   00:00    
m_10_4.m                                      100%  671    57.4KB/s   00:00    
m_22_22.m                                     100%  338    26.6KB/s   00:00    
m_18_11.m                                     100%  687    39.2KB/s   00:00    
m_23_5.m                                      100%  951    79.3KB/s   00:00    
m_18_17.m                                     100%  656    33.9KB/s   00:00    
m_10_14.m                                     100%  116     8.7KB/s   00:00    
m_5_15.m                                      100%  951    77.0KB/s   00:00    
m_19_4.m                                      100%  628    48.0KB/s   00:00    
m_17_21.m                                     100%  162    12.9KB/s   00:00    
m_6_8.m                                       100%    5     0.3KB/s   00:00    
m_6_16.m                                      100%  671    45.9KB/s   00:00    
m_13_15.m                                     100%  813    38.3KB/s   00:00    
m_12_9.m                                      100%  624    33.4KB/s   00:00    
m_7_15.m                                      100% 1421    72.1KB/s   00:00    
m_16_15.m                                     100%  596    28.0KB/s   00:00    
m_22_8.m                                      100%  628    31.0KB/s   00:00    
m_6_15.m                                      100%  671    34.4KB/s   00:00    
m_4_19.m                                      100%  628    33.4KB/s   00:00    
m_15_21.m                                     100%  995    50.5KB/s   00:00    
m_2_2.m                                       100%    5     0.3KB/s   00:00    
m_15_5.m                                      100%  951    65.6KB/s   00:00    
m_19_21.m                                     100%  335    15.6KB/s   00:00    
m_24_20.m                                     100%  599    34.6KB/s   00:00    
m_4_9.m                                       100%  746    46.2KB/s   00:00    
m_9_12.m                                      100%  624    31.9KB/s   00:00    
m_23_1.m                                      100%  380    24.8KB/s   00:00    
m_16_5.m                                      100%  951    58.5KB/s   00:00    
m_11_13.m                                     100%  335    19.1KB/s   00:00    
m_12_24.m                                     100%  690    45.2KB/s   00:00    
m_1_14.m                                      100%  425    26.3KB/s   00:00    
m_20_17.m                                     100%  624    42.9KB/s   00:00    
m_16_13.m                                     100%  813    48.9KB/s   00:00    
m_2_5.m                                       100%    5     0.3KB/s   00:00    
m_21_11.m                                     100%  422    22.7KB/s   00:00    
m_10_13.m                                     100%  399    23.8KB/s   00:00    
m_2_19.m                                      100%  628    27.6KB/s   00:00    
m_6_24.m                                      100%  628    37.5KB/s   00:00    
m_1_21.m                                      100%  186     8.5KB/s   00:00    
m_22_12.m                                     100%  248    17.3KB/s   00:00    
m_14_8.m                                      100%  671    43.5KB/s   00:00    
m_18_4.m                                      100%  628    42.8KB/s   00:00    
m_15_23.m                                     100% 1513    91.7KB/s   00:00    
m_18_16.m                                     100%  248    12.6KB/s   00:00    
m_4_5.m                                       100%    5     0.3KB/s   00:00    
m_7_2.m                                       100%    5     0.3KB/s   00:00    
m_15_20.m                                     100%  232    13.4KB/s   00:00    
m_20_18.m                                     100%  596    33.6KB/s   00:00    
m_9_23.m                                      100%  422    32.2KB/s   00:00    
m_21_9.m                                      100%  186    13.2KB/s   00:00    
m_13_24.m                                     100%  995    60.5KB/s   00:00    
m_16_23.m                                     100%  687    46.1KB/s   00:00    
m_1_15.m                                      100%  380    26.9KB/s   00:00    
m_24_3.m                                      100%  199    15.3KB/s   00:00    
m_7_17.m                                      100%  380    29.3KB/s   00:00    
m_23_12.m                                     100%  232    16.6KB/s   00:00    
m_17_1.m                                      100%  465    33.2KB/s   00:00    
m_10_18.m                                     100%  370    24.1KB/s   00:00    
m_14_15.m                                     100%  596    40.1KB/s   00:00    
m_5_5.m                                       100%    5     0.4KB/s   00:00    
m_9_11.m                                      100%  624    38.9KB/s   00:00    
m_1_3.m                                       100%    5     0.3KB/s   00:00    
m_22_17.m                                     100%  399    29.3KB/s   00:00    
m_20_13.m                                     100%  422    25.6KB/s   00:00    
m_10_22.m                                     100%  126     7.3KB/s   00:00    
m_22_5.m                                      100%  775    60.5KB/s   00:00    
m_7_13.m                                      100%  951    61.9KB/s   00:00    
m_14_10.m                                     100%  116    10.1KB/s   00:00    
m_5_8.m                                       100%    5     0.3KB/s   00:00    
m_13_9.m                                      100%  162    10.4KB/s   00:00    
m_11_6.m                                      100%  232    15.3KB/s   00:00    
m_21_1.m                                      100%  186    10.4KB/s   00:00    
m_9_15.m                                      100%  335    20.8KB/s   00:00    
m_13_5.m                                      100%  514    33.1KB/s   00:00    
m_9_16.m                                      100%  335    20.5KB/s   00:00    
m_1_10.m                                      100%  723    45.3KB/s   00:00    
m_24_11.m                                     100%  232    13.2KB/s   00:00    
m_10_5.m                                      100%  425    30.0KB/s   00:00    
m_18_6.m                                      100%  108     6.7KB/s   00:00    
m_12_10.m                                     100%  596    43.2KB/s   00:00    
m_9_20.m                                      100%  766    53.6KB/s   00:00    
m_2_1.m                                       100%    5     0.3KB/s   00:00    
m_10_17.m                                     100%  749    47.5KB/s   00:00    
m_1_9.m                                       100%  465    33.0KB/s   00:00    
m_20_9.m                                      100%  766    48.5KB/s   00:00    
m_21_22.m                                     100%  690    36.7KB/s   00:00    
m_1_11.m                                      100%  746    48.0KB/s   00:00    
m_14_2.m                                      100%  118     6.4KB/s   00:00    
m_13_6.m                                      100%  759    44.8KB/s   00:00    
m_19_12.m                                     100%  687    48.5KB/s   00:00    
m_1_7.m                                       100%    5     0.3KB/s   00:00    
m_13_22.m                                     100%  785    49.2KB/s   00:00    
m_18_19.m                                     100%  596    39.8KB/s   00:00    
m_8_3.m                                       100%    5     0.3KB/s   00:00    
m_4_24.m                                      100%  631    39.8KB/s   00:00    
m_19_23.m                                     100%  596    38.4KB/s   00:00    
m_2_21.m                                      100%  425    26.4KB/s   00:00    
m_20_7.m                                      100%  199    12.8KB/s   00:00    
m_12_21.m                                     100%  422    29.3KB/s   00:00    
m_9_8.m                                       100%  380    24.7KB/s   00:00    
m_5_24.m                                      100%  951    58.6KB/s   00:00    
m_8_15.m                                      100%  628    33.4KB/s   00:00    
m_16_17.m                                     100%  422    24.8KB/s   00:00    
m_14_20.m                                     100%  248    15.6KB/s   00:00    
m_20_1.m                                      100%  746    45.9KB/s   00:00    
m_18_22.m                                     100%  116     6.3KB/s   00:00    
m_1_13.m                                      100%  186    11.7KB/s   00:00    
m_24_15.m                                     100%  687    47.0KB/s   00:00    
m_14_7.m                                      100%  671    42.0KB/s   00:00    
m_4_21.m                                      100%  380    28.0KB/s   00:00    
m_17_15.m                                     100%  422    24.3KB/s   00:00    
m_20_11.m                                     100%  687    47.5KB/s   00:00    
m_15_4.m                                      100%  199    11.4KB/s   00:00    
m_6_23.m                                      100%  628    45.0KB/s   00:00    
m_24_9.m                                      100%  422    21.3KB/s   00:00    
m_23_3.m                                      100%  628    48.4KB/s   00:00    
m_12_15.m                                     100%  193    12.9KB/s   00:00    
m_24_14.m                                     100%  687    39.2KB/s   00:00    
m_14_21.m                                     100%  785    42.7KB/s   00:00    
m_16_20.m                                     100%  690    40.9KB/s   00:00    
m_7_21.m                                      100%  951    58.4KB/s   00:00    
m_6_6.m                                       100%    5     0.3KB/s   00:00    
m_14_22.m                                     100%  370    30.5KB/s   00:00    
m_5_19.m                                      100%  380    32.6KB/s   00:00    
m_19_13.m                                     100%  422    31.2KB/s   00:00    
m_6_22.m                                      100%  319    22.5KB/s   00:00    
m_2_13.m                                      100%  425    35.1KB/s   00:00    
m_3_20.m                                      100%  628    52.7KB/s   00:00    
m_14_1.m                                      100%  425    24.2KB/s   00:00    
m_7_14.m                                      100%  671    55.8KB/s   00:00    
m_6_20.m                                      100%  215    17.6KB/s   00:00    
m_17_4.m                                      100%  746    52.9KB/s   00:00    
m_5_18.m                                      100%  425    35.4KB/s   00:00    
m_11_20.m                                     100%  687    55.4KB/s   00:00    
m_19_20.m                                     100%  596    33.2KB/s   00:00    
m_12_20.m                                     100% 1667    93.5KB/s   00:00    
m_5_17.m                                      100%  186    12.3KB/s   00:00    
m_11_16.m                                     100%  193    17.3KB/s   00:00    
m_6_12.m                                      100%  232    13.0KB/s   00:00    
m_4_8.m                                       100%    5     0.2KB/s   00:00    
m_12_3.m                                      100%  628    53.3KB/s   00:00    
m_5_22.m                                      100%  775    63.0KB/s   00:00    
m_17_13.m                                     100%  186    14.6KB/s   00:00    
m_14_12.m                                     100%  209    14.5KB/s   00:00    
m_10_1.m                                      100%  723    60.2KB/s   00:00    
m_7_11.m                                      100%  628    51.9KB/s   00:00    
m_14_5.m                                      100%  759    64.9KB/s   00:00    
m_11_14.m                                     100%  209    18.8KB/s   00:00    
m_22_4.m                                      100%  215    13.9KB/s   00:00    
m_10_10.m                                     100%  338    24.6KB/s   00:00    
m_17_2.m                                      100%  716    48.8KB/s   00:00    
m_5_13.m                                      100%  514    37.0KB/s   00:00    
m_5_3.m                                       100%    5     0.4KB/s   00:00    
m_10_19.m                                     100%  687    43.6KB/s   00:00    
m_14_17.m                                     100%  458    38.9KB/s   00:00    
m_3_22.m                                      100%  215    14.0KB/s   00:00    
m_13_20.m                                     100%  422    27.0KB/s   00:00    
m_23_6.m                                      100%  628    54.0KB/s   00:00    
m_7_7.m                                       100%    5     0.4KB/s   00:00    
m_20_20.m                                     100% 1456   117.8KB/s   00:00    
m_16_2.m                                      100%  232    17.5KB/s   00:00    
m_10_6.m                                      100%  118     9.5KB/s   00:00    
m_8_10.m                                      100%  232    18.7KB/s   00:00    
m_18_7.m                                      100%  215    17.8KB/s   00:00    
m_3_16.m                                      100%  199    17.2KB/s   00:00    
m_2_20.m                                      100%  628    42.6KB/s   00:00    
m_19_18.m                                     100%  596    49.9KB/s   00:00    
m_10_7.m                                      100%  232    19.2KB/s   00:00    
m_7_22.m                                      100%  628    55.9KB/s   00:00    
m_15_7.m                                      100% 1421   121.8KB/s   00:00    
m_4_4.m                                       100%    5     0.4KB/s   00:00    
m_1_16.m                                      100%  380    28.4KB/s   00:00    
m_3_8.m                                       100%    5     0.4KB/s   00:00    
m_14_9.m                                      100%  399    32.7KB/s   00:00    
m_10_24.m                                     100%  248    15.8KB/s   00:00    
m_9_1.m                                       100%  465    36.7KB/s   00:00    
m_21_21.m                                     100%  422    30.9KB/s   00:00    
m_13_3.m                                      100%  380    30.4KB/s   00:00    
m_12_7.m                                      100%  199    16.8KB/s   00:00    
m_3_4.m                                       100%    5     0.4KB/s   00:00    
m_22_16.m                                     100%  687    43.1KB/s   00:00    
m_10_3.m                                      100%  671    54.8KB/s   00:00    
m_6_4.m                                       100%    5     0.3KB/s   00:00    
m_10_20.m                                     100%  687    42.5KB/s   00:00    
m_12_12.m                                     100% 1456    94.8KB/s   00:00    
m_8_9.m                                       100%  380    24.9KB/s   00:00    
m_22_20.m                                     100%  209    15.3KB/s   00:00    
m_16_7.m                                      100%  628    48.9KB/s   00:00    
m_5_1.m                                       100%    5     0.3KB/s   00:00    
m_9_6.m                                       100%  425    25.6KB/s   00:00    
m_12_22.m                                     100%  248    15.1KB/s   00:00    
m_11_9.m                                      100%  624    41.4KB/s   00:00    
m_22_10.m                                     100%  126     6.6KB/s   00:00    
m_10_2.m                                      100%  355    22.6KB/s   00:00    
m_17_20.m                                     100%  624    44.3KB/s   00:00    
m_8_13.m                                      100%  951    60.1KB/s   00:00    
m_11_1.m                                      100%  746    54.2KB/s   00:00    
m_15_17.m                                     100%  422    34.5KB/s   00:00    
m_8_24.m                                      100% 1418    91.1KB/s   00:00    
m_23_13.m                                     100%  995    65.1KB/s   00:00    
m_11_19.m                                     100% 1670   111.4KB/s   00:00    
m_23_19.m                                     100%  596    44.6KB/s   00:00    
m_17_12.m                                     100%  766    57.3KB/s   00:00    
m_20_15.m                                     100%  232    14.7KB/s   00:00    
m_16_16.m                                     100% 1321    78.4KB/s   00:00    
m_3_21.m                                      100%  380    27.1KB/s   00:00    
m_13_13.m                                     100%  422    30.4KB/s   00:00    
m_12_8.m                                      100%  631    40.2KB/s   00:00    
m_2_7.m                                       100%    5     0.3KB/s   00:00    
m_12_4.m                                      100% 1582    96.0KB/s   00:00    
m_19_5.m                                      100%  380    21.3KB/s   00:00    
m_12_2.m                                      100%  671    35.5KB/s   00:00    
m_7_20.m                                      100%  199    13.4KB/s   00:00    
m_4_6.m                                       100%    5     0.3KB/s   00:00    
m_24_23.m                                     100%  596    33.5KB/s   00:00    
m_3_1.m                                       100%    5     0.3KB/s   00:00    
m_15_15.m                                     100% 1324    94.0KB/s   00:00    
m_8_18.m                                      100%  215    10.8KB/s   00:00    
m_2_14.m                                      100%  118     7.6KB/s   00:00    
m_3_17.m                                      100%  746    39.9KB/s   00:00    
m_2_4.m                                       100%    5     0.3KB/s   00:00    
m_5_23.m                                      100%  951    66.0KB/s   00:00    
m_2_12.m                                      100%  671    41.6KB/s   00:00    
m_23_9.m                                      100%  422    23.4KB/s   00:00    
m_7_5.m                                       100%    5     0.3KB/s   00:00    
m_7_9.m                                       100%  380    21.5KB/s   00:00    
m_1_5.m                                       100%    5     0.3KB/s   00:00    
m_3_3.m                                       100%    5     0.3KB/s   00:00    
m_5_14.m                                      100%  759    57.6KB/s   00:00    
m_3_14.m                                      100%  232    15.0KB/s   00:00    
m_17_23.m                                     100%  335    16.7KB/s   00:00    
m_15_10.m                                     100%  209    13.3KB/s   00:00    
m_1_17.m                                      100%  465    32.8KB/s   00:00    
m_16_4.m                                      100%  631    37.4KB/s   00:00    
m_6_5.m                                       100%    5     0.0KB/s   00:04    
m_24_1.m                                      100%  380    26.0KB/s   00:00    
m_24_5.m                                      100%  951    48.9KB/s   00:00    
m_2_22.m                                      100%  108     7.0KB/s   00:00    
m_22_15.m                                     100%  687    35.8KB/s   00:00    
m_4_10.m                                      100%  671    44.5KB/s   00:00    
m_20_16.m                                     100%  690    43.3KB/s   00:00    
m_6_10.m                                      100%  118     6.9KB/s   00:00    
m_14_11.m                                     100%  209    13.4KB/s   00:00    
m_4_12.m                                      100% 1582   120.9KB/s   00:00    
m_6_17.m                                      100%  425    25.9KB/s   00:00    
m_20_19.m                                     100%  596    41.4KB/s   00:00    
m_5_7.m                                       100%    5     0.3KB/s   00:00    
m_19_16.m                                     100%  232    15.1KB/s   00:00    
m_18_24.m                                     100%  209    13.5KB/s   00:00    
m_18_8.m                                      100%  215    15.1KB/s   00:00    
m_9_17.m                                      100%  455    30.7KB/s   00:00    
m_15_13.m                                     100%  813    44.5KB/s   00:00    
m_21_10.m                                     100%  458    25.4KB/s   00:00    
m_10_12.m                                     100%  596    38.8KB/s   00:00    
m_12_11.m                                     100%  596    41.9KB/s   00:00    
m_23_18.m                                     100%  209    13.6KB/s   00:00    
m_7_23.m                                      100% 1421    92.2KB/s   00:00    
m_16_22.m                                     100%  687    44.5KB/s   00:00    
saraditsch@Saras-MacBook-Pro ~ % cd Desktop 
saraditsch@Saras-MacBook-Pro Desktop % 
saraditsch@Saras-MacBook-Pro Desktop % ls
HiWi TUM
MasterTUM
Reimbursement TUM
Scattering Amplitudes Einarbeitungsphase
Uncertainty
Workshop
Wtt
antragsformular_akteneinsicht.pdf
calc_MM
saraditsch@Saras-MacBook-Pro Desktop % ls
HiWi TUM
MasterTUM
Reimbursement TUM
Scattering Amplitudes Einarbeitungsphase
Uncertainty
Workshop
Wtt
antragsformular_akteneinsicht.pdf
saraditsch@Saras-MacBook-Pro Desktop % Wtt/Tensordecomposition\ and\ Wbb/Form_ttW
zsh: permission denied: Wtt/Tensordecomposition and Wbb/Form_ttW
saraditsch@Saras-MacBook-Pro Desktop % cd Wtt/Tensordecomposition\ and\ Wbb/Form_ttW
saraditsch@Saras-MacBook-Pro Form_ttW % ls
Form_ttW.frm	Max		Philipp
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm 
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:06:58 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *massless fermions
    cfunction vbaru; 
    
    *massive fermions
    cfunction UbarV;
    
    *polarization
    cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
Form_ttW.frm Line 23 --> Undeclared variable p1
Form_ttW.frm Line 23 --> Undeclared variable p3
    global T1=eps(p1)*vbaru(p4)*UbarV;
Form_ttW.frm Line 24 --> Undeclared variable p4
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 2
    	global T'i'CC = T'i'
    #enddo
    
    id eps(p?) = epsC(p?);
Form_ttW.frm Line 24 --> Illegal position for comma: ,global,T2CC=T2,id,eps(p?)
=epsC(p?)
Form_ttW.frm Line 24 --> Forgotten ; ?
Form_ttW.frm Line 24 --> Undeclared variable global
Form_ttW.frm Line 24 --> Illegal position for comma: ,T2CC=T2,id,eps(p?)=epsC(p
?)
Form_ttW.frm Line 24 --> Forgotten ; ?
Form_ttW.frm Line 24 --> Undeclared variable T2CC
Form_ttW.frm Line 24 --> Illegal character at this position: =T2,id,eps(p?)=eps
C(p?)
Form_ttW.frm Line 24 --> Illegal position for T2
Form_ttW.frm Line 24 --> Undeclared variable T2
Form_ttW.frm Line 24 --> Illegal position for comma: ,id,eps(p?)=epsC(p?)
Form_ttW.frm Line 24 --> Forgotten ; ?
Form_ttW.frm Line 24 --> Undeclared variable id
Form_ttW.frm Line 24 --> Illegal position for comma: ,eps(p?)=epsC(p?)
Form_ttW.frm Line 24 --> Forgotten ; ?
Form_ttW.frm Line 24 --> Illegal character at this position: ?)=epsC(p?)
Form_ttW.frm Line 24 --> Illegal character at this position: =epsC(p?)
Form_ttW.frm Line 24 --> Illegal position for epsC
Form_ttW.frm Line 24 --> Undeclared variable epsC
Form_ttW.frm Line 24 --> Illegal character at this position: ?)
    id vbaru(p?) = vbaruC(p?);
Form_ttW.frm Line 35 --> Undeclared variable vbaruC
Form_ttW.frm Line 35 --> Illegal character at this position: ?)
    id UbarV = UbarVC;
Form_ttW.frm Line 36 --> Undeclared variable UbarVC
    id UbarV(p?) = UbarVC(p?);
Form_ttW.frm Line 37 --> Illegal character at this position: ?)
    id UbarV(p1?,p2?) = UbarVC(p2?,p1?);
Form_ttW.frm Line 38 --> Undeclared variable p2
Form_ttW.frm Line 38 --> Illegal character at this position: ?,p1?)
Form_ttW.frm Line 38 --> Illegal character at this position: ?)
    
    Print;
    .end
Program terminating at Form_ttW.frm Line 40 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:08:47 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *massless fermions
    cfunction vbaru; 
    
    *massive fermions
    cfunction UbarV;
    
    *polarization
    cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
Form_ttW.frm Line 23 --> Undeclared variable p1
Form_ttW.frm Line 23 --> Undeclared variable p3
    global T1=eps(p1)*vbaru(p4)*UbarV;
Form_ttW.frm Line 24 --> Undeclared variable p4
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 2
    	global T'i'CC = T'i'
    #enddo
    
    id eps(p?) = epsC(p?);
Form_ttW.frm Line 24 --> Illegal position for comma: ,global,T2CC=T2,id,eps(p?)
=epsC(p?)
Form_ttW.frm Line 24 --> Forgotten ; ?
Form_ttW.frm Line 24 --> Undeclared variable global
Form_ttW.frm Line 24 --> Illegal position for comma: ,T2CC=T2,id,eps(p?)=epsC(p
?)
Form_ttW.frm Line 24 --> Forgotten ; ?
Form_ttW.frm Line 24 --> Undeclared variable T2CC
Form_ttW.frm Line 24 --> Illegal character at this position: =T2,id,eps(p?)=eps
C(p?)
Form_ttW.frm Line 24 --> Illegal position for T2
Form_ttW.frm Line 24 --> Undeclared variable T2
Form_ttW.frm Line 24 --> Illegal position for comma: ,id,eps(p?)=epsC(p?)
Form_ttW.frm Line 24 --> Forgotten ; ?
Form_ttW.frm Line 24 --> Undeclared variable id
Form_ttW.frm Line 24 --> Illegal position for comma: ,eps(p?)=epsC(p?)
Form_ttW.frm Line 24 --> Forgotten ; ?
Form_ttW.frm Line 24 --> Illegal character at this position: ?)=epsC(p?)
Form_ttW.frm Line 24 --> Illegal character at this position: =epsC(p?)
Form_ttW.frm Line 24 --> Illegal position for epsC
Form_ttW.frm Line 24 --> Undeclared variable epsC
Form_ttW.frm Line 24 --> Illegal character at this position: ?)
    id vbaru(p?) = vbaruC(p?);
Form_ttW.frm Line 38 --> Undeclared variable vbaruC
Form_ttW.frm Line 38 --> Illegal character at this position: ?)
    id UbarV = UbarVC;
Form_ttW.frm Line 39 --> Undeclared variable UbarVC
    id UbarV(p?) = UbarVC(p?);
Form_ttW.frm Line 40 --> Illegal character at this position: ?)
    id UbarV(p1?,p2?) = UbarVC(p2?,p1?);
Form_ttW.frm Line 41 --> Undeclared variable p2
Form_ttW.frm Line 41 --> Illegal character at this position: ?,p1?)
Form_ttW.frm Line 41 --> Illegal character at this position: ?)
    
    Print;
    .end
Program terminating at Form_ttW.frm Line 43 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:09:17 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *massless fermions
    cfunction vbaru; 
    
    *massive fermions
    cfunction UbarV;
    
    *polarization
    cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
Form_ttW.frm Line 23 --> Undeclared variable p1
Form_ttW.frm Line 23 --> Undeclared variable p3
    global T1=eps(p1)*vbaru(p4)*UbarV;
Form_ttW.frm Line 24 --> Undeclared variable p4
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 2
    	global T'i'CC = T'i' ;
    #enddo
Form_ttW.frm Line 34 --> Undeclared variable T2
++++Errors in Loop
    
    id eps(p?) = epsC(p?);
Form_ttW.frm Line 37 --> Undeclared variable epsC
Form_ttW.frm Line 37 --> Illegal character at this position: ?)
    id vbaru(p?) = vbaruC(p?);
Form_ttW.frm Line 38 --> Undeclared variable vbaruC
Form_ttW.frm Line 38 --> Illegal character at this position: ?)
    id UbarV = UbarVC;
Form_ttW.frm Line 39 --> Undeclared variable UbarVC
    id UbarV(p?) = UbarVC(p?);
Form_ttW.frm Line 40 --> Illegal character at this position: ?)
    id UbarV(p1?,p2?) = UbarVC(p2?,p1?);
Form_ttW.frm Line 41 --> Undeclared variable p2
Form_ttW.frm Line 41 --> Illegal character at this position: ?,p1?)
Form_ttW.frm Line 41 --> Illegal character at this position: ?)
    
    Print;
    .end
Program terminating at Form_ttW.frm Line 43 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:10:14 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *massless fermions
    cfunction vbaru; 
    
    *massive fermions
    cfunction UbarV;
    
    *polarization
    cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
Form_ttW.frm Line 23 --> Undeclared variable p1
Form_ttW.frm Line 23 --> Undeclared variable p3
    global T2=eps(p1)*vbaru(p4)*UbarV;
Form_ttW.frm Line 24 --> Undeclared variable p4
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 2
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p?);
Form_ttW.frm Line 37 --> Undeclared variable epsC
Form_ttW.frm Line 37 --> Illegal character at this position: ?)
    id vbaru(p?) = vbaruC(p?);
Form_ttW.frm Line 38 --> Undeclared variable vbaruC
Form_ttW.frm Line 38 --> Illegal character at this position: ?)
    id UbarV = UbarVC;
Form_ttW.frm Line 39 --> Undeclared variable UbarVC
    id UbarV(p?) = UbarVC(p?);
Form_ttW.frm Line 40 --> Illegal character at this position: ?)
    id UbarV(p1?,p2?) = UbarVC(p2?,p1?);
Form_ttW.frm Line 41 --> Undeclared variable p2
Form_ttW.frm Line 41 --> Illegal character at this position: ?,p1?)
Form_ttW.frm Line 41 --> Illegal character at this position: ?)
    
    Print;
    .end
Program terminating at Form_ttW.frm Line 43 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:11:19 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 2
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p?);
Form_ttW.frm Line 37 --> Illegal character at this position: ?)
    id vbaru(p?) = vbaruC(p?);
Form_ttW.frm Line 38 --> Illegal character at this position: ?)
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p?);
Form_ttW.frm Line 40 --> Illegal character at this position: ?)
    id UbarV(p1?,p2?) = UbarVC(p2?,p1?);
Form_ttW.frm Line 41 --> Illegal character at this position: ?,p1?)
Form_ttW.frm Line 41 --> Illegal character at this position: ?)
    
    Print;
    .end
Program terminating at Form_ttW.frm Line 43 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:13:58 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 2
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps( p? ) = epsC( p? );
Form_ttW.frm Line 37 --> Illegal character at this position: ?)
    id vbaru(p?) = vbaruC(p?);
Form_ttW.frm Line 38 --> Illegal character at this position: ?)
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p?);
Form_ttW.frm Line 40 --> Illegal character at this position: ?)
    id UbarV(p1?,p2?) = UbarVC(p2?,p1?);
Form_ttW.frm Line 41 --> Illegal character at this position: ?,p1?)
Form_ttW.frm Line 41 --> Illegal character at this position: ?)
    
    Print;
    .end
Program terminating at Form_ttW.frm Line 43 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:16:29 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 2
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    Print;
    .end

   T1CC =
      epsC(p1)*vbaruC(p3)*UbarVC;

   T2CC =
      epsC(p1)*vbaruC(p4)*UbarVC;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:21:33 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		T'i'*T'j'CC;
Form_ttW.frm Line 53 --> Unrecognized statement
    	#enddo
++++Errors in Loop
    #enddo
++++Errors in Loop
    
    Print;
    .end	
Program terminating at Form_ttW.frm Line 57 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:23:35 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .end	

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p1)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p1)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p4)*UbarVC;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:40:59 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = g_(1,p2,p);
Form_ttW.frm Line 61 --> Illegal object in tensor
Form_ttW.frm Line 61 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 62 --> Illegal object in tensor
Form_ttW.frm Line 62 --> Illegal object in tensor
    id UbarV = g_(2,p3)+mt*gi_(2);
Form_ttW.frm Line 63 --> Undeclared variable mt
    id UbarVC = g_(2,p4)-mt*gi_(2);
Form_ttW.frm Line 64 --> Illegal object in tensor
    id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 65 --> Illegal object in tensor
    id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 66 --> Illegal object in tensor
    id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 67 --> Illegal object in tensor
    id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 68 --> Illegal object in tensor
    
    .sort
    
    trace4, 1;
    trace4, 2:
    
    
    Print;
Form_ttW.frm Line 73 --> Last argument of Trace4 should be an index
    .end	
Program terminating at Form_ttW.frm Line 73 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:41:37 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = g_(1,p2,p);
Form_ttW.frm Line 61 --> Illegal object in tensor
Form_ttW.frm Line 61 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 62 --> Illegal object in tensor
Form_ttW.frm Line 62 --> Illegal object in tensor
    id UbarV = g_(2,p3)+mt*gi_(2);
Form_ttW.frm Line 63 --> Undeclared variable mt
    id UbarVC = g_(2,p4)-mt*gi_(2);
Form_ttW.frm Line 64 --> Illegal object in tensor
    id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 65 --> Illegal object in tensor
    id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 66 --> Illegal object in tensor
    id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 67 --> Illegal object in tensor
    id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 68 --> Illegal object in tensor
    
    .sort
    
    Trace4, 1;
    Trace4, 2:
    
    
    Print;
Form_ttW.frm Line 73 --> Last argument of Trace4 should be an index
    .end	
Program terminating at Form_ttW.frm Line 73 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:41:51 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = g_(1,p2,p);
Form_ttW.frm Line 61 --> Illegal object in tensor
Form_ttW.frm Line 61 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 62 --> Illegal object in tensor
Form_ttW.frm Line 62 --> Illegal object in tensor
    id UbarV = g_(2,p3)+mt*gi_(2);
Form_ttW.frm Line 63 --> Undeclared variable mt
    id UbarVC = g_(2,p4)-mt*gi_(2);
Form_ttW.frm Line 64 --> Illegal object in tensor
    id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 65 --> Illegal object in tensor
    id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 66 --> Illegal object in tensor
    id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 67 --> Illegal object in tensor
    id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 68 --> Illegal object in tensor
    
    .sort
    
    Trace4 1;
    Trace4 2:
    
    
    Print;
Form_ttW.frm Line 73 --> Last argument of Trace4 should be an index
    .end	
Program terminating at Form_ttW.frm Line 73 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:42:48 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = g_(1,p2,p);
Form_ttW.frm Line 64 --> Illegal object in tensor
Form_ttW.frm Line 64 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 65 --> Illegal object in tensor
Form_ttW.frm Line 65 --> Illegal object in tensor
    id UbarV = g_(2,p3)+mt*gi_(2);
Form_ttW.frm Line 66 --> Illegal object in tensor
    id UbarVC = g_(2,p4)-mt*gi_(2);
Form_ttW.frm Line 67 --> Illegal object in tensor
    id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 68 --> Illegal object in tensor
    id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 69 --> Illegal object in tensor
    id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 70 --> Illegal object in tensor
    id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 71 --> Illegal object in tensor
    
    .sort
    
    Trace4 1;
    Trace4 2:
    
    
    Print;
Form_ttW.frm Line 76 --> Last argument of Trace4 should be an index
    .end	
Program terminating at Form_ttW.frm Line 76 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:45:08 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = (g_(1,p2,p));
Form_ttW.frm Line 64 --> Illegal object in tensor
Form_ttW.frm Line 64 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 65 --> Illegal object in tensor
Form_ttW.frm Line 65 --> Illegal object in tensor
    id UbarV = g_(2,p3)+mt*gi_(2);
Form_ttW.frm Line 66 --> Illegal object in tensor
    id UbarVC = g_(2,p4)-mt*gi_(2);
Form_ttW.frm Line 67 --> Illegal object in tensor
    id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 68 --> Illegal object in tensor
    id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 69 --> Illegal object in tensor
    id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 70 --> Illegal object in tensor
    id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 71 --> Illegal object in tensor
    
    .sort
    
    Trace4 1;
    Trace4 2:
    
    
    Print;
Form_ttW.frm Line 76 --> Last argument of Trace4 should be an index
    .end	
Program terminating at Form_ttW.frm Line 76 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:50:02 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    
    
    
    Print;
    .end	

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p1)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p1)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p4)*UbarVC;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:53:04 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = g_(1,p2,p);
Form_ttW.frm Line 64 --> Illegal object in tensor
Form_ttW.frm Line 64 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 65 --> Illegal object in tensor
Form_ttW.frm Line 65 --> Illegal object in tensor
    
    
    .sort
    
    Trace4 1;
    Trace4 2:
    
    
    Print;
Form_ttW.frm Line 71 --> Last argument of Trace4 should be an index
    .end	
Program terminating at Form_ttW.frm Line 71 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 16:55:34 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = g_(1,p2,p);
Form_ttW.frm Line 64 --> Illegal object in tensor
Form_ttW.frm Line 64 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 65 --> Illegal object in tensor
Form_ttW.frm Line 65 --> Illegal object in tensor
    id UbarV = g_(2,p3)+mt*gi_(2);
Form_ttW.frm Line 66 --> Illegal object in tensor
    id UbarVC = g_(2,p4)-mt*gi_(2);
Form_ttW.frm Line 67 --> Illegal object in tensor
    id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 68 --> Illegal object in tensor
    id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 69 --> Illegal object in tensor
    id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 70 --> Illegal object in tensor
    id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 71 --> Illegal object in tensor
    
    
    Print;
    .end	
Program terminating at Form_ttW.frm Line 74 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:01:24 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    
    
    *** polarisation sum ***
    
    id eps(pi?)*epsC(pi?)= - pi^2 + (p5*pi)^2/mw^2
    id eps(pi?)*epsC(pj?)=  (p5*pi)(p5*pi)/mw^2
    
    Print;
Form_ttW.frm Line 68 --> Illegal position for comma: ,id,eps(pi?)*epsC(pj?)=(p5
*pi)(p5*pi)/mw^2,Print
Form_ttW.frm Line 68 --> Forgotten ; ?
Form_ttW.frm Line 68 --> Undeclared variable id
Form_ttW.frm Line 68 --> Illegal position for comma: ,eps(pi?)*epsC(pj?)=(p5*pi
)(p5*pi)/mw^2,Print
Form_ttW.frm Line 68 --> Forgotten ; ?
Form_ttW.frm Line 68 --> Illegal character at this position: ?)*epsC(pj?)=(p5*p
i)(p5*pi)/mw^2,Print
Form_ttW.frm Line 68 --> Illegal character at this position: ?)=(p5*pi)(p5*pi)/
mw^2,Print
Form_ttW.frm Line 68 --> Illegal character at this position: =(p5*pi)(p5*pi)/mw
^2,Print
Form_ttW.frm Line 68 --> Illegal position for comma: ,Print
Form_ttW.frm Line 68 --> Forgotten ; ?
Form_ttW.frm Line 68 --> Undeclared variable Print
    .end	
Program terminating at Form_ttW.frm Line 68 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:02:36 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    *id vbaruC(p?)= g_(1,p1,p);
    *id UbarV = g_(2,p3)+mt*gi_(2);
    *id UbarVC = g_(2,p4)-mt*gi_(2);
    *id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
    *id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
    *id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
    *id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
    
    *.sort
    
    *Trace4, 1;
    *Trace4, 2:
    
    *** polarisation sum ***
    
    id eps(pi?)*epsC(pi?)= - pi^2 + (p5*pi)^2/mw^2;
    id eps(pi?)*epsC(pj?)=  (p5*pi)(p5*pi)/mw^2;
Form_ttW.frm Line 81 --> Illegal position for (: (p5*pi)/mw^2
    
    Print;
    .end	
Program terminating at Form_ttW.frm Line 83 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:04:20 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    *id vbaruC(p?)= g_(1,p1,p);
    *id UbarV = g_(2,p3)+mt*gi_(2);
    *id UbarVC = g_(2,p4)-mt*gi_(2);
    *id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
    *id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
    *id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
    *id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
    
    *.sort
    
    *Trace4, 1;
    *Trace4, 2:
    
    *** polarisation sum ***
    
    id eps(pi?)*epsC(pi?)= - pi^2 + (p5*pi)^2/mw^2;
    id eps(pi?)*epsC(pj?)=  (p5*pi)*(p5*pj)/mw^2;
    
    Print;
    .end	

   MMatrixI1J1 =
       - p1^2*vbaru(p3)*UbarV*vbaruC(p3)*UbarVC + p1^2*vbaru(p3)*UbarV*vbaruC(
      p3)*UbarVC*p5^2*mw^-2;

   MMatrixI1J2 =
       - p1^2*vbaru(p3)*UbarV*vbaruC(p4)*UbarVC + p1^2*vbaru(p3)*UbarV*vbaruC(
      p4)*UbarVC*p5^2*mw^-2;

   MMatrixI2J1 =
       - p1^2*vbaru(p4)*UbarV*vbaruC(p3)*UbarVC + p1^2*vbaru(p4)*UbarV*vbaruC(
      p3)*UbarVC*p5^2*mw^-2;

   MMatrixI2J2 =
       - p1^2*vbaru(p4)*UbarV*vbaruC(p4)*UbarVC + p1^2*vbaru(p4)*UbarV*vbaruC(
      p4)*UbarVC*p5^2*mw^-2;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:04:59 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    .sort
    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    *id vbaruC(p?)= g_(1,p1,p);
    *id UbarV = g_(2,p3)+mt*gi_(2);
    *id UbarVC = g_(2,p4)-mt*gi_(2);
    *id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
    *id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
    *id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
    *id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
    
    *.sort
    
    *Trace4, 1;
    *Trace4, 2:
    
    *** polarisation sum ***
    
    id eps(pi?)*epsC(pi?)= (- pi^2 + (p5*pi)^2/mw^2);
    id eps(pi?)*epsC(pj?)=  (p5*pi)*(p5*pj)/mw^2;
    
    Print;
    .end	

   MMatrixI1J1 =
       - p1^2*vbaru(p3)*UbarV*vbaruC(p3)*UbarVC + p1^2*vbaru(p3)*UbarV*vbaruC(
      p3)*UbarVC*p5^2*mw^-2;

   MMatrixI1J2 =
       - p1^2*vbaru(p3)*UbarV*vbaruC(p4)*UbarVC + p1^2*vbaru(p3)*UbarV*vbaruC(
      p4)*UbarVC*p5^2*mw^-2;

   MMatrixI2J1 =
       - p1^2*vbaru(p4)*UbarV*vbaruC(p3)*UbarVC + p1^2*vbaru(p4)*UbarV*vbaruC(
      p3)*UbarVC*p5^2*mw^-2;

   MMatrixI2J2 =
       - p1^2*vbaru(p4)*UbarV*vbaruC(p4)*UbarVC + p1^2*vbaru(p4)*UbarV*vbaruC(
      p4)*UbarVC*p5^2*mw^-2;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:08:30 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p1)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p1)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p1)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    *id vbaruC(p?)= g_(1,p1,p);
    *id UbarV = g_(2,p3)+mt*gi_(2);
    *id UbarVC = g_(2,p4)-mt*gi_(2);
    *id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
    *id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
    *id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
    *id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
    
    *.sort
    
    *Trace4, 1;
    *Trace4, 2:
    
    *** polarisation sum ***
    
    id eps(pi?)*epsC(pi?)= (- pi^2 + (p5*pi)^2/mw^2);
    id eps(pi?)*epsC(pj?)=  (p5*pi)*(p5*pj)/mw^2;
    
    Print;
    .end	

   MMatrixI1J1 =
       - p1^2*vbaru(p3)*UbarV*vbaruC(p3)*UbarVC + p1^2*vbaru(p3)*UbarV*vbaruC(
      p3)*UbarVC*p5^2*mw^-2;

   MMatrixI1J2 =
       - p1^2*vbaru(p3)*UbarV*vbaruC(p4)*UbarVC + p1^2*vbaru(p3)*UbarV*vbaruC(
      p4)*UbarVC*p5^2*mw^-2;

   MMatrixI2J1 =
       - p1^2*vbaru(p4)*UbarV*vbaruC(p3)*UbarVC + p1^2*vbaru(p4)*UbarV*vbaruC(
      p3)*UbarVC*p5^2*mw^-2;

   MMatrixI2J2 =
       - p1^2*vbaru(p4)*UbarV*vbaruC(p4)*UbarVC + p1^2*vbaru(p4)*UbarV*vbaruC(
      p4)*UbarVC*p5^2*mw^-2;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:09:04 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    *id vbaruC(p?)= g_(1,p1,p);
    *id UbarV = g_(2,p3)+mt*gi_(2);
    *id UbarVC = g_(2,p4)-mt*gi_(2);
    *id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
    *id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
    *id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
    *id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
    
    *.sort
    
    *Trace4, 1;
    *Trace4, 2:
    
    *** polarisation sum ***
    
    id eps(pi?)*epsC(pi?)= (- pi^2 + (p5*pi)^2/mw^2);
    id eps(pi?)*epsC(pj?)=  (p5*pi)*(p5*pj)/mw^2;
    
    Print;
    .end	

   MMatrixI1J1 =
       - p1^2*vbaru(p3)*UbarV*vbaruC(p3)*UbarVC + p1^2*vbaru(p3)*UbarV*vbaruC(
      p3)*UbarVC*p5^2*mw^-2;

   MMatrixI1J2 =
      p1*vbaru(p3)*UbarV*vbaruC(p4)*UbarVC*p2*p5^2*mw^-2;

   MMatrixI2J1 =
      p1*vbaru(p4)*UbarV*vbaruC(p3)*UbarVC*p2*p5^2*mw^-2;

   MMatrixI2J2 =
       - vbaru(p4)*UbarV*vbaruC(p4)*UbarVC*p2^2 + vbaru(p4)*UbarV*vbaruC(p4)*
      UbarVC*p2^2*p5^2*mw^-2;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:10:35 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    *id vbaruC(p?)= g_(1,p1,p);
    *id UbarV = g_(2,p3)+mt*gi_(2);
    *id UbarVC = g_(2,p4)-mt*gi_(2);
    *id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
    *id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
    *id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
    *id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
    
    *.sort
    
    *Trace4, 1;
    *Trace4, 2:
    
    *** polarisation sum ***
    
    id eps(pi?)*epsC(pi?)= (- pi^2 + (p5.pi)^2/mw^2);
Form_ttW.frm Line 81 --> Illegal second element in dotproduct
    id eps(pi?)*epsC(pj?)=  (p5.pi)*(p5.pj)/mw^2;
Form_ttW.frm Line 82 --> Illegal second element in dotproduct
Form_ttW.frm Line 82 --> Illegal second element in dotproduct
    
    Print;
    .end	
Program terminating at Form_ttW.frm Line 84 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:11:19 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = g_(1,p2,p); 
Form_ttW.frm Line 65 --> Illegal object in tensor
Form_ttW.frm Line 65 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 66 --> Illegal object in tensor
Form_ttW.frm Line 66 --> Illegal object in tensor
    id UbarV = g_(2,p3)+mt*gi_(2);
Form_ttW.frm Line 67 --> Illegal object in tensor
    id UbarVC = g_(2,p4)-mt*gi_(2);
Form_ttW.frm Line 68 --> Illegal object in tensor
    id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 69 --> Illegal object in tensor
    id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 70 --> Illegal object in tensor
    id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 71 --> Illegal object in tensor
    id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 72 --> Illegal object in tensor
    
    .sort
    
    Trace4, 1;
    Trace4, 2:
    
    *** polarisation sum ***
    
    *id eps(pi?)*epsC(pi?)= (- pi^2 + (p5.pi)^2/mw^2);
    *id eps(pi?)*epsC(pj?)=  (p5.pi)*(p5.pj)/mw^2;
    
    Print;
Form_ttW.frm Line 77 --> Last argument of Trace4 should be an index
    .end	
Program terminating at Form_ttW.frm Line 77 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % 
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:12:38 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    id vbaru(sara?) = g_(1,p2,p); 
Form_ttW.frm Line 65 --> Undeclared variable sara
Form_ttW.frm Line 65 --> Illegal object in tensor
Form_ttW.frm Line 65 --> Illegal object in tensor
    id vbaruC(p?)= g_(1,p1,p);
Form_ttW.frm Line 66 --> Illegal object in tensor
Form_ttW.frm Line 66 --> Illegal object in tensor
    id UbarV = g_(2,p3)+mt*gi_(2);
Form_ttW.frm Line 67 --> Illegal object in tensor
    id UbarVC = g_(2,p4)-mt*gi_(2);
Form_ttW.frm Line 68 --> Illegal object in tensor
    id UbarV(p?) = (g_(2,p3)+mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 69 --> Illegal object in tensor
    id UbarVC(p?) = (g_(2,p4)-mt*gi_(2))*g_(2,p);
Form_ttW.frm Line 70 --> Illegal object in tensor
    id UbarV(pi?,pj?) = (g_(2,p3)+mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 71 --> Illegal object in tensor
    id UbarVC(pi?,pj?) = (g_(2,p4)-mt*gi_(2))*g_(2,pi,pj);
Form_ttW.frm Line 72 --> Illegal object in tensor
    
    .sort
    
    Trace4, 1;
    Trace4, 2:
    
    *** polarisation sum ***
    
    *id eps(pi?)*epsC(pi?)= (- pi^2 + (p5.pi)^2/mw^2);
    *id eps(pi?)*epsC(pj?)=  (p5.pi)*(p5.pj)/mw^2;
    
    Print;
Form_ttW.frm Line 77 --> Last argument of Trace4 should be an index
    .end	
Program terminating at Form_ttW.frm Line 77 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % 
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:14:01 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    id vbaru(p?) = g_(1,p2,p); 
Form_ttW.frm Line 65 --> Illegal object in tensor
Form_ttW.frm Line 65 --> Illegal object in tensor
    
    .end
Program terminating at Form_ttW.frm Line 65 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:15:25 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    index mu, nu;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    id vbaru(mu?) = g_(1,p2,mu); 
Form_ttW.frm Line 68 --> Illegal object in tensor
    .end
Program terminating at Form_ttW.frm Line 68 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:15:36 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    index mu, nu;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    id vbaru(mu?) = g_(1,nu,mu); 
    .end
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:16:04 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    index mu, nu;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    *id vbaru(p?) = g_(1,p2,p); 
    id vbaru(p?) = g_(1,nu,p); 
Form_ttW.frm Line 68 --> Illegal object in tensor
    .end
Program terminating at Form_ttW.frm Line 68 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:22:21 2022
    off statistics;
    
    *** Preliminary definitions ***
    
    *length tensors
    #define lengthT "2"
    
    *massless fermions
    autodeclare cfunction vbaru; 
    
    *massive fermions
    autodeclare cfunction UbarV;
    
    *polarization
    autodeclare cfunction eps
    
    *momenta
    autodeclare vector p;
    
    *masses
    autodeclare symbol m;
    
    index mu, nu;
    
    .global
    
    
    
    *** Define Tensors ***
    
    global T1=eps(p1)*vbaru(p3)*UbarV;
    global T2=eps(p2)*vbaru(p4)*UbarV;
    
    .store
    .sort
    
    
    
    *** Complex Conjugate Tensors ***
    
    #do i=1, 'lengthT'
    	global T'i'CC = T'i' ;
    #enddo
    
    id eps(p?) = epsC(p);
    id vbaru(p?) = vbaruC(p);
    id UbarV = UbarVC;
    id UbarV(p?) = UbarVC(p);
    id UbarV(pi?,pj?) = UbarVC(pj,pi);
    
    .store
    .sort
    
    *** Compute Matrix elements ***
    
    #do i=1, 'lengthT'
    	#do j=1, 'lengthT'
    		global MMatrixI'i'J'j' = T'i'*T'j'CC ;
    	#enddo
    #enddo
    
    Print;
    .sort

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

    
    *** Fermion Spin Sum ***
    
    id vbaru(mu?) = g_(1,nu,mu)*p2(nu); 
    *id vbaru(p?) = g_(1,nu,p); 
    .end
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % 
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:23:09 2022
    #-

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:23:31 2022
    #-

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;


   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:24:21 2022
    #-

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;


   MMatrixI1J1 =
      g_(1,nu,mu)*eps(p1)*p3(mu)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC*p2(nu);

   MMatrixI1J2 =
      g_(1,nu,mu)*eps(p1)*p3(mu)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC*p2(nu);

   MMatrixI2J1 =
      g_(1,nu,mu)*eps(p2)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC*p2(nu)*p4(mu);

   MMatrixI2J2 =
      g_(1,nu,mu)*eps(p2)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC*p2(nu)*p4(mu);

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:25:03 2022
    #-

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;


   MMatrixI1J1 =
      g_(1,N1_?,N2_?)*eps(p1)*p3(N2_?)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC*p2(
      N1_?);

   MMatrixI1J2 =
      g_(1,N1_?,N2_?)*eps(p1)*p3(N2_?)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC*p2(
      N1_?);

   MMatrixI2J1 =
      g_(1,N1_?,N2_?)*eps(p2)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC*p2(N1_?)*p4(
      N2_?);

   MMatrixI2J2 =
      g_(1,N1_?,N2_?)*eps(p2)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC*p2(N1_?)*p4(
      N2_?);

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:26:11 2022
    #-

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;


   MMatrixI1J1 =
      4*eps(p1)*p3(N1_?)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC*p2(N1_?);

   MMatrixI1J2 =
      4*eps(p1)*p3(N1_?)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC*p2(N1_?);

   MMatrixI2J1 =
      4*eps(p2)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC*p2(N1_?)*p4(N1_?);

   MMatrixI2J2 =
      4*eps(p2)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC*p2(N1_?)*p4(N1_?);

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:27:08 2022
    #-

   MMatrixI1J1 =
      eps(p1)^2*vbaru(p3)^2*UbarV*UbarVC;

   MMatrixI1J2 =
      eps(p2)*eps(p1)*vbaru(p4)*vbaru(p3)*UbarV*UbarVC;

   MMatrixI2J1 =
      eps(p2)*eps(p1)*vbaru(p4)*vbaru(p3)*UbarV*UbarVC;

   MMatrixI2J2 =
      eps(p2)^2*vbaru(p4)^2*UbarV*UbarVC;


   MMatrixI1J1 =
      eps(p1)^2*vbaru(p3)^2*UbarV*UbarVC;

   MMatrixI1J2 =
      eps(p2)*eps(p1)*vbaru(p4)*vbaru(p3)*UbarV*UbarVC;

   MMatrixI2J1 =
      eps(p2)*eps(p1)*vbaru(p4)*vbaru(p3)*UbarV*UbarVC;

   MMatrixI2J2 =
      eps(p2)^2*vbaru(p4)^2*UbarV*UbarVC;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:28:14 2022
    #-

   MMatrixI1J1 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI1J2 =
      eps(p1)*vbaru(p3)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;

   MMatrixI2J1 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC;

   MMatrixI2J2 =
      eps(p2)*vbaru(p4)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC;


   MMatrixI1J1 =
      4*eps(p1)*p3(N1_?)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC*p2(N1_?);

   MMatrixI1J2 =
      4*eps(p1)*p3(N1_?)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC*p2(N1_?);

   MMatrixI2J1 =
      4*eps(p2)*UbarV*epsC(p1)*vbaruC(p3)*UbarVC*p2(N1_?)*p4(N1_?);

   MMatrixI2J2 =
      4*eps(p2)*UbarV*epsC(p2)*vbaruC(p4)*UbarVC*p2(N1_?)*p4(N1_?);

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:29:06 2022
    #-
Form_ttW.frm Line 31 --> Illegal position for p
Program terminating at Form_ttW.frm Line 31 --> 
  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:29:23 2022
    #-

   test =
      p1(mu)^2;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:29:35 2022
    #-

   test =
      p1(N1_?)^2;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:29:50 2022
    #-

   test =
      p1(N1_?)^2;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:30:36 2022
    #-

   test =
      p1(N1_?)^2;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % form Form_ttW.frm
FORM 4.3 (Dec  5 2022) 64-bits                   Run: Thu Dec 15 17:31:33 2022
    #-

   test =
      vecp1.vecp1;

  0.00 sec out of 0.00 sec
saraditsch@Saras-MacBook-Pro Form_ttW % noon
zsh: command not found: noon
saraditsch@Saras-MacBook-Pro Form_ttW % moon
zsh: command not found: moon
saraditsch@Saras-MacBook-Pro Form_ttW % nano test.frm





  UW PICO 5.09                     File: test.frm                     Modified  

autodeclare vector p;
index mu, nu;

local test = p1(mu)*p2(mu);

p;

.end 

























^G Get Help  ^O WriteOut  ^R Read File ^Y Prev Pg   ^K Cut Text  ^C Cur Pos   
^X Exit      ^J Justify   ^W Where is  ^V Next Pg   ^U UnCut Text^T To Spell  
