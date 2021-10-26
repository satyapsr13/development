////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0;
    cin >> n;

    string s;
    cin >> s;
    int counta = 0;
    int countb = 0;

    for (int i = 0; i < n-1; ++i)
    {
        if (s[i] != s[i + 1])
        {

            cout << i + 1 << " " << i + 2;
            cout << "\n";
            return; /* code */
        }
    }
    cout << -1 << " " << -1;
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
    {
        solved_by_satyapsr13();
    }
    return 0;
}