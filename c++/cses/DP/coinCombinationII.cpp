
#include <bits/stdc++.h>
#define db(x) cout << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int dp[101][1000001];
// int find(vector<int> v, int n, int target)
// {
//     if (target == 0)
//     {
//         return 1;
//     }
//     if (dp[n][target] != -1)

//     {
//         return dp[n][target] % 1000000007;
//     }
//     // cout << "test  ";
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (v[n] <= target)
//     {
//         return dp[n][target] = (find(v, n, target - v[n]) % 1000000007) + (find(v, n - 1, target) % 1000000007);
//     }
//     else
//     {
//         return dp[n][target] = find(v, n - 1, target) % 1000000007;
//     }
// }
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    v.push_back(0);
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    int t;
    cin >> t;
    for (int i = 1, x; i <= n; ++i)
    {
        cin >> v[i];
    }
    // cout << find(v, n, t) %   1000000007;

    for (int i = 1; i <= n; ++i)
    {
        dp[i][0] = 1;
    }
    for (int j = 1; j <= n; ++j)
    {
        for (int i = 1; i <= t; ++i)

        {
            if (v[j] <= i)
            {
                dp[j][i] = ((dp[j - 1][i] % 1000000007) + (dp[j][i - v[j]] % 1000000007)) % 1000000007;
            }
            else
            {
                dp[j][i] = dp[j - 1][i] % 1000000007;
            }
        }
    }

    // for (int j = 0; j <= n; ++j)
    // {
    //     for (int i = 0; i <= t; ++i)
    //     {
    //         clog << dp[j][i];

    //     }
    //         clog <<"\n";
    // }
    // for (auto it : dp)
    // {
    //     cout << it << " ";
    // }
    cout << dp[n][t];
    return 0;
}