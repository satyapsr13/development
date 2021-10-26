
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
    int m;
    cin >> k >> n >> m;
    vector<int> v;
    vector<int> v1(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v1[i];
    }
    vector<int> v2(m);

    for (int i = 0; i < m; ++i)
    {
        cin >> v2[i];
    }
    int pos1 = 0, pos2 = 0;
    while (pos1 != n | pos2 != m)
    {
        if (pos1 < n and v1[pos1] == 0)
        {
            v.push_back(0);
            k++;
            pos1++;
            continue;
            /* code */
        }
        else if (pos2 < m and v2[pos2] == 0)
        {

            v.push_back(0);
            k++;
            pos2++;
            continue;
            /* code */
        }
        else if (k >= v1[pos1] and pos1 < n)
        {
            v.push_back(v1[pos1]);
            pos1++;
            continue;
            /* code */
        }
        else if (k >= v2[pos2] and pos2 < m)
        {
            v.push_back(v2[pos2]);
            pos2++;
            continue;
        }else
        {
            cout <<"-1"<<"\n";  
            return;
        }
        

        /* code */
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";
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
    // cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}