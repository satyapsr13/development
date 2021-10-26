//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
int solve(int arr[], int n, int cmp, bool b)
{

    if (n == -1)
    {
        return cmp;
        /* code */
    }
    // db(cmp);
    if (b)
    {
        return max(solve(arr, n - 1, __gcd(arr[n], cmp), true), solve(arr, n - 1, cmp, false));
        /* code */
        // db(arr[0]);
    }
    else
    {
        return solve(arr, n - 1, __gcd(arr[n], cmp), false);
    }
}

void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int arr[n];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // cout << solve(arr, n-1, 0, true);
    int gd = solve(arr, n - 1, 0, true);
    // db(gd);
    if (gd == 1)
    { 
    sort(arr,arr+n);
         
        for (int i = 0; i < n-1; ++i)
        {
            ans += arr[i];
            // db(arr[i]);
        }
        ans++;
        /* code */
    }
    else
    {

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % gd == 0)
            {
                ans += arr[i] / gd;
                /* code */
            }
            else
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
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
