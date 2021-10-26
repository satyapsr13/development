
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
void dfgjlkgsglkgdsfgnfgnsfgnmslfgsf()
{
    int n, k, ans = 0, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    char c;
    cin >> n >> c;
    string s;
    cin >> s; //s.find('^');//! int num = stoll(s);
    bool l = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] != c)
        {
            l = 1;
            break;
            /* code */
        }
    }
    if (!l)
    {
        cout << "0"
             << "\n";
        return;
        /* code */
    }

    int t = s.find_last_of(c) + 1;
    // cout << t;cout <<"\n" ;

    if (t >= ceil(n * 1.0 / 2) and (n & 1) || (t > ceil(n * 1.0 / 2) and !(n & 1)))
    {

        cout << "1\n"
             << t;
        cout << "\n";

        return;
    }
    else
    {
        cout << "2\n"
             << n - 1;
        cout << " " << n << "\n";
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
        dfgjlkgsglkgdsfgnfgnsfgnmslfgsf();
    return 0;
}