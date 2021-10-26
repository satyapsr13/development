
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
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    string s;
    cin >> s;
    int p1 = -1;
    int p2 = -1;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            p1 = i;
            break;
            /* code */
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] == '0')
        {
            p2 = i;
            break;
        }
    }

    // return;
    if (p2 < p1)
    {
        cout << s;
        cout << "\n";
        return; 
    }

    for (int i = 0; i < p1; ++i)
    {
        cout << s[i];
    }
     
    for (int i = p2+1; i < n; ++i)
    {
        cout << s[i];
    }cout <<"\n" ;
    debug(s);
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sw = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] < s[i - 1])
                sw = 0;
        }
        if (sw)
        {
            cout << s << '\n';
            continue;
        }
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                break;
            ans.push_back('0');
        }
        ans.push_back('0');
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                break;
            ans.push_back('1');
        }
        cout << ans << '\n';
    }
    return 0;
}
 