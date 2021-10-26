
// #include <iostream>
// #include <cstdio>
// #include <cstdlib>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// #include <set>
// #include <map>
// #include <unordered_set>
// #include <unordered_map>
// #include <queue>
// #include <ctime>
// #include <cassert>
// #include <complex>
// #include <string>
// #include <cstring>
// #include <chrono>
// #include <random>
// #include <bitset>
// #include <climits>
// // #include <bits/stdc++.h>
// using namespace std;
// //#define int long long int
// #define count_1 __builtin_popcountll
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"
// #define dbarr(arr)           \
//     cout << #arr << " ~ [ "; \
//     for (auto n : arr)       \
//         cout << n << " ";    \
//     cout << "]" << endl;
// #define dbarrp(arr)                                \
//     cout << #arr << " ~ [ ";                       \
//     for (auto n : arr)                             \
//         cout << n.first << "-" << n.second << " "; \
//     cout << "]" << endl;
// #define endl "\n"
// //#define PI 3.141592653589793238462
// typedef long long ll;
// #ifndef ONLINE_JUDGE
// #define debug(x)       \
//     cerr << #x << " "; \
//     _print(x);         \
//     cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(int t)
// {
//     cerr << t;
// }
// void _print(string t) { cerr << t; }
// void _print(char t) { cerr << t; }
// void _print(double t) { cerr << t; }

// template <class T>
// void _print(vector<T> v)
// {
//     cerr << "-> [ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// ////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

// int maxFinder(vector<int> v, int start, int end1)
// {

//     sort(v.begin() + start, v.begin() + start+end1);
//     int count = 0;
//     for (int i = start; i <= end1; ++i)
//     {
//         if (v[i] != count)
//         {
//             // db(count + 0);
//             return count;
//             /* code */
//         }
//         count++;
//     } 
//     return count;
// }
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n >> k;
//     vector<int> v;
//     map<int, int> mp;
//     int index = -1;
//     vector<int> ans1((n * (n + 1) / 2) - n);

//     for (int i = 0, x; i < n; ++i)
//     {
//         cin >> x;
//         v.push_back(x);
//         mp[x] = i;
//         if (x == 0)
//         {
//             index = i;
//             /* code */
//         }
//     }
//     if (index == -1)
//     {
//         cout << "0"
//              << "\n";
//         return;
//     }
//     else
//     {
//         ans1.push_back(1);

//         for (int i = 0; i < index; ++i)
//         {
//             ans1.push_back(maxFinder(v, i, index));
//         }
//         int j = 1;
//         for (int i = index; i < n-1; ++i)
//         {
//             // cout << "test  ";
//             ans1.push_back(maxFinder(v, index,i+ (j++)));
//         }
//     }
//     sort(ans1.begin(), ans1.end());
//     debug(ans1);
//     cout << ans1[k - 1];
//     cout << "\n";
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int Test_Cases;
//     cin >> Test_Cases;
//     while (Test_Cases--)
//         solved_by_satyapsr13();
//     cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
//     return 0;
// }