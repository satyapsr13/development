
// #include <bits/stdc++.h>

// #define db(x) cout << "->" \
//                    << " " << #x << "\t" << x << "\t\n"
// using namespace std;
// int dp[1001];
// int s, g;
// int find(vector<int> v, int n, int ans, int step)
// {
//     if (ans < 0 || ans > 1000)
//     {
//         return INT_MAX;
//     }
//     // cout <<"YES"<<"\n";
//     if (dp[ans] != -1)
//         return dp[ans];
//     if (ans == g)
//         return step;
//     for (int i = 0; i < n; ++i)
//     {
//         return  dp[ans]= min({
//             find(v, n, ans + v[i], step + 1),
//             find(v, n, ans - v[i], step + 1),
//             find(v, n, ans ^ v[i], step + 1),
//         });
//     }
//     return INT_MAX;
// }
// signed main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     v.push_back(0);
//     memset(dp, -1, sizeof(dp));
//     int s, g;
//     cin >> s >> g;
//     for (int i = 1, x; i <= n; ++i)
//     {
//         cin >> v[i];
//     }
//     // cout << find(v, n, 0, 0);
//     int ans = find(v, n, s, 0);
//     if (ans == INT_MAX)
//     {
//         cout << "-1"
//              << "\n";
//     }
//     cout << ans;
//     return 0;
// }

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for (int i = 1; i < 5; ++i)
    {
        for (int t : {i + 1, i + 2})
            cout << t;
        cout << endl;
    }

    return 0;
}