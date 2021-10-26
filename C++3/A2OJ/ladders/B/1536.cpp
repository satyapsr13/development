
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

    string s;
    cin >> s;
    //check for single substr

    { // for single letters
        int count[27] = {0};

        for (int i = 0; i < n; ++i)
        {
            count[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; ++i)
        {
            if (count[i] == 0)
            {
                cout << (char)('a' + i);
                cout << "\n";
                return;
                /* code */
            }
        }
    }
    { // for double letters
        cout << "\n";
        cout << "\n";

        set<string> st;
        for (int i = 0; i < n - 1; ++i)
        {
            string temp = "";
            temp += s[i];
            temp += s[i + 1];
            st.insert(temp);
        }

        for (int i = 0; i < 26; ++i)
        {

            for (int j = 0; j < 26; ++j)
            {
                string temp = "";
                temp += (char)('a' + i);
                temp += (char)('a' + j);

                // debug(temp);
                if (st.end() == st.find(temp))
                {
                    cout << temp;
                    cout << "\n";
                    return;
                    /* code */
                }
            }
        }
    }
    { //for three alphabets
        set<string> st;

        for (int i = 0; i < n - 2; ++i)
        {

            string temp = "";
            temp += s[i];
            temp += s[i + 1];
            temp += s[i + 2];
            st.insert(temp);
        }

        for (int i = 0; i < 26; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                for (int k = 0; k < 26; ++k)
                {
                    string temp = "";
                    temp += (char)('a' + i);
                    temp += (char)('a' + j);
                    temp += (char)('a' + k);
                    // st.insert(temp);
                    if (st.find(temp) == st.end())
                    {
                        cout << temp;
                        cout << "\n";
                        return;
                        
                    }
                }
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
