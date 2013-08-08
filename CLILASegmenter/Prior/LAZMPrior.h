#ifndef LAZMPRIOR_H
#define LAZMPRIOR_H

static const int ZMOrder = 12;
static const double ZMs[] = {
0.116599, 0,
-0.000495509, 0,
-0.000127804, -0.000739303,
-0.168818, 0,
-0.00355743, 0,
-0.00252732, 0.000448905,
-0.0219946, -0.00253461,
0.00985327, 0,
-0.00048591, 0.00225812,
-0.00466092, 0,
0.00140618, -0.0094205,
-0.00334427, 0.00267288,
0.00110389, -0.00407283,
0.122956, 0,
-0.000814341, 0,
0.00799819, -0.00687128,
0.0441591, 0.00533145,
-0.0013677, 0,
-0.00101759, -0.000857301,
-0.000926861, -0.00035151,
-0.000734216, -0.00148462,
0.00386819, 0.00103602,
-0.0105466, 0,
0.00058064, -0.00121034,
0.00347457 ,0,
-0.00215442 ,0.0179313,
-0.00170059 ,-0.00645802,
-0.000368483, 0.00698742,
0.000803337 ,0,
-0.00111139 ,0.00326465,
0.00136246 ,-0.000979149,
-0.00222779 ,0.00339791,
0.00174273 ,-0.00184413,
-0.000524385, 0.00246786,
-0.0494285 ,0,
0.0103894 ,0,
-0.00972916, 0.0108986,
-0.0466298, -0.00326875,
0.00189271, 0,
0.0027398, 0.000616911,
0.00159956, 0.000597641,
-0.000643909, 0.00451092,
-0.00838401, -0.00466989,
7.1058e-05, 0,
-4.01794e-05, 0.00252372,
0.000267738, -0.00018025,
0.000807319, 0.00280778,
0.000675545, -0.000297933,
0.00102814, 0.00254961,
-0.000219504, 0.00042034,
-0.000171195, 0,
0.00171095, -0.00282723,
-0.00088577, 0,
0.00100518, -0.0154367,
0.00777549, 0.00653401,
-0.00369694, -0.00508006,
-0.000686581, 0,
0.00187296, -0.00526412,
-0.00193999, 0.000548213,
0.00403703, -0.00545076,
9.82639e-05, 0.00248758,
0.00102282, -0.00435866,
0.000290181, 0,
0.00042431, 0.000973038,
6.81113e-05, 0.00139291,
0.00129144, 0.000637935,
-0.000292364, 0.00124172,
0.000813368, -0.000601603,
-0.000939423, 0.00149843,
-0.0007584 ,-0.000951823,
0.00199074, 0,
-0.0150002, 0,
0.00559359, -0.00638629,
0.0290246, -0.00179417,
-0.00184634, 0,
-0.00488695, 0.000339736,
-0.00226809, -0.00106912,
0.00146676, -0.00597844,
0.0110948, 0.00574159,
0.00134999, 0,
0.000221002, -0.00251973,
0.000688179, 0.000780222,
-0.0018427, -0.00300484,
0.000656834, 0.00043866,
-0.00184142, -0.00547362,
0.000775931, 0.00160302,
0.000698389, 0,
0.000219789, -0.000749337,
0.000634603, 0.000643677,
0.000225726, -0.00134501,
0.000476084 ,0.000660483,
-0.000788886, -0.00240858,
-0.000603687, 0.00089176,
-0.000542884, -0.00139074,
0.000156465, -0.000820136,
0.00834315, 0,
-0.0036758, 0.00234801,
0.000956921, 0,
0.000503248, 0.00485389,
-0.00734209, -0.00219033,
0.00587606, 0.0018812,
0.000231777, 0,
-0.00202959, 0.00344752,
0.00225217, 0.00166501,
-0.00410854, 0.00446529,
-0.0025573, -0.000917974,
-7.22285e-05, 0.00403747,
0.000148247, 0,
-9.97061e-05, -0.00118125,
0.000344666, -0.00254441,
-0.00136038, -0.00066222,
0.00161983, -0.00156951,
-0.0014519, -0.000358602,
0.000290188, -0.00117054,
0.000839219, 0.00113581,
0.000417973, 0,
-6.02224e-05, -0.00155096,
0.000631507, -0.000784196,
-0.000506414, -0.00151954,
0.000835425, -0.000864098,
-0.00097855, -0.00138743,
6.11659e-05, -3.45134e-05,
0.000142638, 0.000611772,
0.000801521, -0.000662244,
0.00124414, 0.000503739,
0.0107696, 0,
0.0124156, 0,
-0.000630926, -0.00240358,
-0.00622221, 0.00556504,
-0.000495452, 0,
0.00588979, -0.00023293,
0.000635314, 0.000446926,
0.000435853, 0.00545572,
-0.00870871, -0.00334895,
-0.00155558, 0,
-0.000737353, 0.000925557,
-0.000537926, -0.000865909,
0.00255177, 0.000960173,
-0.00132523, 0.000645925,
0.00289756, 0.00529654,
-0.00194282, -0.00331712,
-0.0012146, 0,
-0.000144241, 0.000569208,
-0.00114637, -0.00158288,
-0.000118565, 0.00145186,
-0.000874336, -0.00122743,
0.0016661, 0.00227867,
-0.000890442, -0.000998562,
0.000822591, 0.00338195,
-0.000458475, 0.000687411,
-7.53321e-06, 0,
-0.000114941, -0.000959343,
6.68094e-05, -0.000651327,
-0.000367109, -0.000447737,
-5.35555e-05, -0.00067006,
-0.000151202, 0.000446856,
-0.000550105, -0.000394377,
0.000773608, 0.00191713,
0.00070557, -0.000664842,
0.000481625, 9.88172e-05,
-0.00063559, 0.000415689,
-0.00512631, 0,
0.00242463, -0.000878926,
-0.00257804, 0,
-0.000590094, 0.00433253,
0.00136056, -0.00211561,
-0.0031231, 0.0016237,
-0.000279822, 0,
0.0015174, 0.000886689,
-0.00281487, -0.00309088,
0.00205823, -0.000356405,
0.00291469, -0.00182362,
-0.00168327, -0.00214418,
0.000141081, 0,
-0.000525319, 0.00133466,
0.00045579, 0.00293153,
0.000955981, 0.000314376,
-0.00174541, 0.00101495,
0.00232422, 0.000570155,
0.000634341, -0.000421886,
-0.000408918, -0.000604944,
-0.000840717, 0,
-0.000237808, 0.001239,
-0.00124587, 0.00120164,
2.93932e-05, 0.00137939,
-0.00199017, 0.00165184,
0.00118563, 0.00151753,
-0.00207014, -0.000344966,
-0.000272175, 0.000702733,
-0.000790135, 0.00026302,
-0.00143721, -0.000585473,
-0.000494748, 0,
-8.30387e-05, 0.000374978,
-0.000603975, 0.000170419,
2.17467e-05, 0.000363925,
-0.000947535, 0.000286406,
0.000609605, 0.00067635,
-0.000957065, -7.91028e-05,
0.000814456, 0.00102666,
0.000469857, -0.000568789,
-0.000177334, -0.00111152,
-0.000538006, -8.62758e-06,
-0.000929704, -0.000389915,
-0.00597101, 0,
-0.00556413, 0,
-0.00112805, 0.00350759,
-0.00741104, -0.00497452,
0.00135742, 0,
-0.00426435, 0.000826541,
0.000416364, 0.000537955,
-0.00232462, -0.00129534,
0.00117335, -0.000323807,
0.000464351, 0,
0.00129298, 0.000162284,
-6.86526e-05, 0.00105967,
-0.00259616, 0.000942642,
0.00236537, -0.00123522,
-0.00431098, -0.00352287,
0.00285904, 0.00263418,
0.00158166, 0,
0.000211274, -0.00017365,
0.00155104, 0.00184507,
0.00050054, -0.00105973,
0.000586525, 0.000999543,
-0.00164788, -0.000821347,
0.00119396, -6.13471e-05,
-0.00154188, -0.00318509,
0.000616778, 0.000376719,
-0.000888183, 0,
-0.00025039, 0.000888169,
-0.000861582, 0.00126037,
-0.00010943, 7.363e-05,
-0.00060692, 0.00138189,
0.000100155, -0.00063528,
0.000402174, 0.000151755,
-0.00143943, -0.00147026,
0.000434013, 0.000534184,
-0.000164635, -0.000867272,
0.00117825, -0.000941225,
-0.000560612, 0,
-1.93263e-06, 0.000989029,
-0.000648695, 0.000331616,
0.000208474, 0.000542182,
-0.000728999, 0.0004004,
0.000538953, 0.000151992,
-0.000261474, 0.000124834,
0.000261332, -0.000302257,
0.000688737, 7.24378e-05,
-0.000395962, -0.00148003,
-0.00040079, 0.000163771,
-0.000434408, 0.000364297,
0.000855726, 6.31045e-06
};

#endif // LAZMPRIOR_H