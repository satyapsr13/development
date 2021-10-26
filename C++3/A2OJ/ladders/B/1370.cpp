////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define pb push_back
#define fi second
#define sc second
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    // int arr[n];
    int x;
    vector<pair<int, int>> vpodd;
    vector<pair<int, int>> vpeven;
    for (int i = 0; i < 2 * n; ++i)
    {
        cin >> x;
        if (x & 1)
        {
            vpodd.push_back(make_pair(x, i + 1));
            /* code */
        }
        else
        {
            vpeven.push_back(make_pair(x, i + 1));
        }
    }
    
    int ol = vpodd.size();
    int el = vpeven.size();
    // db(ol - (ol % 2==1));
    if (ol & 1)
    {
        for (int i = 1; i < el; i += 2)
        {
            cout << vpeven[i].second << " " << vpeven[i + 1].second;
            cout << "\n";
        }
        for (int i = 1; i < ol; i += 2)
        {
            cout << vpodd[i].second << " " << vpodd[i + 1].second;
            cout << "\n";
        }
    }else
    {
        for (int i = 2; i < el; i += 2)
        {
            cout << vpeven[i].second << " " << vpeven[i + 1].second;
            cout << "\n";
        }
        for (int i = 0; i < ol; i += 2)
        {
            cout << vpodd[i].second << " " << vpodd[i + 1].second;
            cout << "\n";
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
    {
        solved_by_satyapsr13();
    }
    return 0;
}
