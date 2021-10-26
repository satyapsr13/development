
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
int remainingStepCounter(int n)
{
    if (n & 1)
    {
        return (10 - n) / 2;
        /* code */
    }
    return 5 - (n / 2) - 1;
}
int minimum_goal_to_win(string s)
{
    int n = s.size();
    int score1[10];
    int score2[10];
    if (s[0] == '1')
    {
        score1[0] = 1;
        score1[1] = 1;
        /* code */
    }
    else
    {
        score1[0] = 1;
        score1[1] = 1;
    }
    if (s[1] == '1')
    {
        score2[0] = 1;
        score2[1] = 1;
        /* code */
    }
    else
    {
        score2[0] = 1;
        score2[1] = 1;
    }

    for (int i = 2; i < n; i += 2)
    {
        if (s[i] == '1')
        {
            score1[i] = score1[i - 1] + 1;
            score1[i + 1] = score1[i - 1] + 1;
            /* code */
        }
        else
        {
            score1[i] = score1[i - 1] + 0;
            score1[i + 1] = score1[i - 1] + 0;
        }
    }
    for (int i = 3; i < n; i += 2)
    {
        if (s[i] == '1')
        {
            score2[i] = score2[i - 1] + 1;
            score2[i + 1] = score2[i - 1] + 1;
        }
        else
        {
            score2[i] = score2[i - 1] + 0;
            score2[i + 1] = score2[i - 1] + 0;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (abs(score1[i] - score2[i]) > remainingStepCounter(i))
        {
            return i + 1;
            /* code */
        }
    }
    return 10;
}
void solved_by_satyapsr13()
{
    string s;
    cin >> s; //s.find('^');//! int num = stoll(s);
    int n = s.size();
    int arr[10];
    string p1 = s;
    string p2 = s;
    int ans1;
    int ans2;

    for (int i = 0; i < n; ++i)
    {
        if (p1[i] == '?' and (i & 1))
        {
            p1[i] = 0;
            /* code */
        }
        else if (p1[i] == '?' and !(i & 1))
        {
            p1[i] = 1;
        }
    }
    ans1 = minimum_goal_to_win(p1);
    for (int i = 0; i < n; ++i)
    {
        if (p2[i] == '?' and (i & 1))
        {
            p2[i] = 1;
            /* code */
        }
        else if (p1[i] == '?' and !(i & 1))
        {
            p2[i] = 0;
        }
    }
    ans2 = minimum_goal_to_win(p2);
    cout << min(ans1, ans2);cout <<"\n" ;
    
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