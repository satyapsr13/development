//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int m;
    cin >> n >> m >> k;
    map<int, int> mp;
    int x;
    int arr[n];
    int index;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        mp[arr[i]] = i + 1;
        if (arr[i] >= m)
        {
            index++;
            /* code */
        }
    }

    sort(arr, arr + n);
    vector<int> v;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= m)
        {
            index = i;
            break;
            /* code */
        }
    }
    if (n - index > k)
    {
        for (int i = index; i < n; ++i)
        {
            v.push_back(mp[arr[i]]);
        }
        /* code */
    }
    else
    {

        for (int i = n - k; i < n; ++i)
        {
            v.push_back(mp[arr[i]]);
        }
    }
     
    sort(v.begin(),v.end());
        
    cout << v.size() << " ";
    for (auto it : v)
    {
        cout << it;
        cout << " ";
    }
    cout << "\n";

    // sort(mp.begin(),mp.end());
    // for (auto it : mp)
    // {
    //     cout << it.second;
    // }
    // cout << "\n";
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