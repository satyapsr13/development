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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    int arr[n];
    int arr1[n];

    // map<int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        arr1[i] = arr[i];
        // mp[arr[i]] = i + 1;
    }

    sort(arr1, arr1 + n);
    if (arr1[n-1] != arr[0])
    {
        cout << "-1"
             << "\n";
        return;
        /* code */
    }
    int tt = n - 2;
    for (int i = 1; i < n; ++i)
    {
        db(arr[i]);
        db(arr1[tt]);
        if (arr[i] == arr1[tt])
        {
            db(i);
            ans++;
            tt--;
            /* code */
        }
    }
    cout << ans;
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