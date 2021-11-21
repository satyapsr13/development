//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int findMcm(int v[], int i, int j)
{

    if (i >= j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    // int mx = INT_MAX;
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; ++k)
    {
        dp[i][j] = min(dp[i][j], findMcm(v, i, k) + findMcm(v, k + 1, j) + v[i - 1] * v[k] * v[j]);
        // mx = min(mx, tempans);
    }

    return dp[i][j];
}
signed main()
{

    int n;
    cin >> n;
    int v[n + 1];
   

    for (int i = 0, x; i < n; ++i)
    {
        cin >> v[i];
    }
    cout << findMcm(v, 1, n - 1);

    return 0;
}
