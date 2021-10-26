
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
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n;
//     vector<int> v1;
//     vector<int> v11;
//     int x;
//     vector<int> v2;
//     // vector<int> v22;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> x;
//         v1.push_back(x);
//     }
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> x;
//         v2.push_back(x);
//     }

//     sort(v1.begin(), v1.end());
//     sort(v2.begin(), v2.end());

//     for (int i = 0; i < n; ++i)
//     {
//         // v11[i] = v11[i - 1] + v1[i];
//         v11.push_back(v1[i] - v2[i]);
//         // v22.push_back(v22[i - 1] + v2[i]);

//         // v22[i] = v22[i - 1] + v2[i];
//     }

//     for (int i = 1; i < n; ++i)
//     {
//         v11[i] += v11[i - 1];
//     }

//     for (auto it : v11)
//     {
//         cout << it << " ";
//     }
//     cout << "\n";
//     int tt = v11.size();
//     int pp = tt / 4;
//     db(v11[tt - 1] - v11[pp - 1]);
//     while (1)
//     {
//         int tt = v11.size();
//         int pp = tt / 4;
//         if (v11[tt - 1] - v11[pp - 1] >= 0)
//         {
//             cout << v11.size() - v1.size();
//             cout << "\n";
//             return;
//         }
//         v11.push_back(100);
//         v11[v11.size() - 1] += v11[v11.size() - 2];
//         debug(v11);
//     }
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

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <climits>
// #include <bits/stdc++.h>
using namespace std;
//#define int long long int
#define count_1 __builtin_popcountll
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
#define dbarr(arr)           \
    cout << #arr << " ~ [ "; \
    for (auto n : arr)       \
        cout << n << " ";    \
    cout << "]" << endl;
#define dbarrp(arr)                                \
    cout << #arr << " ~ [ ";                       \
    for (auto n : arr)                             \
        cout << n.first << "-" << n.second << " "; \
    cout << "]" << endl;
#define endl "\n"
//#define PI 3.141592653589793238462
typedef long long ll;
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T>
void _print(vector<T> v)
{
    cerr << "-> [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    vector<int> v(2 * n, 100);
    vector<int> v2(2 * n, 0);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    for (int i = 0, x; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0, x; i < n; ++i)
    {
        cin >> v2[i];
    }
    vector<int> fuckme;
    for (int i = 0; i < 2 * n; ++i)
    {
        fuckme.push_back(v[i] - v2[i]);
    }
    for (int i = 1; i < 2 * n; ++i)
    {
        // fuckme.push_back(v[i] - v1[i]);
        fuckme[i] += fuckme[i - 1];
    }
    if (fuckme[n - 1] >= 0)
    {
        cout << "0"
             << "\n";
        return;
        
    }
    debug(fuckme);
    for (int i = n; i < 2 * n; ++i)
    {
        db(fuckme[i]);
        if (fuckme[i] - fuckme[i/4-1])
        {cout <<i-n<<"\n";  
        return;
            /* code */
        }
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
        solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}