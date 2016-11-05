c_int m = 5;
c_int n = 6;
c_float A[30] = {-0.00000000000000000000, 0.00000000000000000000, -0.00000000000000000000, 0.00000000000000000000, -1.40041634958444216608, -0.00000000000000000000, -0.00000000000000000000, -0.00000000000000000000, -0.00000000000000000000, 0.00000000000000000000, 0.00000000000000000000, 0.50394304869519213064, 1.24257063987309512854, 0.00000000000000000000, 0.00000000000000000000, 0.00000000000000000000, 0.00000000000000000000, 0.00000000000000000000, -0.00000000000000000000, -1.22026113978443984109, -0.00000000000000000000, 0.42541116647078253132, 0.69736772850368689003, -0.00000000000000000000, -0.00000000000000000000, 0.00000000000000000000, 0.10985499029149142780, 0.00000000000000000000, 0.00000000000000000000, -1.00949738728262783383, };
c_float Asp_x[8] = {-1.40041634958444216608, 0.50394304869519213064, 1.24257063987309512854, -1.22026113978443984109, 0.42541116647078253132, 0.69736772850368689003, 0.10985499029149142780, -1.00949738728262783383, };
c_int Asp_nnz = 8;
c_int Asp_i[8] = {4, 1, 2, 4, 1, 2, 1, 4, };
c_int Asp_p[7] = {0, 1, 1, 3, 4, 6, 8, };
c_int t2_n = 10;
c_float t2_v1[10] = {0.36109958217038390371, -1.51083798685228454239, -0.41928110526015432979, -1.74321243195374075974, 0.82456079217492561639, 1.30479831348551100767, 1.23160855351096532040, 0.61055532591104799689, 0.40454451048944606306, -0.60880795625989991837, };
c_float t2_v2[10] = {1.41857284227432001167, 1.17033902857889526850, -0.13723121162656345962, 0.68331924598275217697, 1.03245384517791771728, -2.60055210256521629475, 0.90783408971030421508, -0.43748625219093817407, -0.76849499144160826614, 0.60090106948909727258, };
c_float t2_sc = -0.28886658240282631072;
c_float t2_norm2_diff = 5.79760192294908716093;
c_float t2_add_scaled[10] = {-0.04867870666686247016, -1.84890982229051381580, -0.37963959415858994362, -1.94060052723085463278, 0.52631937842972376096, 2.05601091171400929269, 0.96936562262756886810, 0.73693048442966535561, 0.62653703226087276157, -0.78238819456541874864, };
c_float t2_norm2_sq = 10.43395052142473744539;
c_float t2_norm2 = 3.23016261532213544427;
c_float t2_ew_reciprocal[10] = {2.76931918333860771497, -0.66188433750161623781, -2.38503473553744527180, -0.57365355000321427426, 1.21276685659807115236, 0.76640197160333345394, 0.81194629344631030765, 1.63785320930226441227, 2.47191588087582880817, -1.64255409233367566380, };
c_int t3_n = 5;
c_float t3_d[5] = {0.64963255966728294943, -1.61923181540516969434, 0.76725259809714163595, 0.49952170836140691312, 1.95096781161299137608, };
c_float t3_A_x[25] = {0.04011170494414298404, 1.28370360400155036906, 1.42127249679541489691, -0.22671676411947844221, 0.20174979117502730985, 0.97207555297293080088, -1.58591508580772466708, 0.08399430837647922643, 0.62127004611509917265, -0.29449899330145962173, 0.72876651238772349739, 0.22125085003660016625, -0.03786417460374467969, -0.48605323925426174858, 0.47756757372351599233, -0.96742283611221802087, 0.49519267711929032538, -0.14428705905282548927, -0.61727793912113926300, -1.60965759821455378642, -0.83737151135806575653, -2.71478505478889342584, -0.91945754597385798146, -1.63842896217857170171, 0.54220861787693086509, };
c_int t3_A_nnz = 25;
c_int t3_A_i[25] = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, };
c_int t3_A_p[6] = {0, 5, 10, 15, 20, 25, };
c_float t3_dA_x[25] = {0.02605786955548241440, -2.07861371714958931278, 1.09047501577029359865, -0.11324994532713199280, 0.39360734858212104159, 0.63149192966779454927, 2.56796416347088740650, 0.06444485132722618803, 0.31033787478918439806, -0.57455805648357771709, 0.47343045484223550412, -0.35825641556470105842, -0.02905138633952691549, -0.24279414442688448950, 0.93171896420469391131, -0.62846937330416252632, -0.80183173754721448478, -0.11070462093007606141, -0.30834373068359999248, -3.14039016183487174061, -0.54398379831600152112, 4.39586633270064286449, -0.70545619098846457096, -0.81843083421624707174, 1.05783156065706052118, };
c_int t3_dA_nnz = 25;
c_int t3_dA_i[25] = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, };
c_int t3_dA_p[6] = {0, 5, 10, 15, 20, 25, };
c_float t3_Ad_x[25] = {0.02605786955548241440, 0.83393565812164338613, 0.92330489007791560763, -0.14728259179442038107, 0.13106323325337279617, -1.57401566235134304783, 2.56796416347088740650, -0.13600625643614810967, -1.00598022462780556374, 0.47686213955851736168, 0.55914800003567355358, 0.16975528952178253750, -0.02905138633952691549, -0.37292561063136392407, 0.36641496170631587814, -0.48324870780261253156, 0.24735949204268647961, -0.07207451823251058431, -0.30834373068359999248, -0.80405891333705303836, -1.63368486502130871862, -5.29645825734114250594, -1.79383207633966912375, -3.19652216682487244626, 1.05783156065706052118, };
c_int t3_Ad_nnz = 25;
c_int t3_Ad_i[25] = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, };
c_int t3_Ad_p[6] = {0, 5, 10, 15, 20, 25, };
c_float t3_A_ewsq_x[25] = {0.00160894887352598464, 1.64789494292656923946, 2.02001551014707247944, 0.05140049113280723003, 0.04070297823916712437, 0.94493088068762920440, 2.51512665939252277880, 0.00705504383964308812, 0.38597647019985747985, 0.08672965705557315885, 0.53110062957776593695, 0.04895193864191813710, 0.00143369571842286354, 0.23624775138956061182, 0.22807078747216588677, 0.93590694383140748958, 0.24521578747256972397, 0.02081875541011354858, 0.38103205412564089549, 2.59099758348984599010, 0.70119104803409126880, 7.37005789370513486602, 0.84540217884826918127, 2.68444946410555163041, 0.29399018530001164162, };
c_int t3_A_ewsq_nnz = 25;
c_int t3_A_ewsq_i[25] = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, };
c_int t3_A_ewsq_p[6] = {0, 5, 10, 15, 20, 25, };
c_float t3_A_ewabs_x[25] = {0.04011170494414298404, 1.28370360400155036906, 1.42127249679541489691, 0.22671676411947844221, 0.20174979117502730985, 0.97207555297293080088, 1.58591508580772466708, 0.08399430837647922643, 0.62127004611509917265, 0.29449899330145962173, 0.72876651238772349739, 0.22125085003660016625, 0.03786417460374467969, 0.48605323925426174858, 0.47756757372351599233, 0.96742283611221802087, 0.49519267711929032538, 0.14428705905282548927, 0.61727793912113926300, 1.60965759821455378642, 0.83737151135806575653, 2.71478505478889342584, 0.91945754597385798146, 1.63842896217857170171, 0.54220861787693086509, };
c_int t3_A_ewabs_nnz = 25;
c_int t3_A_ewabs_i[25] = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, };
c_int t3_A_ewabs_p[6] = {0, 5, 10, 15, 20, 25, };
c_int t4_m = 5;
c_int t4_n = 4;
c_float t4_A_x[20] = {-1.85324949816956041637, -0.74363619669491221043, -1.19418063917809624819, 1.25517126965469216771, -0.43045777587141498266, -1.88242929680661763570, -0.61371759885655530198, -1.99592477497028308875, -1.02467082970619105531, -1.74555395628135223696, -1.15512901665198586265, -0.30244611778743873964, 1.11391359366520759089, 1.33008722802459167234, -1.06455576337932700248, 0.14691888885698750622, 0.84370356046227024116, -0.59009040094906239915, 0.68079539543712241922, 2.22314011430693447835, };
c_int t4_A_nnz = 20;
c_int t4_A_i[20] = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, };
c_int t4_A_p[5] = {0, 5, 10, 15, 20, };
c_float t4_x[4] = {0.31134847177662050566, 0.43240411149518309664, 1.42548598595518760668, 0.59809397164597533081, };
c_float t4_y[5] = {-0.65123210446516532901, -0.03389096756095545671, -0.14401380372585861900, -1.50419780975777261922, -0.94921685213125772673, };
c_float t4_Ax[5] = {-2.94972549007536244403, -0.42342269548508171262, 0.00008630983536739301, 2.25092410251308994162, -1.07666969968840331440, };
c_float t4_Ax_cum[5] = {-3.60095759454052766202, -0.45731366304603715545, -0.14392749389049122599, 0.74672629275531732240, -2.02588655181966093011, };
c_int t_ut_n = 5;
c_float t_ut_A_x[12] = {0.20000835900923302768, -1.09812616316059852295, -2.07917016642026908357, -1.11989321647569051166, -0.91854272451786389553, -0.28558572721801617211, -0.54199198952877936097, 0.08219547912670474576, -0.28944969908323814334, -0.13568664970459060060, -0.86222224601021124624, 0.36619281576305512393, };
c_int t_ut_A_nnz = 12;
c_int t_ut_A_i[12] = {1, 3, 4, 1, 3, 1, 2, 3, 4, 3, 0, 3, };
c_int t_ut_A_p[6] = {0, 3, 5, 9, 10, 12, };
c_float t_ut_Atriu_x[6] = {-1.11989321647569051166, -0.28558572721801617211, -0.54199198952877936097, -0.13568664970459060060, -0.86222224601021124624, 0.36619281576305512393, };
c_int t_ut_Atriu_nnz = 6;
c_int t_ut_Atriu_i[6] = {1, 1, 2, 3, 0, 3, };
c_int t_ut_Atriu_p[6] = {0, 0, 1, 3, 4, 6, };
