////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define pb push_back
#define fi first
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
    int arr[n];
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] & 1)
        {
            odd.push_back(arr[i]);
            /* code */
            continue;
        }
        even.push_back(arr[i]);
    }

    if (odd.size() == 0 || even.size() == 0)
    {
        cout << "-1"
             << "\n";
        return;
    }
    for (auto it : even)
    {
        cout << it << " ";
    }
    for (auto it : odd)
    {
        cout << it << " ";
    }
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