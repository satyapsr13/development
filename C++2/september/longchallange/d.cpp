////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
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
    int n, k;
    cin >> n >> k;
    int arr[n];
    int arr1[n];
    map<int, int> mp1;
    map<int, int> mp2;
    int mx = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        arr1[i] = arr[i] ^ k;
        mp2[arr[i]]++;
        mp1[arr[i]]++;
        mp1[arr1[i]]++;
    }

   
    for (auto it : mp1)
    {
        if (it.second > mx)
        {
            mx = it.second;
            /* code */
        }
    }

    vector<int> v;
    for (auto it : mp1)
    {
        if (it.second == mx)
        {
            v.push_back(it.first);
            /* code */
        }
    }

    int mn = INT_MAX;

    for (int it = 0; it < v.size(); ++it)
    {
        if (mp2[v[it]] < mn)
        {
            mn = mp2[v[it]];
            /* code */
        }
    }

    k ? cout << mx << " " << mn : cout << mx / 2 << " " << 0;
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
