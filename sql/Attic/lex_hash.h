/* This code is generated by program for seeking hash algorithms, copyright TcX Datakonsult AB */

#include "lex.h"

static uint16 char_table[] = {
258,39835,4883,21845,23130,46003,12850,35980,514,65278,61937,7196,40863,26728,26985,9766,
5654,23644,21331,17733,3341,25186,30069,1542,31354,39321,4626,52171,46260,57568,21588,14906,
60652,20560,6939,39578,52428,10794,46517,40606,58596,17990,58339,24672,42148,60138,3598,5911,
43947,37522,36494,1799,36751,30840,57311,34952,56540,27499,45232,41891,61423,38550,29812,24158,
771,37779,57054,257,8224,64250,51657,16962,13878,20303,42662,6168,19275,20817,34438,44461,
12336,48059,49087,28013,3855,16191,32896,26214,57825,38807,29298,35723,51400,12079,6682,25957,
8738,37779,57054,257,8224,64250,51657,16962,13878,20303,42662,6168,19275,20817,34438,44461,
12336,48059,49087,28013,3855,16191,32896,26214,57825,38807,29298,32639,11051,43690,2313,33924,
16705,53970,4112,24415,30583,17476,45746,7967,34695,35466,25700,6425,29555,59881,10537,37008,
7710,2827,62965,11565,26471,43433,34181,30326,13364,29041,54998,47802,52685,63993,2056,51914,
31097,44718,48830,50372,23387,62194,19789,19532,53456,62451,16448,54741,63736,18761,10023,3084,
20046,31868,50629,15420,54484,42405,47288,31611,28270,47031,61680,65535,49344,23901,42919,48316,
10280,55512,60395,51143,9252,53199,40349,56797,13621,11308,49601,36237,18247,15934,18504,46774,
43176,11822,56283,28784,59624,39064,63479,19018,58853,65021,9509,8995,58082,5140,5397,15163,
27242,22102,28527,22873,59367,47545,13107,60909,41120,24929,22616,49858,38036,17219,4369,64507,
50115,62708,7453,41377,53713,33153,32382,59110,64764,50886,33410,8481,63222,41634,12593,56026
};


static uchar unique_length[] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,3,1,2,0,
0,5,5,13,9,7,6,6,6,7,1,4,5,7,5,7,
8,3,12,10,6,7,4,5,0,5,1,0,0,0,0,0,
0,5,5,13,9,7,6,6,6,7,1,4,5,7,5,7,
8,3,12,10,6,7,4,5,0,5,1,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};


static uint16 my_function_table[] = {
32767,32767,32767,32767,32767,32767,32767,32767,102,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,282,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,297,32767,32767,202,382,126,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,169,32767,32767,32767,32767,32767,32767,32767,
32767,32767,306,152,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,354,32767,32767,32767,32767,32767,370,256,32767,
32767,32767,32767,32767,32767,32767,355,32767,32767,32767,32767,361,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,313,32767,32767,32767,32767,32767,32767,
14,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,315,
32767,32767,32767,32767,32767,32767,32767,32767,42,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,189,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,27,32767,32767,32767,32767,32767,32767,32767,374,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,166,32767,32767,32767,32767,32767,32767,349,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
46,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,353,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,223,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
216,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,143,32767,32767,32767,32767,32767,32767,32767,
32767,20,32767,32767,32767,140,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,125,32767,32767,32767,
32767,224,32767,32767,32767,32767,267,32767,175,32767,32767,32767,
246,32767,32767,32767,32767,32767,32767,109,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,324,32767,
32767,32767,32767,32767,161,32767,21,32767,32767,32767,32767,32767,
32767,32767,32767,32767,11,32767,32767,32767,32767,32767,32767,32767,
194,32767,32767,32767,32767,32767,32767,32767,32767,332,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,364,342,32767,
32767,32767,32767,32767,32767,193,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,373,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,212,32767,32767,32767,32,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,54,
67,32767,32767,32767,32767,32767,32767,32767,32767,287,32767,32767,
32767,32767,32767,51,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,273,219,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,261,32767,32767,32767,32767,
32767,123,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,198,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,233,32767,32767,32767,32767,32767,32767,32767,338,32767,32767,
32767,32767,32767,32767,32767,236,32767,32767,32767,310,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,232,32767,32767,32767,32767,135,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,65,32767,32767,150,32767,32767,32767,
32767,32767,32767,32767,32767,32767,2,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,378,32767,32767,32767,32767,32767,107,32767,32767,32767,32767,
32767,32767,32767,335,32767,358,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,188,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
254,32767,32767,146,32767,32767,32767,32767,32767,153,33,32767,
32767,32767,32767,32767,32767,32767,242,32767,32767,32767,32767,32767,
32767,32767,32767,226,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,167,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,104,32767,32767,
32767,32767,32767,32767,32767,195,37,32767,32767,253,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,88,32767,32767,32767,32767,154,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,300,32767,32767,32767,330,314,326,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,259,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,134,32767,32767,32767,32767,341,
32767,32767,32767,32767,32767,32767,281,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,316,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,22,32767,32767,32767,32767,32767,
32767,32767,268,32767,32767,144,32767,32767,32767,32767,32767,32767,
32767,239,165,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,200,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,351,87,32767,32767,255,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,180,32767,32767,32767,32767,32767,10,24,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,376,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,230,32767,32767,32767,32767,32767,303,44,217,
32767,32767,32767,32767,32767,32767,32767,32767,317,32767,32767,32767,
266,32767,58,32767,84,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,181,32767,381,32767,296,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,40,32767,32767,32767,32767,32767,133,196,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,263,32767,
32767,32767,32767,32767,32767,182,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,28,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,307,32767,32767,
32767,32767,3,32767,32767,32767,32767,32767,32767,32767,32767,32767,
174,298,32767,32767,32767,32767,362,32767,32767,32767,151,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,99,32767,112,
32767,32767,15,32767,32767,32767,32767,32767,32767,32767,32767,129,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,76,32767,32767,32767,32767,93,32767,337,32767,32767,
356,32767,32767,32767,328,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,91,32767,250,32767,32767,32767,32767,
32767,32767,32767,32767,205,32767,32767,32767,32767,32767,32767,32767,
32767,368,32767,1,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,38,32767,203,32767,176,32767,32767,32767,32767,
32767,32767,208,32767,32767,32767,32767,32767,32767,32767,320,32767,
156,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,277,32767,32767,32767,32767,32767,32767,
32767,30,32767,32767,344,32767,32767,32767,32767,383,32767,32767,
155,32767,32767,119,32767,32767,32767,32767,32767,32767,32767,32767,
32767,211,43,32767,32767,32767,32767,32767,141,32767,158,32767,
32767,32767,32767,32767,283,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,280,32767,120,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,35,32767,32767,32767,32767,32767,347,32767,32767,
32767,32767,318,32767,32767,32767,235,32767,32767,32767,32767,32767,
32767,32767,32767,32767,262,32767,32767,32767,32767,45,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,305,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,278,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,238,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,7,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,122,32767,19,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,288,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,206,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,139,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,56,32767,32767,32767,32767,106,32767,77,32767,32767,32767,
32767,101,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,379,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,4,32767,32767,62,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,201,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,163,32767,32767,
98,32767,32767,32767,32767,32767,32767,162,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,192,82,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,340,32767,32767,32767,145,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,184,32767,32767,32767,32767,32767,32767,173,32767,32767,32767,
32767,32767,32767,32767,32767,32767,301,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,149,32767,32767,32767,32767,32767,32767,32767,32767,279,32767,
142,32767,32767,294,32767,32767,32767,32767,32767,32767,32767,333,
32767,32767,32767,32767,32767,117,32767,32767,69,32767,32767,96,
32767,32767,32767,286,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,73,32767,32767,32767,32767,
32767,103,32767,164,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
92,32767,32767,32767,32767,32767,221,272,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,25,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,311,
225,32767,207,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,295,32767,108,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,290,384,32767,32767,32767,32767,
32767,32767,32767,32767,80,32767,346,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,366,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,128,32767,32767,
32767,32767,32767,83,243,32767,32767,32767,270,32767,32767,118,
32767,32767,249,32767,32767,241,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,229,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,86,32767,32767,260,50,32767,32767,227,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,23,32767,32767,32767,32767,32767,32767,309,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
371,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,114,32767,32767,32767,32767,32767,32767,
365,13,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,352,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,178,289,32767,32767,32767,32767,32767,32767,
32767,32767,81,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,60,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,105,32767,32767,32767,32767,32767,32767,32767,32767,32767,
168,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,350,32767,32767,32767,32767,
276,32767,32767,32767,32767,32767,32767,32767,199,59,32767,32767,
32767,32767,32767,32767,32767,322,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,339,32767,32767,32767,32767,
32767,32767,32767,94,32767,32767,228,32767,32767,32767,32767,293,
32767,32767,32767,55,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,244,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,66,32767,32767,32767,32767,258,357,32767,32767,32767,
32767,8,32767,32767,32767,12,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,124,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
111,32767,32767,32767,32767,32767,63,32767,32767,32767,95,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,329,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,159,32767,32767,32767,32767,
215,32767,32767,274,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,85,32767,6,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,312,113,32767,32767,32767,78,
32767,323,18,32767,32767,32767,32767,32767,32767,369,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,90,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
325,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
210,32767,32767,32767,32767,32767,9,32767,32767,121,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,319,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,220,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,39,32767,32767,
271,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,234,
32767,32767,32767,367,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,363,0,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
204,177,32767,32767,32767,32767,32767,32767,32767,32767,148,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,284,252,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,222,32767,75,32767,32767,32767,32767,292,
32767,32767,32767,32767,32767,32767,172,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,360,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,138,32767,32767,380,32767,359,32767,
32767,32767,32767,32767,32767,79,32767,32767,32767,32767,248,32767,
32767,32767,32767,32767,32767,32767,147,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,327,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,299,32767,32767,32767,32767,72,32767,32767,32767,
32767,240,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
343,32767,32767,32767,32767,32767,137,32767,32767,32767,32767,32767,
32767,32767,32767,130,32767,32767,32767,32767,32767,32767,32767,131,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,57,32767,5,32767,32767,32767,
32767,32767,32767,291,32767,32767,32767,32767,32767,213,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,375,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,68,
32767,32767,32767,32767,64,32767,32767,32767,32767,32767,32767,171,
32767,32767,32767,49,32767,32767,32767,32767,32767,48,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,275,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,345,331,32767,32767,32767,32767,32767,157,32767,32767,32767,
32767,32767,32767,32767,32767,190,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,74,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
334,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,179,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,264,
32767,32767,32767,32767,32767,32767,32767,32767,32767,53,32767,32767,
32767,32767,32767,32767,209,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,245,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,61,32767,
52,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,186,32767,41,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
70,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,247,32767,32767,32767,32767,136,36,32767,32767,32767,
32767,32767,32767,32767,32767,32767,31,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,336,32767,32767,32767,265,191,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,127,32767,32767,32767,32767,32767,32767,
321,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,116,32767,32767,32767,32767,32767,32767,26,32767,32767,
32767,32767,32767,32767,32767,32767,269,32767,32767,32767,32767,32767,
100,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,183,34,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,372,32767,32767,32767,32767,32767,
308,32767,32767,285,32767,32767,32767,32767,377,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,257,32767,32767,32767,32767,32767,97,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,89,32767,32767,302,160,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,170,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,110,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,16,32767,214,71,32767,32767,32767,
32767,32767,32767,197,32767,32767,32767,32767,32767,32767,32767,17,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
237,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,187,32767,218,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,304,32767,32767,32767,32767,32767,32767,32767,32767,185,32767,
348,32767,32767,32767,231,32767,32767,32767,32767,32767,251,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,132,32767,32767,32767,32767,32767,32767,32767,115,32767,32767,
32767,29,32767,32767,32767,32767,32767,32767,32767,32767,32767,47,
32767,32767,32767,32767,32767
};


/* t1= 45205  t2=3702303  type= 0 */

inline SYMBOL *get_hash_symbol(const char *s,unsigned int length,bool function)
{
  ulong idx = 2003+char_table[(uchar) *s];
  SYMBOL *sim;
  const char *start=s;
  int i=unique_length[(uchar) *s++];
  if (i > (int) length) i=(int) length;
  while (--i > 0)
    idx= (idx ^ (char_table[(uchar) *s++] + (idx << 7)));
  idx=my_function_table[(idx & 8388607) % 4133];
  if (idx >= 262)
  {
    if (!function || idx >= 32767) return (SYMBOL*) 0;
    sim=sql_functions + (idx - 262);
  }
  else
    sim=symbols + idx;
  if ((length != sim->length) || lex_casecmp(start,sim->name,length))
    return  (SYMBOL *)0;
  return sim;
}
