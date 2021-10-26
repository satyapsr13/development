
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
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    int count1 = 0;
    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        // cin >> v[i];
        if (x & 1)
        {
            v.push_back(1);
            count1++;
            v1.push_back(i);
            continue;
            /* code */
        }
        v2.push_back(i);
        v.push_back(0);
        count++;
        continue;
    }
    if (n == 1)
    {
        cout << "0"
             << "\n";
        return;
        /* code */
    }

    if (abs(count1 - count) > 1)
    {
        cout << "-1" << endl;
        return;
        /* code */
    }
    debug(v);
    debug(v1);
    if (v[0] == 0 and count >= count1)
    {
        count = 1;

        for (int i = 0; i < v1.size(); ++i)
        {

            ans += abs(count - v1[i]);
            count += 2;
        }
        cout << ans << "\n";
        return;
        /* code */
    }
    else if (v[0] == 0 and count < count1)
    {
        count = 1;

        for (int i = 0; i < v2.size(); ++i)
        {

            ans += abs(count - v2[i]);
            count += 2;
        }
        cout << ans << "\n";
        return;
    }
    else if (v[0] == 1 and count <= count1)
    {
        count = 1;

        for (int i = 0; i < v2.size(); ++i)
        {

            ans += abs(count - v2[i]);
            count += 2;
        }
        cout << ans << "\n";
        return;
    }
    else
    {
        count = 1;

        for (int i = 0; i < v1.size(); ++i)
        {

            ans += abs(count - v1[i]);
            count += 2;
        }
        cout << ans << "\n";
        return;
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