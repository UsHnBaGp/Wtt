#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(qq1*s));
id qq1*s = 1;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule2'==1
#write "calc module nr 2"
#do j=1,1
if (match(qq2*t));
id qq2*t = 1;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule3'==1
#write "calc module nr 3"
#do j=1,1
if (match(D*qq10));
id D*qq10 = 1 + 6*qq10;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule4'==1
#write "calc module nr 4"
#do j=1,1
if (match(D*qq11));
id D*qq11 = 1 + 7*qq11;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule5'==1
#write "calc module nr 5"
#do j=1,1
if (match(qq10*qq11));
id qq10*qq11 = -qq10 + qq11;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule6'==1
#write "calc module nr 6"
#do j=1,1
if (match(D*qq12));
id D*qq12 = 1/2 + (7*qq12)/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule7'==1
#write "calc module nr 7"
#do j=1,1
if (match(qq10*qq12));
id qq10*qq12 = qq10/5 - (2*qq12)/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule8'==1
#write "calc module nr 8"
#do j=1,1
if (match(qq11*qq12));
id qq11*qq12 = qq11/7 - (2*qq12)/7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule9'==1
#write "calc module nr 9"
#do j=1,1
if (match(D*qq13));
id D*qq13 = 1/3 + (8*qq13)/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule10'==1
#write "calc module nr 10"
#do j=1,1
if (match(qq10*qq13));
id qq10*qq13 = qq10/10 - (3*qq13)/10;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule11'==1
#write "calc module nr 11"
#do j=1,1
if (match(qq11*qq13));
id qq11*qq13 = qq11/13 - (3*qq13)/13;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule12'==1
#write "calc module nr 12"
#do j=1,1
if (match(qq12*qq13));
id qq12*qq13 = (2*qq12)/5 - (3*qq13)/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule13'==1
#write "calc module nr 13"
#do j=1,1
if (match(D*qq14));
id D*qq14 = 1/2 + (9*qq14)/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule14'==1
#write "calc module nr 14"
#do j=1,1
if (match(qq10*qq14));
id qq10*qq14 = qq10/3 - (2*qq14)/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule15'==1
#write "calc module nr 15"
#do j=1,1
if (match(qq11*qq14));
id qq11*qq14 = qq11/5 - (2*qq14)/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule16'==1
#write "calc module nr 16"
#do j=1,1
if (match(qq12*qq14));
id qq12*qq14 = -1/2*qq12 + qq14/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule17'==1
#write "calc module nr 17"
#do j=1,1
if (match(qq13*qq14));
id qq13*qq14 = (-3*qq13)/11 + (2*qq14)/11;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule18'==1
#write "calc module nr 18"
#do j=1,1
if (match(D*qq15));
id D*qq15 = 1/3 + (10*qq15)/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule19'==1
#write "calc module nr 19"
#do j=1,1
if (match(qq10*qq15));
id qq10*qq15 = qq10/8 - (3*qq15)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule20'==1
#write "calc module nr 20"
#do j=1,1
if (match(qq11*qq15));
id qq11*qq15 = qq11/11 - (3*qq15)/11;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule21'==1
#write "calc module nr 21"
#do j=1,1
if (match(qq12*qq15));
id qq12*qq15 = 2*qq12 - 3*qq15;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule22'==1
#write "calc module nr 22"
#do j=1,1
if (match(qq13*qq15));
id qq13*qq15 = -1/2*qq13 + qq15/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule23'==1
#write "calc module nr 23"
#do j=1,1
if (match(qq14*qq15));
id qq14*qq15 = (2*qq14)/7 - (3*qq15)/7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule24'==1
#write "calc module nr 24"
#do j=1,1
if (match(qq16*qq17));
id qq16*qq17 = -1/4*qq16 + qq17/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule25'==1
#write "calc module nr 25"
#do j=1,1
if (match(qq16*qq2));
id qq16*qq2 = -(qq1*qq16) + qq1*qq2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule26'==1
#write "calc module nr 26"
#do j=1,1
if (match(D*qq3));
id D*qq3 = 1 + qq3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule27'==1
#write "calc module nr 27"
#do j=1,1
if (match(qq10*qq3));
id qq10*qq3 = qq10/5 - qq3/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule28'==1
#write "calc module nr 28"
#do j=1,1
if (match(qq11*qq3));
id qq11*qq3 = qq11/6 - qq3/6;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule29'==1
#write "calc module nr 29"
#do j=1,1
if (match(qq12*qq3));
id qq12*qq3 = (2*qq12)/5 - qq3/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule30'==1
#write "calc module nr 30"
#do j=1,1
if (match(qq13*qq3));
id qq13*qq3 = (3*qq13)/5 - qq3/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule31'==1
#write "calc module nr 31"
#do j=1,1
if (match(qq14*qq3));
id qq14*qq3 = (2*qq14)/7 - qq3/7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule32'==1
#write "calc module nr 32"
#do j=1,1
if (match(qq15*qq3));
id qq15*qq3 = (3*qq15)/7 - qq3/7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule33'==1
#write "calc module nr 33"
#do j=1,1
if (match(D*qq4));
id D*qq4 = 1 + 2*qq4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule34'==1
#write "calc module nr 34"
#do j=1,1
if (match(qq10*qq4));
id qq10*qq4 = qq10/4 - qq4/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule35'==1
#write "calc module nr 35"
#do j=1,1
if (match(qq11*qq4));
id qq11*qq4 = qq11/5 - qq4/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule36'==1
#write "calc module nr 36"
#do j=1,1
if (match(qq12*qq4));
id qq12*qq4 = (2*qq12)/3 - qq4/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule37'==1
#write "calc module nr 37"
#do j=1,1
if (match(qq13*qq4));
id qq13*qq4 = (3*qq13)/2 - qq4/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule38'==1
#write "calc module nr 38"
#do j=1,1
if (match(qq14*qq4));
id qq14*qq4 = (2*qq14)/5 - qq4/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule39'==1
#write "calc module nr 39"
#do j=1,1
if (match(qq15*qq4));
id qq15*qq4 = (3*qq15)/4 - qq4/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule40'==1
#write "calc module nr 40"
#do j=1,1
if (match(qq3*qq4));
id qq3*qq4 = -qq3 + qq4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule41'==1
#write "calc module nr 41"
#do j=1,1
if (match(D*qq5));
id D*qq5 = 1 + 3*qq5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule42'==1
#write "calc module nr 42"
#do j=1,1
if (match(qq10*qq5));
id qq10*qq5 = qq10/3 - qq5/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule43'==1
#write "calc module nr 43"
#do j=1,1
if (match(qq11*qq5));
id qq11*qq5 = qq11/4 - qq5/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule44'==1
#write "calc module nr 44"
#do j=1,1
if (match(qq12*qq5));
id qq12*qq5 = 2*qq12 - qq5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule45'==1
#write "calc module nr 45"
#do j=1,1
if (match(qq13*qq5));
id qq13*qq5 = -3*qq13 + qq5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule46'==1
#write "calc module nr 46"
#do j=1,1
if (match(qq14*qq5));
id qq14*qq5 = (2*qq14)/3 - qq5/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule47'==1
#write "calc module nr 47"
#do j=1,1
if (match(qq15*qq5));
id qq15*qq5 = 3*qq15 - qq5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule48'==1
#write "calc module nr 48"
#do j=1,1
if (match(qq3*qq5));
id qq3*qq5 = -1/2*qq3 + qq5/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule49'==1
#write "calc module nr 49"
#do j=1,1
if (match(qq4*qq5));
id qq4*qq5 = -qq4 + qq5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule50'==1
#write "calc module nr 50"
#do j=1,1
if (match(D*qq6));
id D*qq6 = 1 + 4*qq6;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule51'==1
#write "calc module nr 51"
#do j=1,1
if (match(qq10*qq6));
id qq10*qq6 = qq10/2 - qq6/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule52'==1
#write "calc module nr 52"
#do j=1,1
if (match(qq11*qq6));
id qq11*qq6 = qq11/3 - qq6/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule53'==1
#write "calc module nr 53"
#do j=1,1
if (match(qq12*qq6));
id qq12*qq6 = -2*qq12 + qq6;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule54'==1
#write "calc module nr 54"
#do j=1,1
if (match(qq13*qq6));
id qq13*qq6 = (-3*qq13)/4 + qq6/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule55'==1
#write "calc module nr 55"
#do j=1,1
if (match(qq14*qq6));
id qq14*qq6 = 2*qq14 - qq6;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule56'==1
#write "calc module nr 56"
#do j=1,1
if (match(qq15*qq6));
id qq15*qq6 = (-3*qq15)/2 + qq6/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule57'==1
#write "calc module nr 57"
#do j=1,1
if (match(qq3*qq6));
id qq3*qq6 = -1/3*qq3 + qq6/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule58'==1
#write "calc module nr 58"
#do j=1,1
if (match(qq4*qq6));
id qq4*qq6 = -1/2*qq4 + qq6/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule59'==1
#write "calc module nr 59"
#do j=1,1
if (match(qq5*qq6));
id qq5*qq6 = -qq5 + qq6;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule60'==1
#write "calc module nr 60"
#do j=1,1
if (match(qq1*qq7));
id qq1*qq7 = -1/4*qq1 + qq7/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule61'==1
#write "calc module nr 61"
#do j=1,1
if (match(qq17*qq2));
id qq17*qq2 = -(qq17*qq7) + qq2*qq7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule62'==1
#write "calc module nr 62"
#do j=1,1
if (match(qq17*qq8));
id qq17*qq8 = -(qq1*qq17) + qq1*qq8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule63'==1
#write "calc module nr 63"
#do j=1,1
if (match(qq2*qq8));
id qq2*qq8 = -1/4*qq2 + qq8/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule64'==1
#write "calc module nr 64"
#do j=1,1
if (match(D*qq9));
id D*qq9 = 1 + 5*qq9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule65'==1
#write "calc module nr 65"
#do j=1,1
if (match(qq10*qq9));
id qq10*qq9 = qq10 - qq9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule66'==1
#write "calc module nr 66"
#do j=1,1
if (match(qq11*qq9));
id qq11*qq9 = qq11/2 - qq9/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule67'==1
#write "calc module nr 67"
#do j=1,1
if (match(qq12*qq9));
id qq12*qq9 = (-2*qq12)/3 + qq9/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule68'==1
#write "calc module nr 68"
#do j=1,1
if (match(qq13*qq9));
id qq13*qq9 = (-3*qq13)/7 + qq9/7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule69'==1
#write "calc module nr 69"
#do j=1,1
if (match(qq14*qq9));
id qq14*qq9 = -2*qq14 + qq9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule70'==1
#write "calc module nr 70"
#do j=1,1
if (match(qq15*qq9));
id qq15*qq9 = (-3*qq15)/5 + qq9/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule71'==1
#write "calc module nr 71"
#do j=1,1
if (match(qq3*qq9));
id qq3*qq9 = -1/4*qq3 + qq9/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule72'==1
#write "calc module nr 72"
#do j=1,1
if (match(qq4*qq9));
id qq4*qq9 = -1/3*qq4 + qq9/3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule73'==1
#write "calc module nr 73"
#do j=1,1
if (match(qq5*qq9));
id qq5*qq9 = -1/2*qq5 + qq9/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule74'==1
#write "calc module nr 74"
#do j=1,1
if (match(qq6*qq9));
id qq6*qq9 = -qq6 + qq9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule75'==1
#write "calc module nr 75"
#do j=1,1
if (match(qq7*s));
id qq7*s = 1 + 4*qq7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule76'==1
#write "calc module nr 76"
#do j=1,1
if (match(qq16*s));
id qq16*s = 1 - qq16*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule77'==1
#write "calc module nr 77"
#do j=1,1
if (match(qq1*qq16*t));
id qq1*qq16*t = qq1 - qq16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule78'==1
#write "calc module nr 78"
#do j=1,1
if (match(qq17*qq7*t));
id qq17*qq7*t = -qq17 + qq7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule79'==1
#write "calc module nr 79"
#do j=1,1
if (match(qq8*t));
id qq8*t = 1 + 4*qq8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule80'==1
#write "calc module nr 80"
#do j=1,1
if (match(qq1*qq16*qq8));
id qq1*qq16*qq8 = -1/4*(qq1*qq16) + (qq1*qq8)/4 - (qq16*qq8)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule81'==1
#write "calc module nr 81"
#do j=1,1
if (match(qq16*qq7*qq8));
id qq16*qq7*qq8 = -1/8*(qq16*qq7) - (qq16*qq8)/8 + (qq7*qq8)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule82'==1
#write "calc module nr 82"
#do j=1,1
if (match(qq17*s));
id qq17*s = 1 + 4*qq17 - qq17*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule83'==1
#write "calc module nr 83"
#do j=1,1
if (match(qq1*qq17*t));
id qq1*qq17*t = qq1 - qq17 + 4*qq1*qq17;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule84'==1
#write "calc module nr 84"
#do j=1,1
if (match(qq20*qq21*s));
id qq20*qq21*s = -1/4*(qq20*s) + (qq21*t)/4 + qq20*qq21*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule85'==1
#write "calc module nr 85"
#do j=1,1
if (match(qq16*qq7*t));
id qq16*qq7*t = -qq16 + qq7 - 4*qq16*qq7;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule86'==1
#write "calc module nr 86"
#do j=1,1
if (match(qq19*qq2));
id qq19*qq2 = qq19/4 - qq2/4 - (qq19*s)/2 + (qq19*s^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule87'==1
#write "calc module nr 87"
#do j=1,1
if (match(qq18*qq8*s));
id qq18*qq8*s = qq8/9 + (4*qq18*qq8)/9 - (2*qq18*s)/9 - (qq18*s*t)/9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule88'==1
#write "calc module nr 88"
#do j=1,1
if (match(qq1*qq19*t));
id qq1*qq19*t = qq1 + 4*qq1*qq19 + 2*qq19*t - qq19*s*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule89'==1
#write "calc module nr 89"
#do j=1,1
if (match(qq19*qq7*t));
id qq19*qq7*t = qq7/9 + (4*qq19*qq7)/9 - (2*qq19*t)/9 - (qq19*s*t)/9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule90'==1
#write "calc module nr 90"
#do j=1,1
if (match(qq17*qq18*qq19));
id qq17*qq18*qq19 = -1/4*(qq17*qq18) - (qq17*qq19)/4 + (qq18*qq19)/4 + (qq18*qq19*s*t)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule91'==1
#write "calc module nr 91"
#do j=1,1
if (match(qq19*s^2*t));
id qq19*s^2*t = 1 + 4*qq19 - qq19*t + 2*qq19*s*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule92'==1
#write "calc module nr 92"
#do j=1,1
if (match(qq1*qq18));
id qq1*qq18 = -1/4*qq1 + qq18/4 - (qq18*t)/2 + (qq18*t^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule93'==1
#write "calc module nr 93"
#do j=1,1
if (match(qq18*s*t^2));
id qq18*s*t^2 = 1 + 4*qq18 - qq18*s + 2*qq18*s*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule94'==1
#write "calc module nr 94"
#do j=1,1
if (match(qq1*qq19*qq8));
id qq1*qq19*qq8 = qq19/8 - (qq1*qq19)/4 + (qq1^2*qq19)/8 - (qq1^2*qq8)/8 + (qq19*qq8)/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule95'==1
#write "calc module nr 95"
#do j=1,1
if (match(qq19*qq8*s));
id qq19*qq8*s = qq19/2 - (qq1*qq19)/4 + (qq1*qq8)/4 + 2*qq19*qq8 - (qq19*s)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule96'==1
#write "calc module nr 96"
#do j=1,1
if (match(qq1*qq17*qq19));
id qq1*qq17*qq19 = -1/9*(qq1^2*qq17) - (2*qq1*qq19)/9 + (qq1^2*qq19)/9 + (2*qq17*qq19)/9 + (qq17*qq19*t)/9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule97'==1
#write "calc module nr 97"
#do j=1,1
if (match(qq18*qq2));
id qq18*qq2 = 2*qq18 + 8*qq18*qq7 + qq2*qq7 - qq18*t - 4*qq18*qq7*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule98'==1
#write "calc module nr 98"
#do j=1,1
if (match(qq17*qq18*t^2));
id qq17*qq18*t^2 = -9*qq17*qq18 + qq17*qq7 + 8*qq18*qq7 + 6*qq17*qq18*t - 4*qq18*qq7*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule99'==1
#write "calc module nr 99"
#do j=1,1
if (match(qq17*qq19*t^2));
id qq17*qq19*t^2 = -(qq1*qq17) + qq1*qq19 - qq17*qq19 + qq19*t + 2*qq17*qq19*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule100'==1
#write "calc module nr 100"
#do j=1,1
if (match(qq16*qq21*t));
id qq16*qq21*t = qq16/9 + (4*qq16*qq21)/9 + (2*qq21*t)/3 - (qq21*s*t)/9 - (qq21*t^2)/9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule101'==1
#write "calc module nr 101"
#do j=1,1
if (match(qq17*qq21));
id qq17*qq21 = -(qq1*qq17) + qq1*qq21 + qq21*t - 2*qq1*qq21*t + qq1*qq21*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule102'==1
#write "calc module nr 102"
#do j=1,1
if (match(qq18*qq7*t^2));
id qq18*qq7*t^2 = -1/4*qq18 + qq7/4 + (qq18*t)/2 + 2*qq18*qq7*t - (qq18*t^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule103'==1
#write "calc module nr 103"
#do j=1,1
if (match(qq19*qq7*qq8));
id qq19*qq7*qq8 = -1/8*qq19 + (qq1*qq19)/32 - (9*qq19*qq7)/32 - (qq1*qq8)/32 - (qq19*qq8)/2 + (qq7*qq8)/32;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule104'==1
#write "calc module nr 104"
#do j=1,1
if (match(qq16*qq20*qq8));
id qq16*qq20*qq8 = (-9*qq16*qq20)/40 - (qq16*qq8)/40 + (9*qq20*qq8)/40 + (qq20*s)/40 - (qq20*qq8*s)/20 + (qq20*qq8*s^2)/40;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule105'==1
#write "calc module nr 105"
#do j=1,1
if (match(qq17*qq19*qq7));
id qq17*qq19*qq7 = (qq1*qq17)/4 - (qq1*qq19)/4 - 2*qq17*qq19 - (qq17*qq7)/4 + (9*qq19*qq7)/4 + qq17*qq19*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule106'==1
#write "calc module nr 106"
#do j=1,1
if (match(qq18*qq7*qq8));
id qq18*qq7*qq8 = -1/16*qq18 - (qq18*qq7)/4 - (9*qq18*qq8)/32 + (qq7*qq8)/32 - (qq18*t)/32 - (qq18*qq7*t)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule107'==1
#write "calc module nr 107"
#do j=1,1
if (match(qq17*qq20));
id qq17*qq20 = -2*qq20 + qq17*qq7 - 8*qq20*qq7 - qq20*s - qq20*t - 4*qq20*qq7*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule108'==1
#write "calc module nr 108"
#do j=1,1
if (match(qq16*qq20*t));
id qq16*qq20*t = -1/9*qq16 + qq20 - (4*qq16*qq20)/9 - (2*qq20*s)/3 + (qq20*s^2)/9 + (qq20*s*t)/9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule109'==1
#write "calc module nr 109"
#do j=1,1
if (match(qq16*qq18*qq7));
id qq16*qq18*qq7 = (-25*qq16*qq18)/96 + (qq16*qq7)/96 + (qq18*qq7)/4 + (qq16*qq18*t)/16 - (qq18*qq7*t)/24 - (qq16*qq18*t^2)/96;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule110'==1
#write "calc module nr 110"
#do j=1,1
if (match(qq16*qq19*qq7));
id qq16*qq19*qq7 = (-9*qq16*qq19)/40 - (qq16*qq7)/40 + (9*qq19*qq7)/40 + (qq19*t)/40 + (qq16*qq19*t)/20 - (qq16*qq19*t^2)/40;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule111'==1
#write "calc module nr 111"
#do j=1,1
if (match(qq1*qq16*qq19));
id qq1*qq16*qq19 = -1/4*(qq1*qq16) + (qq1*qq19)/4 - (qq16*qq19)/4 + (qq19*t)/4 - (qq16*qq19*t)/2 - (qq16*qq19*t^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule112'==1
#write "calc module nr 112"
#do j=1,1
if (match(qq1*qq16*qq21));
id qq1*qq16*qq21 = -1/4*(qq1*qq16) + (9*qq1*qq21)/4 - (9*qq16*qq21)/4 + (qq21*t)/4 - (3*qq1*qq21*t)/2 + (qq1*qq21*t^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule113'==1
#write "calc module nr 113"
#do j=1,1
if (match(qq16*qq21*qq7));
id qq16*qq21*qq7 = (-9*qq16*qq21)/40 - (qq16*qq7)/40 + (9*qq21*qq7)/40 + (qq21*t)/40 - (qq21*qq7*t)/20 + (qq21*qq7*t^2)/40;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule114'==1
#write "calc module nr 114"
#do j=1,1
if (match(qq16*qq20*qq7));
id qq16*qq20*qq7 = qq20/16 - (9*qq16*qq20)/32 + (qq16*qq7)/32 + (qq20*qq7)/4 - (qq20*s)/32 - (qq20*t)/32 - (qq20*qq7*t)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule115'==1
#write "calc module nr 115"
#do j=1,1
if (match(qq17*qq18*qq7));
id qq17*qq18*qq7 = (-2*qq17*qq18)/3 + (2*qq18*qq7)/3 + (qq17*qq7^2)/9 + (8*qq18*qq7^2)/9 + (qq17*qq18*t)/9 - (qq18*qq7*t)/9 - (4*qq18*qq7^2*t)/9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule116'==1
#write "calc module nr 116"
#do j=1,1
if (match(qq16*qq18*qq8));
id qq16*qq18*qq8 = qq18/20 - (9*qq16*qq18)/40 - (qq16*qq8)/40 + (9*qq18*qq8)/40 + (qq18*t)/40 - (qq16*qq18*t)/20 - (qq16*qq18*t^2)/40;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule117'==1
#write "calc module nr 117"
#do j=1,1
if (match(qq18*qq19*s^2));
id qq18*qq19*s^2 = 2*qq18 - 2*qq19 + qq19*s + 6*qq18*qq19*s - qq18*t - 6*qq18*qq19*t + qq18*qq19*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule118'==1
#write "calc module nr 118"
#do j=1,1
if (match(qq1*qq20));
id qq1*qq20 = -1/4*qq1 + (9*qq20)/4 - (3*qq20*s)/2 + (qq20*s^2)/4 - (3*qq20*t)/2 + (qq20*s*t)/2 + (qq20*t^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule119'==1
#write "calc module nr 119"
#do j=1,1
if (match(qq2*qq21));
id qq2*qq21 = -1/4*qq2 + (9*qq21)/4 - (3*qq21*s)/2 + (qq21*s^2)/4 - (3*qq21*t)/2 + (qq21*s*t)/2 + (qq21*t^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule120'==1
#write "calc module nr 120"
#do j=1,1
if (match(qq20*s^3));
id qq20*s^3 = 1 + 4*qq20 - 9*qq20*s + 6*qq20*s^2 + 6*qq20*s*t - 2*qq20*s^2*t - qq20*s*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule121'==1
#write "calc module nr 121"
#do j=1,1
if (match(qq16*qq18*t^3));
id qq16*qq18*t^3 = -qq16 + qq18 - 4*qq16*qq18 - 2*qq18*t - qq16*qq18*t + qq18*t^2 + 2*qq16*qq18*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule122'==1
#write "calc module nr 122"
#do j=1,1
if (match(qq16*qq19*t^3));
id qq16*qq19*t^3 = qq16 + 4*qq16*qq19 + 2*qq19*t - qq16*qq19*t - qq19*s*t + qq19*t^2 - 2*qq16*qq19*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule123'==1
#write "calc module nr 123"
#do j=1,1
if (match(qq21*s^2*t));
id qq21*s^2*t = 1 + 4*qq21 - 9*qq21*t + 6*qq21*s*t + 6*qq21*t^2 - 2*qq21*s*t^2 - qq21*t^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule124'==1
#write "calc module nr 124"
#do j=1,1
if (match(qq1*qq21*t^3));
id qq1*qq21*t^3 = qq1 + 4*qq1*qq21 + 6*qq21*t - 9*qq1*qq21*t - qq21*s*t - 2*qq21*t^2 + 6*qq1*qq21*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule125'==1
#write "calc module nr 125"
#do j=1,1
if (match(qq21*qq7*t^3));
id qq21*qq7*t^3 = qq7 + 4*qq21*qq7 + 2*qq21*t - qq21*qq7*t - qq21*s*t - 2*qq21*t^2 - 2*qq21*qq7*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule126'==1
#write "calc module nr 126"
#do j=1,1
if (match(qq2*qq20*s^2));
id qq2*qq20*s^2 = -2*qq20 - qq2*qq20 + qq2*qq7 - 8*qq20*qq7 - 2*qq20*s + 2*qq2*qq20*s - qq20*t - 4*qq20*qq7*t;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule127'==1
#write "calc module nr 127"
#do j=1,1
if (match(qq2*qq20*qq7));
id qq2*qq20*qq7 = (-2*qq20)/9 - (2*qq2*qq20)/9 - (10*qq20*qq7)/9 + (qq2*qq7^2)/9 - (8*qq20*qq7^2)/9 - (qq2*qq20*s)/9 - (qq20*qq7*t)/9 - (4*qq20*qq7^2*t)/9;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule128'==1
#write "calc module nr 128"
#do j=1,1
if (match(qq21*qq8*s));
id qq21*qq8*s = -1/2*qq21 - (qq1*qq21)/4 + (qq1*qq8)/4 - 2*qq21*qq8 - (qq21*s)/4 - (qq21*t)/2 + (qq1*qq21*t)/2 - (qq1*qq21*t^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule129'==1
#write "calc module nr 129"
#do j=1,1
if (match(qq1*qq21*qq8));
id qq1*qq21*qq8 = -1/8*qq21 - (qq1*qq21)/4 - (qq1^2*qq21)/8 + (qq1^2*qq8)/8 - (qq21*qq8)/2 - (qq1*qq21*t)/4 + (qq1^2*qq21*t)/4 - (qq1^2*qq21*t^2)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule130'==1
#write "calc module nr 130"
#do j=1,1
if (match(qq20*qq7*t^2));
id qq20*qq7*t^2 = -1/4*qq20 + qq7/4 + (qq20*s)/2 - (qq20*s^2)/4 - (qq20*t)/2 - 2*qq20*qq7*t - (qq20*s*t)/2 - (qq20*t^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule131'==1
#write "calc module nr 131"
#do j=1,1
if (match(qq20*qq7*qq8));
id qq20*qq7*qq8 = -1/16*qq20 - (qq20*qq7)/4 - (25*qq20*qq8)/96 + (qq7*qq8)/96 - (qq20*s)/48 - (qq20*qq8*s)/16 - (qq20*qq8*s^2)/96 - (qq20*t)/96 - (qq20*qq7*t)/24;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule132'==1
#write "calc module nr 132"
#do j=1,1
if (match(qq16*qq19*qq8));
id qq16*qq19*qq8 = qq19/24 + (qq1*qq19)/96 - (25*qq16*qq19)/96 - (qq1*qq8)/96 + (qq16*qq8)/96 + (qq19*qq8)/6 + (qq19*t)/96 - (qq16*qq19*t)/16 - (qq16*qq19*t^2)/96;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule133'==1
#write "calc module nr 133"
#do j=1,1
if (match(qq18*qq19*qq7));
id qq18*qq19*qq7 = (-9*qq19)/56 - (9*qq18*qq19)/32 - (qq18*qq7)/4 - (81*qq19*qq7)/224 + (9*qq18*qq19*s)/56 - (25*qq18*qq19*t)/112 + (9*qq18*qq7*t)/56 - (qq18*qq19*s*t)/14 + (9*qq18*qq19*t^2)/224;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule134'==1
#write "calc module nr 134"
#do j=1,1
if (match(qq16*qq21*qq8));
id qq16*qq21*qq8 = qq21/8 + (qq1*qq21)/32 - (9*qq16*qq21)/32 - (qq1*qq8)/32 + (qq16*qq8)/32 + (qq21*qq8)/2 + (qq21*t)/32 - (qq1*qq21*t)/16 + (qq1*qq21*t^2)/32;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule135'==1
#write "calc module nr 135"
#do j=1,1
if (match(qq18*qq19*t^3));
id qq18*qq19*t^3 = qq18 + 4*qq18*qq19 - 2*qq18*t + 2*qq19*t - qq18*qq19*t - qq19*s*t - 4*qq18*qq19*s*t + qq18*t^2 + 6*qq18*qq19*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule136'==1
#write "calc module nr 136"
#do j=1,1
if (match(qq21*qq7*qq8));
id qq21*qq7*qq8 = -1/24*qq21 + (qq1*qq21)/96 - (25*qq21*qq7)/96 - (qq1*qq8)/96 - (qq21*qq8)/6 + (qq7*qq8)/96 - (qq1*qq21*t)/48 - (qq21*qq7*t)/16 + (qq1*qq21*t^2)/96 - (qq21*qq7*t^2)/96;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule137'==1
#write "calc module nr 137"
#do j=1,1
if (match(qq20*qq21*t^3));
id qq20*qq21*t^3 = qq20/4 + qq20*qq21 - (9*qq20*qq21*t)/4 - (3*qq20*s*t)/8 + (qq20*s^2*t)/16 + (3*qq21*t^2)/8 + 3*qq20*qq21*t^2 + (3*qq20*s*t^2)/16 - (qq21*s*t^2)/16 - (3*qq21*t^3)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule138'==1
#write "calc module nr 138"
#do j=1,1
if (match(qq18*qq19*qq8));
id qq18*qq19*qq8 = (-9*qq18)/112 - (9*qq1*qq19)/224 - (9*qq18*qq19)/32 + (9*qq1*qq8)/224 - (81*qq18*qq8)/224 + (qq19*qq8)/14 + (qq18*qq19*s)/56 - (9*qq18*t)/224 - (9*qq18*qq19*t)/112 - (qq18*qq19*s*t)/14 + (9*qq18*qq19*t^2)/224;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule139'==1
#write "calc module nr 139"
#do j=1,1
if (match(qq16*qq18*qq19));
id qq16*qq18*qq19 = -1/8*(qq16*qq18) - (qq16*qq19)/8 + (qq18*qq19)/8 + (qq16*qq18*t)/12 + (qq19*t)/24 - (qq16*qq19*t)/12 - (qq18*qq19*t)/4 + (qq18*qq19*s*t)/12 - (qq16*qq18*t^2)/24 - (qq16*qq19*t^2)/24 + (qq18*qq19*t^2)/24;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule140'==1
#write "calc module nr 140"
#do j=1,1
if (match(qq16*qq20*qq21));
id qq16*qq20*qq21 = -1/8*(qq16*qq20) - (qq16*qq21)/8 + (9*qq20*qq21)/8 + (3*qq20*s)/16 - (qq20*s^2)/32 - (3*qq21*t)/16 - (3*qq20*qq21*t)/2 - (3*qq20*s*t)/32 + (qq21*s*t)/32 + (3*qq21*t^2)/32 + (qq20*qq21*t^2)/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule141'==1
#write "calc module nr 141"
#do j=1,1
if (match(qq19*qq21*t^3));
id qq19*qq21*t^3 = (qq1*qq19)/2 + 2*qq21 - (qq1*qq21)/2 + 8*qq19*qq21 + (qq19*s)/2 - (qq21*s)/2 - qq21*t + qq1*qq21*t - 4*qq19*qq21*t - (qq1*qq21*t^2)/2 + 2*qq19*qq21*t^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule142'==1
#write "calc module nr 142"
#do j=1,1
if (match(qq18*qq21*t^4));
id qq18*qq21*t^4 = -2*qq18 + 6*qq21 + 16*qq18*qq21 - qq21*s - 10*qq18*qq21*s + qq18*qq21*s^2 + qq18*t - 2*qq21*t + 14*qq18*qq21*t + 2*qq18*qq21*s*t - 21*qq18*qq21*t^2 + 8*qq18*qq21*t^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule143'==1
#write "calc module nr 143"
#do j=1,1
if (match(qq19*qq21*s*t));
id qq19*qq21*s*t = qq19/8 - (9*qq21)/8 - 4*qq19*qq21 - (qq19*s)/4 + (3*qq21*s)/4 + 2*qq19*qq21*s + (qq19*s^2)/8 - (qq21*s^2)/8 + (3*qq21*t)/4 + 3*qq19*qq21*t - (qq21*s*t)/4 - (qq21*t^2)/8 - (qq19*qq21*t^2)/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule144'==1
#write "calc module nr 144"
#do j=1,1
if (match(qq19*qq20*s*t^2));
id qq19*qq20*s*t^2 = 4*qq20 + 16*qq19*qq20 - 3*qq20*s - 12*qq19*qq20*s + (qq20*s^2)/2 + 2*qq19*qq20*s^2 + qq19*t - 3*qq20*t - 12*qq19*qq20*t - (qq19*s*t)/2 + qq20*s*t + 4*qq19*qq20*s*t + (qq20*t^2)/2 + 5*qq19*qq20*t^2 - (qq19*qq20*t^3)/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule145'==1
#write "calc module nr 145"
#do j=1,1
if (match(qq20*qq21*qq7));
id qq20*qq21*qq7 = -1/16*qq20 - (25*qq20*qq21)/96 - (qq20*qq7)/4 + (qq21*qq7)/96 - (qq20*s)/192 + (qq20*s^2)/384 - (qq20*t)/96 + (qq21*t)/192 - (qq20*qq21*t)/24 - (qq20*qq7*t)/24 + (qq21*qq7*t)/16 + (qq20*s*t)/128 - (qq21*s*t)/384 - (qq21*t^2)/128 - (qq20*qq21*t^2)/24 + (qq21*qq7*t^2)/96;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule146'==1
#write "calc module nr 146"
#do j=1,1
if (match(qq16*qq18*qq21));
id qq16*qq18*qq21 = (-81*qq18)/1508 - (25*qq16*qq18)/3016 + (9*qq21)/52 - (729*qq16*qq21)/3016 + (2169*qq18*qq21)/3016 - (81*qq21*s)/3016 - (423*qq18*qq21*s)/1508 + (81*qq18*qq21*s^2)/3016 + (81*qq18*t)/3016 + (63*qq16*qq18*t)/1508 - (81*qq21*t)/3016 - (75*qq18*qq21*t)/1508 + (89*qq18*qq21*s*t)/1508 - (81*qq16*qq18*t^2)/3016 - (191*qq18*qq21*t^2)/3016 + (9*qq18*qq21*t^3)/754;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule147'==1
#write "calc module nr 147"
#do j=1,1
if (match(qq18*qq21*s^3));
id qq18*qq21*s^3 = -2*qq18 + 12*qq21 + 40*qq18*qq21 + 2*qq18*s - 6*qq21*s - 28*qq18*qq21*s + qq21*s^2 + 10*qq18*qq21*s^2 - 6*qq21*t - 6*qq18*qq21*t - qq18*s*t + 2*qq21*s*t + 4*qq18*qq21*s*t + qq21*t^2 - 8*qq18*qq21*t^2 + 2*qq18*qq21*t^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule148'==1
#write "calc module nr 148"
#do j=1,1
if (match(qq18*qq20*s^2));
id qq18*qq20*s^2 = -2*qq18*qq20 + qq18*qq7 + qq20*qq7 + 2*qq18*qq20*s + (qq18*t)/8 - (9*qq20*t)/8 - 4*qq18*qq20*t - (qq18*qq7*t)/2 + (qq20*qq7*t)/2 + (3*qq20*s*t)/4 - (qq20*s^2*t)/8 - (qq18*t^2)/4 + (3*qq20*t^2)/4 + 2*qq18*qq20*t^2 - (qq20*s*t^2)/4 + (qq18*t^3)/8 - (qq20*t^3)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule149'==1
#write "calc module nr 149"
#do j=1,1
if (match(qq18*qq21*qq7));
id qq18*qq21*qq7 = (-9*qq18)/112 + (9*qq21)/112 + (25*qq18*qq21)/224 - (qq18*qq7)/4 - (25*qq21*qq7)/224 - (9*qq21*s)/224 - (27*qq18*qq21*s)/112 + (9*qq18*qq21*s^2)/224 + (9*qq18*t)/224 - (9*qq21*t)/112 - (qq18*qq21*t)/16 + (9*qq18*qq7*t)/56 - (11*qq21*qq7*t)/112 + (qq18*qq21*s*t)/112 - (15*qq18*qq21*t^2)/224 - (9*qq21*qq7*t^2)/224 + (qq18*qq21*t^3)/56;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule150'==1
#write "calc module nr 150"
#do j=1,1
if (match(qq18*qq21*qq8));
id qq18*qq21*qq8 = (9*qq18)/88 - (27*qq21)/176 + (9*qq1*qq21)/352 - (225*qq18*qq21)/352 - (9*qq1*qq8)/352 + (81*qq18*qq8)/352 - (qq21*qq8)/22 + (9*qq21*s)/352 + (43*qq18*qq21*s)/176 - (9*qq18*qq21*s^2)/352 + (9*qq21*t)/176 - (9*qq1*qq21*t)/176 - (81*qq18*qq21*t)/176 - (qq18*qq21*s*t)/176 + (9*qq1*qq21*t^2)/352 + (135*qq18*qq21*t^2)/352 - (9*qq18*qq21*t^3)/88;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule151'==1
#write "calc module nr 151"
#do j=1,1
if (match(qq20*qq21*qq8));
id qq20*qq21*qq8 = -1/24*qq21 + (qq1*qq21)/96 - (25*qq20*qq21)/96 - (qq1*qq8)/96 + (qq20*qq8)/96 - (qq21*qq8)/6 + (qq20*s)/64 + (qq20*qq8*s)/16 + (qq20*s^2)/384 + (qq20*qq8*s^2)/96 + (qq21*t)/192 - (qq1*qq21*t)/48 - (qq20*qq21*t)/24 + (qq20*s*t)/128 - (qq21*s*t)/384 - (qq21*t^2)/128 + (qq1*qq21*t^2)/96 - (qq20*qq21*t^2)/24;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule152'==1
#write "calc module nr 152"
#do j=1,1
if (match(qq19*qq20*qq7));
id qq19*qq20*qq7 = (9*qq20)/22 + (45*qq19*qq20)/32 + (81*qq19*qq7)/352 - (qq20*qq7)/4 - (27*qq20*s)/88 - (135*qq19*qq20*s)/176 + (9*qq20*s^2)/176 - (9*qq19*qq20*s^2)/352 + (9*qq19*t)/88 - (27*qq20*t)/88 - (19*qq19*qq20*t)/16 - (9*qq20*qq7*t)/88 - (9*qq19*s*t)/176 + (9*qq20*s*t)/88 + (35*qq19*qq20*s*t)/176 + (9*qq20*t^2)/176 + (171*qq19*qq20*t^2)/352 - (9*qq19*qq20*t^3)/176;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule153'==1
#write "calc module nr 153"
#do j=1,1
if (match(qq19*qq20*t^4));
id qq19*qq20*t^4 = 12*qq20 + 48*qq19*qq20 - 10*qq20*s - 40*qq19*qq20*s + 2*qq20*s^2 + 8*qq19*qq20*s^2 + 2*qq19*t - 4*qq19*qq20*t - 2*qq19*s*t - 2*qq20*s*t + qq20*s^2*t + 2*qq19*t^2 - 4*qq20*t^2 - 8*qq19*qq20*t^2 - qq19*s*t^2 + 2*qq20*s*t^2 + qq20*t^3 + 8*qq19*qq20*t^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule154'==1
#write "calc module nr 154"
#do j=1,1
if (match(qq19*qq21*qq8));
id qq19*qq21*qq8 = qq19/128 - (qq1*qq19)/160 + (qq1^2*qq19)/640 - (3*qq21)/640 + (qq1*qq21)/160 + (9*qq1^2*qq21)/640 - (3*qq19*qq21)/10 - (qq1^2*qq8)/64 + (qq19*qq8)/32 + (qq21*qq8)/32 - (qq19*s)/320 + (qq21*s)/320 + (qq21*t)/160 + (3*qq1*qq21*t)/320 - (9*qq1^2*qq21*t)/320 - (qq19*qq21*t)/20 + (qq1*qq21*t^2)/320 + (9*qq1^2*qq21*t^2)/640 - (qq19*qq21*t^2)/40;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule155'==1
#write "calc module nr 155"
#do j=1,1
if (match(qq16*qq19*qq20));
id qq16*qq19*qq20 = (-25*qq16*qq19)/3016 + (153*qq20)/1508 - (729*qq16*qq20)/3016 + (1449*qq19*qq20)/3016 + (27*qq20*s)/3016 - (21*qq19*qq20*s)/1508 - (9*qq20*s^2)/1508 - (47*qq19*qq20*s^2)/3016 + (45*qq19*t)/3016 - (63*qq16*qq19*t)/1508 + (27*qq20*t)/3016 - (171*qq19*qq20*t)/1508 + (9*qq19*s*t)/1508 - (9*qq20*s*t)/754 + (53*qq19*qq20*s*t)/1508 - (81*qq16*qq19*t^2)/3016 - (9*qq20*t^2)/1508 - (99*qq19*qq20*t^2)/3016 + (9*qq19*qq20*t^3)/1508;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule156'==1
#write "calc module nr 156"
#do j=1,1
if (match(qq18*qq20*qq7));
id qq18*qq20*qq7 = -1/4*(qq18*qq20) + (qq20*qq7)/20 + (qq18*qq7^2)/10 + (qq20*qq7^2)/10 - (qq18*qq20*s)/10 - (qq18*t)/320 + (9*qq20*t)/320 + (qq18*qq20*t)/10 + (qq18*qq7*t)/80 - (qq20*qq7*t)/80 - (qq18*qq7^2*t)/20 + (qq20*qq7^2*t)/20 - (3*qq20*s*t)/160 + (qq20*s^2*t)/320 + (qq18*t^2)/160 - (3*qq20*t^2)/160 - (qq18*qq20*t^2)/20 + (qq20*s*t^2)/160 - (qq18*t^3)/320 + (qq20*t^3)/320;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule157'==1
#write "calc module nr 157"
#do j=1,1
if (match(qq1*qq19*qq21));
id qq1*qq19*qq21 = qq19/8 - (qq1*qq19)/20 + (qq1^2*qq19)/80 - (29*qq21)/40 - (qq1*qq21)/5 - (qq1^2*qq21)/80 - (12*qq19*qq21)/5 - (3*qq19*s)/20 + (2*qq21*s)/5 + qq19*qq21*s + (qq19*s^2)/16 - (qq21*s^2)/16 + (17*qq21*t)/40 - (7*qq1*qq21*t)/40 + (qq1^2*qq21*t)/40 + (3*qq19*qq21*t)/5 - (qq21*s*t)/8 - (qq21*t^2)/16 + (qq1*qq21*t^2)/40 - (qq1^2*qq21*t^2)/80 - (qq19*qq21*t^2)/5;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule158'==1
#write "calc module nr 158"
#do j=1,1
if (match(qq19*qq21*qq7));
id qq19*qq21*qq7 = (-5*qq19)/56 + (9*qq1*qq19)/2240 + (9*qq21)/280 - (9*qq1*qq21)/2240 - (8*qq19*qq21)/35 - (729*qq19*qq7)/2240 + (169*qq21*qq7)/2240 - (qq19*s)/70 - (3*qq21*s)/140 - (qq19*qq21*s)/7 - (qq19*s^2)/112 + (qq21*s^2)/112 + (3*qq21*t)/280 + (9*qq1*qq21*t)/1120 + (qq19*qq21*t)/35 + (99*qq21*qq7*t)/1120 + (qq21*s*t)/56 + (qq21*t^2)/112 - (9*qq1*qq21*t^2)/2240 - (qq19*qq21*t^2)/35 + (81*qq21*qq7*t^2)/2240;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule159'==1
#write "calc module nr 159"
#do j=1,1
if (match(qq18*qq20*s*t));
id qq18*qq20*s*t = qq18/8 - (9*qq20)/8 - 3*qq18*qq20 - (qq18*qq7)/2 - (qq20*qq7)/2 + (3*qq20*s)/4 + 2*qq18*qq20*s - (qq20*s^2)/8 - (5*qq18*t)/16 + (21*qq20*t)/16 + 4*qq18*qq20*t + (qq18*qq7*t)/4 - (qq20*qq7*t)/4 - (5*qq20*s*t)/8 + (qq20*s^2*t)/16 + (qq18*t^2)/4 - (qq20*t^2)/2 - qq18*qq20*t^2 + (qq20*s*t^2)/8 - (qq18*t^3)/16 + (qq20*t^3)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule160'==1
#write "calc module nr 160"
#do j=1,1
if (match(qq18*qq20*t^3));
id qq18*qq20*t^3 = -1/16*qq18 - (15*qq20)/16 - 4*qq18*qq20 - (qq20*s)/8 + qq18*qq20*s + (qq20*s^2)/16 + (qq18*t)/4 - qq20*t - 3*qq18*qq20*t + (7*qq20*s*t)/8 - (qq20*s^2*t)/8 - (3*qq18*t^2)/8 + (11*qq20*t^2)/8 + 4*qq18*qq20*t^2 - (5*qq20*s*t^2)/8 + (qq20*s^2*t^2)/16 + (qq18*t^3)/4 - (qq20*t^3)/2 + (qq20*s*t^3)/8 - (qq18*t^4)/16 + (qq20*t^4)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule161'==1
#write "calc module nr 161"
#do j=1,1
if (match(qq16*qq19*qq21));
id qq16*qq19*qq21 = (-5*qq19)/56 - (9*qq1*qq19)/2240 + (169*qq16*qq19)/2240 + (81*qq21)/280 + (9*qq1*qq21)/2240 - (729*qq16*qq21)/2240 + (4*qq19*qq21)/5 + (qq19*s)/20 - (3*qq21*s)/35 - (qq19*qq21*s)/7 - (qq19*s^2)/112 + (qq21*s^2)/112 - (81*qq19*t)/2240 + (99*qq16*qq19*t)/1120 - (183*qq21*t)/2240 - (9*qq1*qq21*t)/1120 - (6*qq19*qq21*t)/35 + (qq21*s*t)/56 + (81*qq16*qq19*t^2)/2240 + (qq21*t^2)/112 + (9*qq1*qq21*t^2)/2240 + (qq19*qq21*t^2)/35;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule162'==1
#write "calc module nr 162"
#do j=1,1
if (match(qq19*qq20*qq8));
id qq19*qq20*qq8 = qq19/56 - (9*qq1*qq19)/224 - (3*qq20)/112 - (55*qq19*qq20)/224 + (9*qq1*qq8)/224 + (qq19*qq8)/14 - (25*qq20*qq8)/224 - (3*qq20*s)/112 - (qq19*qq20*s)/112 - (11*qq20*qq8*s)/112 - (qq20*s^2)/112 + (qq19*qq20*s^2)/224 - (9*qq20*qq8*s^2)/224 - (qq19*t)/56 + (3*qq20*t)/224 + (qq19*qq20*t)/112 + (qq19*s*t)/112 - (qq20*s*t)/56 - (3*qq19*qq20*s*t)/112 - (qq20*t^2)/112 - (11*qq19*qq20*t^2)/224 + (qq19*qq20*t^3)/112;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule163'==1
#write "calc module nr 163"
#do j=1,1
if (match(qq19*qq21*s^2));
id qq19*qq21*s^2 = 1/8 + qq19/8 - (qq1*qq19)/16 + (5*qq21)/8 + (qq1*qq21)/16 + qq19*qq21 - (qq19*s)/8 + (5*qq21*s)/8 + 2*qq19*qq21*s + (qq19*s^2)/8 - (3*qq21*s^2)/8 - (qq19*s^3)/16 + (qq21*s^3)/16 - qq21*t - (qq1*qq21*t)/8 - qq19*qq21*t + (3*qq21*s*t)/8 + (3*qq21*t^2)/4 + (qq1*qq21*t^2)/16 + (qq19*qq21*t^2)/2 - (3*qq21*s*t^2)/16 - (qq21*t^3)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule164'==1
#write "calc module nr 164"
#do j=1,1
if (match(qq18*qq20*qq8));
id qq18*qq20*qq8 = (-13*qq18)/160 + (9*qq20)/224 - (6*qq18*qq20)/35 + (qq18*qq7)/280 + (qq20*qq7)/280 - (729*qq18*qq8)/2240 + (169*qq20*qq8)/2240 + (3*qq20*s)/160 - (qq18*qq20*s)/35 + (99*qq20*qq8*s)/1120 + (qq20*s^2)/112 + (81*qq20*qq8*s^2)/2240 - (7*qq18*t)/320 + (33*qq20*t)/2240 - (qq18*qq20*t)/35 - (qq18*qq7*t)/560 + (qq20*qq7*t)/560 - (qq20*s*t)/280 + (qq20*s^2*t)/280 - (qq18*t^2)/560 - (qq20*t^2)/80 - (2*qq18*qq20*t^2)/35 + (qq20*s*t^2)/140 - (qq18*t^3)/280 + (qq20*t^3)/280;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule165'==1
#write "calc module nr 165"
#do j=1,1
if (match(qq16*qq18*qq20));
id qq16*qq18*qq20 = -1/112*qq18 + (169*qq16*qq18)/2240 + (9*qq20)/32 - (729*qq16*qq20)/2240 + (26*qq18*qq20)/35 - (qq18*qq7)/280 - (qq20*qq7)/280 - (201*qq20*s)/2240 - (4*qq18*qq20*s)/35 + (qq20*s^2)/112 + (3*qq18*t)/140 - (99*qq16*qq18*t)/1120 - (39*qq20*t)/320 - (9*qq18*qq20*t)/35 + (qq18*qq7*t)/560 - (qq20*qq7*t)/560 + (11*qq20*s*t)/280 - (qq20*s^2*t)/280 - (9*qq18*t^2)/560 + (81*qq16*qq18*t^2)/2240 + (17*qq20*t^2)/560 + (2*qq18*qq20*t^2)/35 - (qq20*s*t^2)/140 + (qq18*t^3)/280 - (qq20*t^3)/280;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule166'==1
#write "calc module nr 166"
#do j=1,1
if (match(qq18*qq19*qq21));
id qq18*qq19*qq21 = (-2505*qq18)/49504 + (575*qq19)/24752 + (913*qq1*qq19)/99008 + (121*qq18*qq19)/832 + (6717*qq21)/49504 - (913*qq1*qq21)/99008 + (929*qq18*qq21)/99008 + (44*qq19*qq21)/1547 + (11*qq19*s)/6188 - (2785*qq18*qq19*s)/24752 - (6217*qq21*s)/99008 - (535*qq18*qq21*s)/3808 - (qq19*qq21*s)/7 - (qq19*s^2)/112 + (qq21*s^2)/112 + (2505*qq18*qq21*s^2)/99008 + (2505*qq18*t)/99008 + (5689*qq18*qq19*t)/49504 - (3565*qq21*t)/49504 + (913*qq1*qq21*t)/49504 + (119*qq18*qq21*t)/416 - (93*qq19*qq21*t)/1547 + (521*qq18*qq19*s*t)/6188 + (qq21*s*t)/56 - (1663*qq18*qq21*s*t)/49504 - (2505*qq18*qq19*t^2)/99008 + (qq21*t^2)/112 - (913*qq1*qq21*t^2)/99008 - (21703*qq18*qq21*t^2)/99008 - (75*qq19*qq21*t^2)/1547 + (913*qq18*qq21*t^3)/24752;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule167'==1
#write "calc module nr 167"
#do j=1,1
if (match(qq19*qq20*qq21));
id qq19*qq20*qq21 = (3*qq19)/32 - (17*qq1*qq19)/832 - (163*qq20)/416 - (91*qq19*qq20)/64 - (127*qq21)/416 + (17*qq1*qq21)/832 - (11*qq19*qq21)/13 - (329*qq20*qq21)/832 - (11*qq19*s)/208 + (311*qq20*s)/1664 + (311*qq19*qq20*s)/416 + (37*qq21*s)/208 + (qq19*qq21*s)/2 + (qq19*s^2)/32 - (87*qq20*s^2)/3328 - (87*qq19*qq20*s^2)/832 - (qq21*s^2)/32 - (17*qq19*t)/208 + (179*qq20*t)/832 + (385*qq19*qq20*t)/416 + (29*qq21*t)/128 - (17*qq1*qq21*t)/416 + (15*qq19*qq21*t)/52 + (47*qq20*qq21*t)/208 + (17*qq19*s*t)/416 - (125*qq20*s*t)/3328 - (123*qq19*qq20*s*t)/416 - (257*qq21*s*t)/3328 - (17*qq20*t^2)/416 - (315*qq19*qq20*t^2)/832 - (251*qq21*t^2)/3328 + (17*qq1*qq21*t^2)/832 + (7*qq19*qq21*t^2)/104 - (49*qq20*qq21*t^2)/208 + (17*qq19*qq20*t^3)/416;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule168'==1
#write "calc module nr 168"
#do j=1,1
if (match(qq18*qq19*qq20));
id qq18*qq19*qq20 = -1/112*qq18 + (913*qq19)/24752 + (121*qq18*qq19)/832 - (1663*qq20)/24752 + (194*qq18*qq20)/1547 - (5547*qq19*qq20)/7616 + (313*qq18*qq7)/12376 + (313*qq20*qq7)/12376 - (913*qq18*qq19*s)/24752 + (1413*qq20*s)/24752 - (243*qq18*qq20*s)/1547 + (19639*qq19*qq20*s)/49504 - (471*qq20*s^2)/49504 - (7095*qq19*qq20*s^2)/99008 + (73*qq18*t)/6188 - (913*qq19*t)/24752 + (1945*qq18*qq19*t)/49504 + (2763*qq20*t)/24752 + (79*qq18*qq20*t)/1547 + (18609*qq19*qq20*t)/49504 - (313*qq18*qq7*t)/24752 + (313*qq20*qq7*t)/24752 + (913*qq19*s*t)/49504 + (521*qq18*qq19*s*t)/6188 - (1371*qq20*s*t)/24752 - (5315*qq19*qq20*s*t)/49504 + (75*qq20*s^2*t)/12376 + (79*qq18*t^2)/24752 - (2505*qq18*qq19*t^2)/99008 - (2271*qq20*t^2)/49504 - (150*qq18*qq20*t^2)/1547 - (15755*qq19*qq20*t^2)/99008 + (75*qq20*s*t^2)/6188 - (75*qq18*t^3)/12376 + (75*qq20*t^3)/12376 + (913*qq19*qq20*t^3)/49504;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule169'==1
#write "calc module nr 169"
#do j=1,1
if (match(qq18*qq20*qq21));
id qq18*qq20*qq21 = (-3*qq18)/104 - (9*qq20)/26 - (51*qq18*qq20)/52 + (41*qq21)/416 + (177*qq18*qq21)/832 - (329*qq20*qq21)/832 - (5*qq18*qq7)/52 - (5*qq20*qq7)/52 + (215*qq20*s)/1664 + (11*qq18*qq20*s)/26 - (25*qq21*s)/832 - (7*qq18*qq21*s)/32 - (55*qq20*s^2)/3328 + (25*qq18*qq21*s^2)/832 - (5*qq18*t)/208 + (17*qq20*t)/208 + (3*qq18*qq20*t)/13 - (3*qq21*t)/1664 + (209*qq18*qq21*t)/416 + (47*qq20*qq21*t)/208 + (5*qq18*qq7*t)/104 - (5*qq20*qq7*t)/104 + (107*qq20*s*t)/3328 - (49*qq21*s*t)/3328 - (55*qq18*qq21*s*t)/416 - (7*qq20*s^2*t)/832 + (3*qq18*t^2)/208 + (qq20*t^2)/52 + (7*qq18*qq20*t^2)/52 - (147*qq21*t^2)/3328 - (359*qq18*qq21*t^2)/832 - (49*qq20*qq21*t^2)/208 - (7*qq20*s*t^2)/416 + (7*qq18*t^3)/832 - (7*qq20*t^3)/832 + (17*qq18*qq21*t^3)/208;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
