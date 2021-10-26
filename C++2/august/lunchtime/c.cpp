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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX;
    cin >> n >> k;
    int arr[n];
    ////memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int mxelement[n + k - 1];

    // for (int i = 0; i < n + k - 1; ++i)
    // {
    //     mxelement[i] = max(arr[i], max(arr[i + 1], arr[i + 2]));
    // }
    int mx = *max_element(arr, arr + n);
    // for (int i = 0; i < n - k + 1; ++i)
    // {
    //     db(i);
    //     db(i+k-1);

    //     for (int j = i+k-1; j < n; ++j)
    //     {
    //         if (arr[j] == mx)
    //         {
    //             ans++;
    //             /* code */
    //         }
    //     }
    // }

    for (int i = k-1; i < n; ++i)
    {
            // db(i);
        if (arr[i] == mx)
        {
            ans+=n-i;
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