//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
// // int dp[1e9 + 1] = {0};
// int recur(int n, int k, int t)
// {
//     if (t == 1)
//     {
//         return n % 1000000007;
//         /* code */
//     }
//     if (t == 2)
//     {
//         return k % 1000000007;
//         /* code */
//     }
//     return (recur(n, k, t - 1) % 1000000007 - recur(n, k, t - 2) % 1000000007) % 1000000007;
// }
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int t;
    cin >> t;
    int madarchod[6] = {n, k, k - n, -n, -k, n - k};

    //  for (auto it:madarchod)
    //     {
    //         cout << it;
    //     }
    t = t % 6;
    // t--;
    // db(t);
        cout << (madarchod[t] + 2* 1000000007) % 1000000007;
    // if (madarchod[t]<0)
    // {
    //     return;
    // }
    // else
    // {
    //     cout << madarchod[t];
    //     return;
    // }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // int t = -1;
    int Test_Cases = 1;
    // cout << (-1) % 1000000007;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}