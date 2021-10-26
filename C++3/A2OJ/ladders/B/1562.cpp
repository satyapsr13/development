
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
    map<int,int> mp;
    
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i)
    {
        // st.insert(s[i]-'0');
        mp[s[i] - '0'] = 1;
        
    }

    if (mp[1] || mp[4] || mp[6] || mp[8] || mp[9])
    {
        cout << "1"
             << "\n";
        // return;
        if (mp[1])
        {
            cout << 1;
            cout << "\n";

            /* code */
        }
        else if (mp[4])
        {
            cout << 4;
            cout << "\n";

            /* code */
        }
        else if (mp[6])
        {
            cout << 6;
            cout << "\n";

            /* code */
        }
        else if (mp[8])
        {
            cout << 8;
            cout << "\n";

            /* code */
        }
        else if (mp[9])
        {
            cout << 9;
            cout << "\n";

            /* code */
        }
        return;
        /* code */
    }

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == '2' || s[i] == '5')
        {
            cout << "2"
                 << "\n";
            // return;
            cout << s[i - 1] << s[i];
            cout << "\n";
            return;
            /* code */
        }
    }
    if (s[0] == '2')
    {
        for (int i = 1; i < n; ++i)
        {
            
            // return;
            if (s[i] == '7')
            {
                cout << "2\n27";cout <<"\n" ;
                
                return;
                /* code */
            }
        }
        /* code */
    }
    if (s[0] == '5')
    {
        for (int i = 1; i < n; ++i)
        {

            // return;
            if (s[i] == '7')
            {
                cout << "2\n57";
                cout << "\n";

                return;
                /* code */
            }
        }
        /* code */
    }
    // cout<<n << "invalid";cout <<"\n" ;
    if (s[0]=='7')
    {
        for (int i = 1; i < n; ++i)
        {
            
            // return;
            if (s[i] == '7')
            {
                cout << "2\n77";
                cout << "\n";

                return;
                /* code */
            }
        }
      
        /* code */
    }
    else
    {
        for (int i = 1; i < n; ++i)
        {
            
            // return;
            if (s[i] == '3')
            {
                cout << "2\n33";
                cout << "\n";

                return;
                /* code */
            }
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