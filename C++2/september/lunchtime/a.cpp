
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
#define int long long int
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
#define PI 3.141592653589793238462
#define FOR(n) for (int i = 0; i < n; ++i)
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
const int N = 1e5 + 2;
vector<int> v1(N / 2);
vector<int> v2(N / 2);

void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    if (n % 4)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES"
             << "\n";

        int i = 1;
        int p = n / 4;
        while (p--)
        {
            cout << i << " ";
            i += 2;
            
        }
        p = n / 4;
        i += 1;
        while (p--)
        {
            cout << i << " ";
            i += 2;
            
        }
        cout << "\n";

        i = 2;
        p = n / 4;
        // i += 3;
        while (p--)
        {
            cout << i << " ";
            i += 2;
            /* code */
        }
        p = n / 4;
        i--;
        while (p--)
        {
            cout << i << " ";
            i += 2;
            /* code */
        }
        cout <<"\n" ;
        
    }
    
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i < N; ++i)
    {
        if (i & 1)
        {
            v1.push_back(i);
            continue;
        }

        v2.push_back(i);
    }
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
        solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}