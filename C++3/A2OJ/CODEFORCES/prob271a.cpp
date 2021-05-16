// // https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int my_array[] = {1023, 1024, 1025, 1026, 1027, 1028, 1029, 1032, 1034, 1035, 1036, 1037, 1038, 1039, 1042, 1043, 1045, 1046, 1047, 1048, 1049, 1052, 1053, 1054, 1056, 1057, 1058, 1059, 1062, 1063, 1064, 1065, 1067, 1068, 1069, 1072, 1073, 1074, 1075, 1076, 1078, 1079, 1082, 1083, 1084, 1085, 1086, 1087, 1089, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1230, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1243, 1245, 1246, 1247, 1248, 1249, 1250, 1253, 1254, 1256, 1257, 1258, 1259, 1260, 1263, 1264, 1265, 1267, 1268, 1269, 1270, 1273, 1274, 1275, 1276, 1278, 1279, 1280, 1283, 1284, 1285, 1286, 1287, 1289, 1290, 1293, 1294, 1295, 1296, 1297, 1298, 1302, 1304, 1305, 1306, 1307, 1308, 1309, 1320, 1324, 1325, 1326, 1327, 1328, 1329, 1340, 1342, 1345, 1346, 1347, 1348, 1349, 1350, 1352, 1354, 1356, 1357, 1358, 1359, 1360, 1362, 1364, 1365, 1367, 1368, 1369, 1370, 1372, 1374, 1375, 1376, 1378, 1379, 1380, 1382, 1384, 1385, 1386, 1387, 1389, 1390, 1392, 1394, 1395, 1396, 1397, 1398, 1402, 1403, 1405, 1406, 1407, 1408, 1409, 1420, 1423, 1425, 1426, 1427, 1428, 1429, 1430, 1432, 1435, 1436, 1437, 1438, 1439, 1450, 1452, 1453, 1456, 1457, 1458, 1459, 1460, 1462, 1463, 1465, 1467, 1468, 1469, 1470, 1472, 1473, 1475, 1476, 1478, 1479, 1480, 1482, 1483, 1485, 1486, 1487, 1489, 1490, 1492, 1493, 1495, 1496, 1497, 1498, 1502, 1503, 1504, 1506, 1507, 1508, 1509, 1520, 1523, 1524, 1526, 1527, 1528, 1529, 1530, 1532, 1534, 1536, 1537, 1538, 1539, 1540, 1542, 1543, 1546, 1547, 1548, 1549, 1560, 1562, 1563, 1564, 1567, 1568, 1569, 1570, 1572, 1573, 1574, 1576, 1578, 1579, 1580, 1582, 1583, 1584, 1586, 1587, 1589, 1590, 1592, 1593, 1594, 1596, 1597, 1598, 1602, 1603, 1604, 1605, 1607, 1608, 1609, 1620, 1623, 1624, 1625, 1627, 1628, 1629, 1630, 1632, 1634, 1635, 1637, 1638, 1639, 1640, 1642, 1643, 1645, 1647, 1648, 1649, 1650, 1652, 1653, 1654, 1657, 1658, 1659, 1670, 1672, 1673, 1674, 1675, 1678, 1679, 1680, 1682, 1683, 1684, 1685, 1687, 1689, 1690, 1692, 1693, 1694, 1695, 1697, 1698, 1702, 1703, 1704, 1705, 1706, 1708, 1709, 1720, 1723, 1724, 1725, 1726, 1728, 1729, 1730, 1732, 1734, 1735, 1736, 1738, 1739, 1740, 1742, 1743, 1745, 1746, 1748, 1749, 1750, 1752, 1753, 1754, 1756, 1758, 1759, 1760, 1762, 1763, 1764, 1765, 1768, 1769, 1780, 1782, 1783, 1784, 1785, 1786, 1789, 1790, 1792, 1793, 1794, 1795, 1796, 1798, 1802, 1803, 1804, 1805, 1806, 1807, 1809, 1820, 1823, 1824, 1825, 1826, 1827, 1829, 1830, 1832, 1834, 1835, 1836, 1837, 1839, 1840, 1842, 1843, 1845, 1846, 1847, 1849, 1850, 1852, 1853, 1854, 1856, 1857, 1859, 1860, 1862, 1863, 1864, 1865, 1867, 1869, 1870, 1872, 1873, 1874, 1875, 1876, 1879, 1890, 1892, 1893, 1894, 1895, 1896, 1897, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1920, 1923, 1924, 1925, 1926, 1927, 1928, 1930, 1932, 1934, 1935, 1936, 1937, 1938, 1940, 1942, 1943, 1945, 1946, 1947, 1948, 1950, 1952, 1953, 1954, 1956, 1957, 1958, 1960, 1962, 1963, 1964, 1965, 1967, 1968, 1970, 1972, 1973, 1974, 1975, 1976, 1978, 1980, 1982, 1983, 1984, 1985, 1986, 1987, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2031, 2034, 2035, 2036, 2037, 2038, 2039, 2041, 2043, 2045, 2046, 2047, 2048, 2049, 2051, 2053, 2054, 2056, 2057, 2058, 2059, 2061, 2063, 2064, 2065, 2067, 2068, 2069, 2071, 2073, 2074, 2075, 2076, 2078, 2079, 2081, 2083, 2084, 2085, 2086, 2087, 2089, 2091, 2093, 2094, 2095, 2096, 2097, 2098, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2130, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2143, 2145, 2146, 2147, 2148, 2149, 2150, 2153, 2154, 2156, 2157, 2158, 2159, 2160, 2163, 2164, 2165, 2167, 2168, 2169, 2170, 2173, 2174, 2175, 2176, 2178, 2179, 2180, 2183, 2184, 2185, 2186, 2187, 2189, 2190, 2193, 2194, 2195, 2196, 2197, 2198, 2301, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2314, 2315, 2316, 2317, 2318, 2319, 2340, 2341, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2354, 2356, 2357, 2358, 2359, 2360, 2361, 2364, 2365, 2367, 2368, 2369, 2370, 2371, 2374, 2375, 2376, 2378, 2379, 2380, 2381, 2384, 2385, 2386, 2387, 2389, 2390, 2391, 2394, 2395, 2396, 2397, 2398, 2401, 2403, 2405, 2406, 2407, 2408, 2409, 2410, 2413, 2415, 2416, 2417, 2418, 2419, 2430, 2431, 2435, 2436, 2437, 2438, 2439, 2450, 2451, 2453, 2456, 2457, 2458, 2459, 2460, 2461, 2463, 2465, 2467, 2468, 2469, 2470, 2471, 2473, 2475, 2476, 2478, 2479, 2480, 2481, 2483, 2485, 2486, 2487, 2489, 2490, 2491, 2493, 2495, 2496, 2497, 2498, 2501, 2503, 2504, 2506, 2507, 2508, 2509, 2510, 2513, 2514, 2516, 2517, 2518, 2519, 2530, 2531, 2534, 2536, 2537, 2538, 2539, 2540, 2541, 2543, 2546, 2547, 2548, 2549, 2560, 2561, 2563, 2564, 2567, 2568, 2569, 2570, 2571, 2573, 2574, 2576, 2578, 2579, 2580, 2581, 2583, 2584, 2586, 2587, 2589, 2590, 2591, 2593, 2594, 2596, 2597, 2598, 2601, 2603, 2604, 2605, 2607, 2608, 2609, 2610, 2613, 2614, 2615, 2617, 2618, 2619, 2630, 2631, 2634, 2635, 2637, 2638, 2639, 2640, 2641, 2643, 2645, 2647, 2648, 2649, 2650, 2651, 2653, 2654, 2657, 2658, 2659, 2670, 2671, 2673, 2674, 2675, 2678, 2679, 2680, 2681, 2683, 2684, 2685, 2687, 2689, 2690, 2691, 2693, 2694, 2695, 2697, 2698, 2701, 2703, 2704, 2705, 2706, 2708, 2709, 2710, 2713, 2714, 2715, 2716, 2718, 2719, 2730, 2731, 2734, 2735, 2736, 2738, 2739, 2740, 2741, 2743, 2745, 2746, 2748, 2749, 2750, 2751, 2753, 2754, 2756, 2758, 2759, 2760, 2761, 2763, 2764, 2765, 2768, 2769, 2780, 2781, 2783, 2784, 2785, 2786, 2789, 2790, 2791, 2793, 2794, 2795, 2796, 2798, 2801, 2803, 2804, 2805, 2806, 2807, 2809, 2810, 2813, 2814, 2815, 2816, 2817, 2819, 2830, 2831, 2834, 2835, 2836, 2837, 2839, 2840, 2841, 2843, 2845, 2846, 2847, 2849, 2850, 2851, 2853, 2854, 2856, 2857, 2859, 2860, 2861, 2863, 2864, 2865, 2867, 2869, 2870, 2871, 2873, 2874, 2875, 2876, 2879, 2890, 2891, 2893, 2894, 2895, 2896, 2897, 2901, 2903, 2904, 2905, 2906, 2907, 2908, 2910, 2913, 2914, 2915, 2916, 2917, 2918, 2930, 2931, 2934, 2935, 2936, 2937, 2938, 2940, 2941, 2943, 2945, 2946, 2947, 2948, 2950, 2951, 2953, 2954, 2956, 2957, 2958, 2960, 2961, 2963, 2964, 2965, 2967, 2968, 2970, 2971, 2973, 2974, 2975, 2976, 2978, 2980, 2981, 2983, 2984, 2985, 2986, 2987, 3012, 3014, 3015, 3016, 3017, 3018, 3019, 3021, 3024, 3025, 3026, 3027, 3028, 3029, 3041, 3042, 3045, 3046, 3047, 3048, 3049, 3051, 3052, 3054, 3056, 3057, 3058, 3059, 3061, 3062, 3064, 3065, 3067, 3068, 3069, 3071, 3072, 3074, 3075, 3076, 3078, 3079, 3081, 3082, 3084, 3085, 3086, 3087, 3089, 3091, 3092, 3094, 3095, 3096, 3097, 3098, 3102, 3104, 3105, 3106, 3107, 3108, 3109, 3120, 3124, 3125, 3126, 3127, 3128, 3129, 3140, 3142, 3145, 3146, 3147, 3148, 3149, 3150, 3152, 3154, 3156, 3157, 3158, 3159, 3160, 3162, 3164, 3165, 3167, 3168, 3169, 3170, 3172, 3174, 3175, 3176, 3178, 3179, 3180, 3182, 3184, 3185, 3186, 3187, 3189, 3190, 3192, 3194, 3195, 3196, 3197, 3198, 3201, 3204, 3205, 3206, 3207, 3208, 3209, 3210, 3214, 3215, 3216, 3217, 3218, 3219, 3240, 3241, 3245, 3246, 3247, 3248, 3249, 3250, 3251, 3254, 3256, 3257, 3258, 3259, 3260, 3261, 3264, 3265, 3267, 3268, 3269, 3270, 3271, 3274, 3275, 3276, 3278, 3279, 3280, 3281, 3284, 3285, 3286, 3287, 3289, 3290, 3291, 3294, 3295, 3296, 3297, 3298, 3401, 3402, 3405, 3406, 3407, 3408, 3409, 3410, 3412, 3415, 3416, 3417, 3418, 3419, 3420, 3421, 3425, 3426, 3427, 3428, 3429, 3450, 3451, 3452, 3456, 3457, 3458, 3459, 3460, 3461, 3462, 3465, 3467, 3468, 3469, 3470, 3471, 3472, 3475, 3476, 3478, 3479, 3480, 3481, 3482, 3485, 3486, 3487, 3489, 3490, 3491, 3492, 3495, 3496, 3497, 3498, 3501, 3502, 3504, 3506, 3507, 3508, 3509, 3510, 3512, 3514, 3516, 3517, 3518, 3519, 3520, 3521, 3524, 3526, 3527, 3528, 3529, 3540, 3541, 3542, 3546, 3547, 3548, 3549, 3560, 3561, 3562, 3564, 3567, 3568, 3569, 3570, 3571, 3572, 3574, 3576, 3578, 3579, 3580, 3581, 3582, 3584, 3586, 3587, 3589, 3590, 3591, 3592, 3594, 3596, 3597, 3598, 3601, 3602, 3604, 3605, 3607, 3608, 3609, 3610, 3612, 3614, 3615, 3617, 3618, 3619, 3620, 3621, 3624, 3625, 3627, 3628, 3629, 3640, 3641, 3642, 3645, 3647, 3648, 3649, 3650, 3651, 3652, 3654, 3657, 3658, 3659, 3670, 3671, 3672, 3674, 3675, 3678, 3679, 3680, 3681, 3682, 3684, 3685, 3687, 3689, 3690, 3691, 3692, 3694, 3695, 3697, 3698, 3701, 3702, 3704, 3705, 3706, 3708, 3709, 3710, 3712, 3714, 3715, 3716, 3718, 3719, 3720, 3721, 3724, 3725, 3726, 3728, 3729, 3740, 3741, 3742, 3745, 3746, 3748, 3749, 3750, 3751, 3752, 3754, 3756, 3758, 3759, 3760, 3761, 3762, 3764, 3765, 3768, 3769, 3780, 3781, 3782, 3784, 3785, 3786, 3789, 3790, 3791, 3792, 3794, 3795, 3796, 3798, 3801, 3802, 3804, 3805, 3806, 3807, 3809, 3810, 3812, 3814, 3815, 3816, 3817, 3819, 3820, 3821, 3824, 3825, 3826, 3827, 3829, 3840, 3841, 3842, 3845, 3846, 3847, 3849, 3850, 3851, 3852, 3854, 3856, 3857, 3859, 3860, 3861, 3862, 3864, 3865, 3867, 3869, 3870, 3871, 3872, 3874, 3875, 3876, 3879, 3890, 3891, 3892, 3894, 3895, 3896, 3897, 3901, 3902, 3904, 3905, 3906, 3907, 3908, 3910, 3912, 3914, 3915, 3916, 3917, 3918, 3920, 3921, 3924, 3925, 3926, 3927, 3928, 3940, 3941, 3942, 3945, 3946, 3947, 3948, 3950, 3951, 3952, 3954, 3956, 3957, 3958, 3960, 3961, 3962, 3964, 3965, 3967, 3968, 3970, 3971, 3972, 3974, 3975, 3976, 3978, 3980, 3981, 3982, 3984, 3985, 3986, 3987, 4012, 4013, 4015, 4016, 4017, 4018, 4019, 4021, 4023, 4025, 4026, 4027, 4028, 4029, 4031, 4032, 4035, 4036, 4037, 4038, 4039, 4051, 4052, 4053, 4056, 4057, 4058, 4059, 4061, 4062, 4063, 4065, 4067, 4068, 4069, 4071, 4072, 4073, 4075, 4076, 4078, 4079, 4081, 4082, 4083, 4085, 4086, 4087, 4089, 4091, 4092, 4093, 4095, 4096, 4097, 4098, 4102, 4103, 4105, 4106, 4107, 4108, 4109, 4120, 4123, 4125, 4126, 4127, 4128, 4129, 4130, 4132, 4135, 4136, 4137, 4138, 4139, 4150, 4152, 4153, 4156, 4157, 4158, 4159, 4160, 4162, 4163, 4165, 4167, 4168, 4169, 4170, 4172, 4173, 4175, 4176, 4178, 4179, 4180, 4182, 4183, 4185, 4186, 4187, 4189, 4190, 4192, 4193, 4195, 4196, 4197, 4198, 4201, 4203, 4205, 4206, 4207, 4208, 4209, 4210, 4213, 4215, 4216, 4217, 4218, 4219, 4230, 4231, 4235, 4236, 4237, 4238, 4239, 4250, 4251, 4253, 4256, 4257, 4258, 4259, 4260, 4261, 4263, 4265, 4267, 4268, 4269, 4270, 4271, 4273, 4275, 4276, 4278, 4279, 4280, 4281, 4283, 4285, 4286, 4287, 4289, 4290, 4291, 4293, 4295, 4296, 4297, 4298, 4301, 4302, 4305, 4306, 4307, 4308, 4309, 4310, 4312, 4315, 4316, 4317, 4318, 4319, 4320, 4321, 4325, 4326, 4327, 4328, 4329, 4350, 4351, 4352, 4356, 4357, 4358, 4359, 4360, 4361, 4362, 4365, 4367, 4368, 4369, 4370, 4371, 4372, 4375, 4376, 4378, 4379, 4380, 4381, 4382, 4385, 4386, 4387, 4389, 4390, 4391, 4392, 4395, 4396, 4397, 4398, 4501, 4502, 4503, 4506, 4507, 4508, 4509, 4510, 4512, 4513, 4516, 4517, 4518, 4519, 4520, 4521, 4523, 4526, 4527, 4528, 4529, 4530, 4531, 4532, 4536, 4537, 4538, 4539, 4560, 4561, 4562, 4563, 4567, 4568, 4569, 4570, 4571, 4572, 4573, 4576, 4578, 4579, 4580, 4581, 4582, 4583, 4586, 4587, 4589, 4590, 4591, 4592, 4593, 4596, 4597, 4598, 4601, 4602, 4603, 4605, 4607, 4608, 4609, 4610, 4612, 4613, 4615, 4617, 4618, 4619, 4620, 4621, 4623, 4625, 4627, 4628, 4629, 4630, 4631, 4632, 4635, 4637, 4638, 4639, 4650, 4651, 4652, 4653, 4657, 4658, 4659, 4670, 4671, 4672, 4673, 4675, 4678, 4679, 4680, 4681, 4682, 4683, 4685, 4687, 4689, 4690, 4691, 4692, 4693, 4695, 4697, 4698, 4701, 4702, 4703, 4705, 4706, 4708, 4709, 4710, 4712, 4713, 4715, 4716, 4718, 4719, 4720, 4721, 4723, 4725, 4726, 4728, 4729, 4730, 4731, 4732, 4735, 4736, 4738, 4739, 4750, 4751, 4752, 4753, 4756, 4758, 4759, 4760, 4761, 4762, 4763, 4765, 4768, 4769, 4780, 4781, 4782, 4783, 4785, 4786, 4789, 4790, 4791, 4792, 4793, 4795, 4796, 4798, 4801, 4802, 4803, 4805, 4806, 4807, 4809, 4810, 4812, 4813, 4815, 4816, 4817, 4819, 4820, 4821, 4823, 4825, 4826, 4827, 4829, 4830, 4831, 4832, 4835, 4836, 4837, 4839, 4850, 4851, 4852, 4853, 4856, 4857, 4859, 4860, 4861, 4862, 4863, 4865, 4867, 4869, 4870, 4871, 4872, 4873, 4875, 4876, 4879, 4890, 4891, 4892, 4893, 4895, 4896, 4897, 4901, 4902, 4903, 4905, 4906, 4907, 4908, 4910, 4912, 4913, 4915, 4916, 4917, 4918, 4920, 4921, 4923, 4925, 4926, 4927, 4928, 4930, 4931, 4932, 4935, 4936, 4937, 4938, 4950, 4951, 4952, 4953, 4956, 4957, 4958, 4960, 4961, 4962, 4963, 4965, 4967, 4968, 4970, 4971, 4972, 4973, 4975, 4976, 4978, 4980, 4981, 4982, 4983, 4985, 4986, 4987, 5012, 5013, 5014, 5016, 5017, 5018, 5019, 5021, 5023, 5024, 5026, 5027, 5028, 5029, 5031, 5032, 5034, 5036, 5037, 5038, 5039, 5041, 5042, 5043, 5046, 5047, 5048, 5049, 5061, 5062, 5063, 5064, 5067, 5068, 5069, 5071, 5072, 5073, 5074, 5076, 5078, 5079, 5081, 5082, 5083, 5084, 5086, 5087, 5089, 5091, 5092, 5093, 5094, 5096, 5097, 5098, 5102, 5103, 5104, 5106, 5107, 5108, 5109, 5120, 5123, 5124, 5126, 5127, 5128, 5129, 5130, 5132, 5134, 5136, 5137, 5138, 5139, 5140, 5142, 5143, 5146, 5147, 5148, 5149, 5160, 5162, 5163, 5164, 5167, 5168, 5169, 5170, 5172, 5173, 5174, 5176, 5178, 5179, 5180, 5182, 5183, 5184, 5186, 5187, 5189, 5190, 5192, 5193, 5194, 5196, 5197, 5198, 5201, 5203, 5204, 5206, 5207, 5208, 5209, 5210, 5213, 5214, 5216, 5217, 5218, 5219, 5230, 5231, 5234, 5236, 5237, 5238, 5239, 5240, 5241, 5243, 5246, 5247, 5248, 5249, 5260, 5261, 5263, 5264, 5267, 5268, 5269, 5270, 5271, 5273, 5274, 5276, 5278, 5279, 5280, 5281, 5283, 5284, 5286, 5287, 5289, 5290, 5291, 5293, 5294, 5296, 5297, 5298, 5301, 5302, 5304, 5306, 5307, 5308, 5309, 5310, 5312, 5314, 5316, 5317, 5318, 5319, 5320, 5321, 5324, 5326, 5327, 5328, 5329, 5340, 5341, 5342, 5346, 5347, 5348, 5349, 5360, 5361, 5362, 5364, 5367, 5368, 5369, 5370, 5371, 5372, 5374, 5376, 5378, 5379, 5380, 5381, 5382, 5384, 5386, 5387, 5389, 5390, 5391, 5392, 5394, 5396, 5397, 5398, 5401, 5402, 5403, 5406, 5407, 5408, 5409, 5410, 5412, 5413, 5416, 5417, 5418, 5419, 5420, 5421, 5423, 5426, 5427, 5428, 5429, 5430, 5431, 5432, 5436, 5437, 5438, 5439, 5460, 5461, 5462, 5463, 5467, 5468, 5469, 5470, 5471, 5472, 5473, 5476, 5478, 5479, 5480, 5481, 5482, 5483, 5486, 5487, 5489, 5490, 5491, 5492, 5493, 5496, 5497, 5498, 5601, 5602, 5603, 5604, 5607, 5608, 5609, 5610, 5612, 5613, 5614, 5617, 5618, 5619, 5620, 5621, 5623, 5624, 5627, 5628, 5629, 5630, 5631, 5632, 5634, 5637, 5638, 5639, 5640, 5641, 5642, 5643, 5647, 5648, 5649, 5670, 5671, 5672, 5673, 5674, 5678, 5679, 5680, 5681, 5682, 5683, 5684, 5687, 5689, 5690, 5691, 5692, 5693, 5694, 5697, 5698, 5701, 5702, 5703, 5704, 5706, 5708, 5709, 5710, 5712, 5713, 5714, 5716, 5718, 5719, 5720, 5721, 5723, 5724, 5726, 5728, 5729, 5730, 5731, 5732, 5734, 5736, 5738, 5739, 5740, 5741, 5742, 5743, 5746, 5748, 5749, 5760, 5761, 5762, 5763, 5764, 5768, 5769, 5780, 5781, 5782, 5783, 5784, 5786, 5789, 5790, 5791, 5792, 5793, 5794, 5796, 5798, 5801, 5802, 5803, 5804, 5806, 5807, 5809, 5810, 5812, 5813, 5814, 5816, 5817, 5819, 5820, 5821, 5823, 5824, 5826, 5827, 5829, 5830, 5831, 5832, 5834, 5836, 5837, 5839, 5840, 5841, 5842, 5843, 5846, 5847, 5849, 5860, 5861, 5862, 5863, 5864, 5867, 5869, 5870, 5871, 5872, 5873, 5874, 5876, 5879, 5890, 5891, 5892, 5893, 5894, 5896, 5897, 5901, 5902, 5903, 5904, 5906, 5907, 5908, 5910, 5912, 5913, 5914, 5916, 5917, 5918, 5920, 5921, 5923, 5924, 5926, 5927, 5928, 5930, 5931, 5932, 5934, 5936, 5937, 5938, 5940, 5941, 5942, 5943, 5946, 5947, 5948, 5960, 5961, 5962, 5963, 5964, 5967, 5968, 5970, 5971, 5972, 5973, 5974, 5976, 5978, 5980, 5981, 5982, 5983, 5984, 5986, 5987, 6012, 6013, 6014, 6015, 6017, 6018, 6019, 6021, 6023, 6024, 6025, 6027, 6028, 6029, 6031, 6032, 6034, 6035, 6037, 6038, 6039, 6041, 6042, 6043, 6045, 6047, 6048, 6049, 6051, 6052, 6053, 6054, 6057, 6058, 6059, 6071, 6072, 6073, 6074, 6075, 6078, 6079, 6081, 6082, 6083, 6084, 6085, 6087, 6089, 6091, 6092, 6093, 6094, 6095, 6097, 6098, 6102, 6103, 6104, 6105, 6107, 6108, 6109, 6120, 6123, 6124, 6125, 6127, 6128, 6129, 6130, 6132, 6134, 6135, 6137, 6138, 6139, 6140, 6142, 6143, 6145, 6147, 6148, 6149, 6150, 6152, 6153, 6154, 6157, 6158, 6159, 6170, 6172, 6173, 6174, 6175, 6178, 6179, 6180, 6182, 6183, 6184, 6185, 6187, 6189, 6190, 6192, 6193, 6194, 6195, 6197, 6198, 6201, 6203, 6204, 6205, 6207, 6208, 6209, 6210, 6213, 6214, 6215, 6217, 6218, 6219, 6230, 6231, 6234, 6235, 6237, 6238, 6239, 6240, 6241, 6243, 6245, 6247, 6248, 6249, 6250, 6251, 6253, 6254, 6257, 6258, 6259, 6270, 6271, 6273, 6274, 6275, 6278, 6279, 6280, 6281, 6283, 6284, 6285, 6287, 6289, 6290, 6291, 6293, 6294, 6295, 6297, 6298, 6301, 6302, 6304, 6305, 6307, 6308, 6309, 6310, 6312, 6314, 6315, 6317, 6318, 6319, 6320, 6321, 6324, 6325, 6327, 6328, 6329, 6340, 6341, 6342, 6345, 6347, 6348, 6349, 6350, 6351, 6352, 6354, 6357, 6358, 6359, 6370, 6371, 6372, 6374, 6375, 6378, 6379, 6380, 6381, 6382, 6384, 6385, 6387, 6389, 6390, 6391, 6392, 6394, 6395, 6397, 6398, 6401, 6402, 6403, 6405, 6407, 6408, 6409, 6410, 6412, 6413, 6415, 6417, 6418, 6419, 6420, 6421, 6423, 6425, 6427, 6428, 6429, 6430, 6431, 6432, 6435, 6437, 6438, 6439, 6450, 6451, 6452, 6453, 6457, 6458, 6459, 6470, 6471, 6472, 6473, 6475, 6478, 6479, 6480, 6481, 6482, 6483, 6485, 6487, 6489, 6490, 6491, 6492, 6493, 6495, 6497, 6498, 6501, 6502, 6503, 6504, 6507, 6508, 6509, 6510, 6512, 6513, 6514, 6517, 6518, 6519, 6520, 6521, 6523, 6524, 6527, 6528, 6529, 6530, 6531, 6532, 6534, 6537, 6538, 6539, 6540, 6541, 6542, 6543, 6547, 6548, 6549, 6570, 6571, 6572, 6573, 6574, 6578, 6579, 6580, 6581, 6582, 6583, 6584, 6587, 6589, 6590, 6591, 6592, 6593, 6594, 6597, 6598, 6701, 6702, 6703, 6704, 6705, 6708, 6709, 6710, 6712, 6713, 6714, 6715, 6718, 6719, 6720, 6721, 6723, 6724, 6725, 6728, 6729, 6730, 6731, 6732, 6734, 6735, 6738, 6739, 6740, 6741, 6742, 6743, 6745, 6748, 6749, 6750, 6751, 6752, 6753, 6754, 6758, 6759, 6780, 6781, 6782, 6783, 6784, 6785, 6789, 6790, 6791, 6792, 6793, 6794, 6795, 6798, 6801, 6802, 6803, 6804, 6805, 6807, 6809, 6810, 6812, 6813, 6814, 6815, 6817, 6819, 6820, 6821, 6823, 6824, 6825, 6827, 6829, 6830, 6831, 6832, 6834, 6835, 6837, 6839, 6840, 6841, 6842, 6843, 6845, 6847, 6849, 6850, 6851, 6852, 6853, 6854, 6857, 6859, 6870, 6871, 6872, 6873, 6874, 6875, 6879, 6890, 6891, 6892, 6893, 6894, 6895, 6897, 6901, 6902, 6903, 6904, 6905, 6907, 6908, 6910, 6912, 6913, 6914, 6915, 6917, 6918, 6920, 6921, 6923, 6924, 6925, 6927, 6928, 6930, 6931, 6932, 6934, 6935, 6937, 6938, 6940, 6941, 6942, 6943, 6945, 6947, 6948, 6950, 6951, 6952, 6953, 6954, 6957, 6958, 6970, 6971, 6972, 6973, 6974, 6975, 6978, 6980, 6981, 6982, 6983, 6984, 6985, 6987, 7012, 7013, 7014, 7015, 7016, 7018, 7019, 7021, 7023, 7024, 7025, 7026, 7028, 7029, 7031, 7032, 7034, 7035, 7036, 7038, 7039, 7041, 7042, 7043, 7045, 7046, 7048, 7049, 7051, 7052, 7053, 7054, 7056, 7058, 7059, 7061, 7062, 7063, 7064, 7065, 7068, 7069, 7081, 7082, 7083, 7084, 7085, 7086, 7089, 7091, 7092, 7093, 7094, 7095, 7096, 7098, 7102, 7103, 7104, 7105, 7106, 7108, 7109, 7120, 7123, 7124, 7125, 7126, 7128, 7129, 7130, 7132, 7134, 7135, 7136, 7138, 7139, 7140, 7142, 7143, 7145, 7146, 7148, 7149, 7150, 7152, 7153, 7154, 7156, 7158, 7159, 7160, 7162, 7163, 7164, 7165, 7168, 7169, 7180, 7182, 7183, 7184, 7185, 7186, 7189, 7190, 7192, 7193, 7194, 7195, 7196, 7198, 7201, 7203, 7204, 7205, 7206, 7208, 7209, 7210, 7213, 7214, 7215, 7216, 7218, 7219, 7230, 7231, 7234, 7235, 7236, 7238, 7239, 7240, 7241, 7243, 7245, 7246, 7248, 7249, 7250, 7251, 7253, 7254, 7256, 7258, 7259, 7260, 7261, 7263, 7264, 7265, 7268, 7269, 7280, 7281, 7283, 7284, 7285, 7286, 7289, 7290, 7291, 7293, 7294, 7295, 7296, 7298, 7301, 7302, 7304, 7305, 7306, 7308, 7309, 7310, 7312, 7314, 7315, 7316, 7318, 7319, 7320, 7321, 7324, 7325, 7326, 7328, 7329, 7340, 7341, 7342, 7345, 7346, 7348, 7349, 7350, 7351, 7352, 7354, 7356, 7358, 7359, 7360, 7361, 7362, 7364, 7365, 7368, 7369, 7380, 7381, 7382, 7384, 7385, 7386, 7389, 7390, 7391, 7392, 7394, 7395, 7396, 7398, 7401, 7402, 7403, 7405, 7406, 7408, 7409, 7410, 7412, 7413, 7415, 7416, 7418, 7419, 7420, 7421, 7423, 7425, 7426, 7428, 7429, 7430, 7431, 7432, 7435, 7436, 7438, 7439, 7450, 7451, 7452, 7453, 7456, 7458, 7459, 7460, 7461, 7462, 7463, 7465, 7468, 7469, 7480, 7481, 7482, 7483, 7485, 7486, 7489, 7490, 7491, 7492, 7493, 7495, 7496, 7498, 7501, 7502, 7503, 7504, 7506, 7508, 7509, 7510, 7512, 7513, 7514, 7516, 7518, 7519, 7520, 7521, 7523, 7524, 7526, 7528, 7529, 7530, 7531, 7532, 7534, 7536, 7538, 7539, 7540, 7541, 7542, 7543, 7546, 7548, 7549, 7560, 7561, 7562, 7563, 7564, 7568, 7569, 7580, 7581, 7582, 7583, 7584, 7586, 7589, 7590, 7591, 7592, 7593, 7594, 7596, 7598, 7601, 7602, 7603, 7604, 7605, 7608, 7609, 7610, 7612, 7613, 7614, 7615, 7618, 7619, 7620, 7621, 7623, 7624, 7625, 7628, 7629, 7630, 7631, 7632, 7634, 7635, 7638, 7639, 7640, 7641, 7642, 7643, 7645, 7648, 7649, 7650, 7651, 7652, 7653, 7654, 7658, 7659, 7680, 7681, 7682, 7683, 7684, 7685, 7689, 7690, 7691, 7692, 7693, 7694, 7695, 7698, 7801, 7802, 7803, 7804, 7805, 7806, 7809, 7810, 7812, 7813, 7814, 7815, 7816, 7819, 7820, 7821, 7823, 7824, 7825, 7826, 7829, 7830, 7831, 7832, 7834, 7835, 7836, 7839, 7840, 7841, 7842, 7843, 7845, 7846, 7849, 7850, 7851, 7852, 7853, 7854, 7856, 7859, 7860, 7861, 7862, 7863, 7864, 7865, 7869, 7890, 7891, 7892, 7893, 7894, 7895, 7896, 7901, 7902, 7903, 7904, 7905, 7906, 7908, 7910, 7912, 7913, 7914, 7915, 7916, 7918, 7920, 7921, 7923, 7924, 7925, 7926, 7928, 7930, 7931, 7932, 7934, 7935, 7936, 7938, 7940, 7941, 7942, 7943, 7945, 7946, 7948, 7950, 7951, 7952, 7953, 7954, 7956, 7958, 7960, 7961, 7962, 7963, 7964, 7965, 7968, 7980, 7981, 7982, 7983, 7984, 7985, 7986, 8012, 8013, 8014, 8015, 8016, 8017, 8019, 8021, 8023, 8024, 8025, 8026, 8027, 8029, 8031, 8032, 8034, 8035, 8036, 8037, 8039, 8041, 8042, 8043, 8045, 8046, 8047, 8049, 8051, 8052, 8053, 8054, 8056, 8057, 8059, 8061, 8062, 8063, 8064, 8065, 8067, 8069, 8071, 8072, 8073, 8074, 8075, 8076, 8079, 8091, 8092, 8093, 8094, 8095, 8096, 8097, 8102, 8103, 8104, 8105, 8106, 8107, 8109, 8120, 8123, 8124, 8125, 8126, 8127, 8129, 8130, 8132, 8134, 8135, 8136, 8137, 8139, 8140, 8142, 8143, 8145, 8146, 8147, 8149, 8150, 8152, 8153, 8154, 8156, 8157, 8159, 8160, 8162, 8163, 8164, 8165, 8167, 8169, 8170, 8172, 8173, 8174, 8175, 8176, 8179, 8190, 8192, 8193, 8194, 8195, 8196, 8197, 8201, 8203, 8204, 8205, 8206, 8207, 8209, 8210, 8213, 8214, 8215, 8216, 8217, 8219, 8230, 8231, 8234, 8235, 8236, 8237, 8239, 8240, 8241, 8243, 8245, 8246, 8247, 8249, 8250, 8251, 8253, 8254, 8256, 8257, 8259, 8260, 8261, 8263, 8264, 8265, 8267, 8269, 8270, 8271, 8273, 8274, 8275, 8276, 8279, 8290, 8291, 8293, 8294, 8295, 8296, 8297, 8301, 8302, 8304, 8305, 8306, 8307, 8309, 8310, 8312, 8314, 8315, 8316, 8317, 8319, 8320, 8321, 8324, 8325, 8326, 8327, 8329, 8340, 8341, 8342, 8345, 8346, 8347, 8349, 8350, 8351, 8352, 8354, 8356, 8357, 8359, 8360, 8361, 8362, 8364, 8365, 8367, 8369, 8370, 8371, 8372, 8374, 8375, 8376, 8379, 8390, 8391, 8392, 8394, 8395, 8396, 8397, 8401, 8402, 8403, 8405, 8406, 8407, 8409, 8410, 8412, 8413, 8415, 8416, 8417, 8419, 8420, 8421, 8423, 8425, 8426, 8427, 8429, 8430, 8431, 8432, 8435, 8436, 8437, 8439, 8450, 8451, 8452, 8453, 8456, 8457, 8459, 8460, 8461, 8462, 8463, 8465, 8467, 8469, 8470, 8471, 8472, 8473, 8475, 8476, 8479, 8490, 8491, 8492, 8493, 8495, 8496, 8497, 8501, 8502, 8503, 8504, 8506, 8507, 8509, 8510, 8512, 8513, 8514, 8516, 8517, 8519, 8520, 8521, 8523, 8524, 8526, 8527, 8529, 8530, 8531, 8532, 8534, 8536, 8537, 8539, 8540, 8541, 8542, 8543, 8546, 8547, 8549, 8560, 8561, 8562, 8563, 8564, 8567, 8569, 8570, 8571, 8572, 8573, 8574, 8576, 8579, 8590, 8591, 8592, 8593, 8594, 8596, 8597, 8601, 8602, 8603, 8604, 8605, 8607, 8609, 8610, 8612, 8613, 8614, 8615, 8617, 8619, 8620, 8621, 8623, 8624, 8625, 8627, 8629, 8630, 8631, 8632, 8634, 8635, 8637, 8639, 8640, 8641, 8642, 8643, 8645, 8647, 8649, 8650, 8651, 8652, 8653, 8654, 8657, 8659, 8670, 8671, 8672, 8673, 8674, 8675, 8679, 8690, 8691, 8692, 8693, 8694, 8695, 8697, 8701, 8702, 8703, 8704, 8705, 8706, 8709, 8710, 8712, 8713, 8714, 8715, 8716, 8719, 8720, 8721, 8723, 8724, 8725, 8726, 8729, 8730, 8731, 8732, 8734, 8735, 8736, 8739, 8740, 8741, 8742, 8743, 8745, 8746, 8749, 8750, 8751, 8752, 8753, 8754, 8756, 8759, 8760, 8761, 8762, 8763, 8764, 8765, 8769, 8790, 8791, 8792, 8793, 8794, 8795, 8796, 8901, 8902, 8903, 8904, 8905, 8906, 8907, 8910, 8912, 8913, 8914, 8915, 8916, 8917, 8920, 8921, 8923, 8924, 8925, 8926, 8927, 8930, 8931, 8932, 8934, 8935, 8936, 8937, 8940, 8941, 8942, 8943, 8945, 8946, 8947, 8950, 8951, 8952, 8953, 8954, 8956, 8957, 8960, 8961, 8962, 8963, 8964, 8965, 8967, 8970, 8971, 8972, 8973, 8974, 8975, 8976, 9012};
    int y, n = sizeof(my_array) / sizeof(my_array[0]);
    vector<int> v(my_array, my_array + n);
    vector<int>::iterator it;
    cout << sizeof(my_array);
    cin >> y;
    it = upper_bound(v.begin(), v.end(), y);
    cout << *it << endl;
    return 0;
}
//                 1023,
//                 1024,
//                 1025,
//                 1026,
//                 1027,
//                 1028,
//                 1029,
//                 1032,
//                 1034,
//                 1035,1036,
//                 1037,1038,
//                 1039,1042,
//                 1043,1045,
//                 1046,1047,1048,1049,
//                 1052,1053,1054,1056,
//                 1057,1058,1059,1062,
//                 1063,1064,1065,1067,
                // 1068,1069,1072,1073,1074,1075,
                // 1076,1078,1079,1082,1083,1084,
                // 1085,1086,1087,1089,1092,1093,
                // 1094,1095,1096,1097,1098,1203,
                // 1204,1205,1206,1207,1208,1209,1230,1234,
                // 1235,1236,1237,1238,1239,1240,1243,1245,1246,1247,
                // 1248,1249,1250,1253,1254,1256,1257,1258,1259,1260,
                // 1263,1264,1265,1267,1268,1269,1270,1273,1274,1275,
                // 1276,1278,1279,1280,1283,1284,1285,1286,1287,1289,
                // 1290,1293,1294,1295,1296,1297,1298,1302,1304,1305,1306,1307,1308,
                // 1309,1320,1324,1325,1326,1327,1328,1329,1340,1342,1345,1346,1347,
                // 1348,1349,1350,1352,1354,1356,1357,1358,1359,1360,1362,1364,1365,
                // 1367,1368,1369,1370,1372,1374,1375,1376,1378,1379,1380,1382,1384,
                // 1385,1386,1387,1389,1390,1392,1394,1395,1396,1397,1398,1402,1403,1405,1406,1407,
                // 1408,1409,1420,1423,1425,1426,1427,1428,1429,1430,1432,1435,1436,1437,1438,1439,
                // 1450,1452,1453,1456,1457,1458,1459,1460,1462,1463,1465,1467,1468,1469,1470,1472,
                // 1473,1475,1476,1478,1479,1480,1482,1483,1485,1486,1487,1489,1490,1492,1493,1495,
                // 1496,1497,1498,1502,1503,1504,1506,1507,1508,1509,1520,1523,1524,1526,1527,1528,1529,1530,1532,1534,
                // 1536,1537,1538,1539,1540,1542,1543,1546,1547,1548,1549,1560,1562,1563,1564,1567,1568,1569,1570,1572,
                // 1573,1574,1576,1578,1579,1580,1582,1583,1584,1586,1587,1589,1590,1592,1593,1594,1596,1597,1598,1602,
                // 1603,1604,1605,1607,1608,1609,1620,1623,1624,1625,1627,1628,1629,1630,1632,1634,1635,1637,1638,1639,
                // 1640,1642,1643,1645,1647,1648,1649,1650,1652,1653,1654,1657,1658,1659,1670,1672,1673,1674,1675,1678,
                // 1679,1680,1682,1683,1684,1685,1687,1689,1690,1692,1693,1694,1695,1697,1698,1702,1703,1704,1705,1706,1708,1709,1720,1723,
                // 1724,1725,1726,1728,1729,1730,1732,1734,1735,1736,1738,1739,1740,1742,1743,1745,1746,1748,1749,1750,1752,1753,1754,1756,
                // 1758,1759,1760,1762,1763,1764,1765,1768,1769,1780,1782,1783,1784,1785,1786,1789,1790,1792,1793,1794,1795,1796,1798,1802,
                // 1803,1804,1805,1806,1807,1809,1820,1823,1824,1825,1826,1827,1829,1830,1832,1834,1835,1836,1837,1839,1840,1842,1843,1845,
                // 1846,1847,1849,1850,1852,1853,1854,1856,1857,1859,1860,1862,1863,1864,1865,1867,1869,1870,1872,1873,1874,1875,1876,1879,
                // 1890,1892,1893,1894,1895,1896,1897,1902,1903,1904,1905,1906,1907,1908,1920,1923,1924,1925,1926,1927,1928,1930,1932,1934,
                // 1935,1936,1937,1938,1940,1942,1943,1945,1946,1947,1948,1950,1952,1953,1954,1956,1957,1958,1960,1962,1963,1964,1965,1967,
                // 1968,1970,1972,1973,1974,1975,1976,1978,1980,1982,1983,1984,1985,1986,1987,2013,2014,2015,2016,2017,2018,2019,2031,2034,
                // 2035,2036,2037,2038,2039,2041,2043,2045,2046,2047,2048,2049,2051,2053,2054,2056,2057,2058,2059,2061,2063,2064,2065,2067,
                // 2068,2069,2071,2073,2074,2075,2076,2078,2079,2081,2083,2084,2085,2086,2087,2089,2091,2093,2094,2095,2096,2097,2098,2103,
                // 2104,2105,2106,2107,2108,2109,2130,2134,2135,2136,2137,2138,2139,2140,2143,2145,2146,2147,2148,2149,2150,2153,2154,2156,
                // 2157,2158,2159,2160,2163,2164,2165,2167,2168,2169,2170,2173,2174,2175,2176,2178,2179,2180,2183,2184,2185,2186,2187,2189,
                // 2190,2193,2194,2195,2196,2197,2198,2301,2304,2305,2306,2307,2308,2309,2310,2314,2315,2316,2317,2318,2319,2340,2341,2345,2346,2347,2348