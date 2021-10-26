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
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
        // db(sum);
    }
    if (sum % k != 0)
    {
        
        cout << n;
        cout << "\n";
        return;
        /* code */
    }
    ans = n;
    int ft = INT_MAX;
    int sn = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % k != 0)
        {
            ft = i + 1;
            break;
            /* code */
        }
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if (arr[i] % k != 0)
        {
            sn = i + 1;
            break;
            /* code */
        }
    }
    if (ft >= mn)
    {
        cout << "-1"
             << "\n";
        return;
        /* code */
    }
    
    cout << ans - min(ft,n- sn+1);
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