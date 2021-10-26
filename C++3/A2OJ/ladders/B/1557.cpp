
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
class solve
{

    int n, x, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;

public:
    void solved_by_satyapsr13()
    {
        cin >> n >> k;
        count = 0;
        vector<int> v(n);
        vector<int> v1(n);

        for (int i = 0, x; i < n; ++i)
        {
            cin >> v[i];
        }
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES"
                 << "\n";
            return;
        }

        v1 = v;

        sort(v1.begin(), v1.end());
        map<int, int> mp;
        // memset(mp, INT_MAX, sizeof(mp));
        for (int i = 0; i < n - 1; ++i)
        {
            mp[v1[i]] = v1[i + 1];
        }

        for (int i = 0; i < n - 1; ++i)
        {
            if (v[i + 1] == mp[v[i]])
            {
                /* code */ continue;
            }
            count++;
            // db(i);
            // db(count);
        }
        // for (auto it : mp)
        // {
        //     cout << it.first << " ";
        //     cout << it.second << " ";
        // }
        // cout << "\n";

        if (count + 1 <= k)
        {
            cout << "YES"
                 << "\n";
        }
        cout << "NO" << endl;
        return;
        /* code */
        return;
    }
} s1;
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
        s1.solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}