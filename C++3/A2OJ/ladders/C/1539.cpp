
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
    int x;
    cin >> n >> k >> x;
    vector<int> v(n);
    vector<int> v1;
    // v1.push_back(-1);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    // sort(v.begin(),v)

    sort(v.begin(), v.end());
    debug(v);
    for (int i = 1; i < n; ++i)
    {
        if (v[i] - v[i - 1] > x)
        {
            v1.push_back(v[i] - v[i - 1]);
        }
    }
    ans = v1.size() + 1;

    sort(v1.begin(), v1.end());
    debug(v1);
    for (int i = 0; i < v1.size(); ++i)
    {
        k -= (ceil(v1[i]*1.0 / x) - 1);
        // db(ceil(v1[i] * 1.0 / x) - 1);
        if (k >= 0)
        {
            ans--;
            /* code */
        }
    }
    cout << ans;
    cout << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}