//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
#define int long long int
int dp[20][10][2][2];
// tight -> to restrict no in the range
// leading zeros
int solve(string number, int n, int x, int leading_zeros, int tight)
{
    if (n == 0)
    {
        return 1;
    }
    {
        if (x != -1 and dp[n][x][leading_zeros][tight] != -1)
        {
            return dp[n][x][leading_zeros][tight];
        }
    }
    int lb = 0;
    int ub = tight ? (number[number.length() - n] - '0') : 9;
    int ans = 0;

    for (int i = lb; i <= ub; ++i)
    {

        if (i == x and leading_zeros == 0)
        {
            continue;
        }
        ans += solve(number, n - 1, i, leading_zeros & (i == 0), tight & (i == ub));
    }
    return dp[n][x][leading_zeros][tight] = ans;
}
signed main()
{

    int a, b;
    cin >> a >> b;
    string A = to_string(0);
    string B = to_string(b);
    memset(dp, -1, sizeof(dp));
    int ans1 = solve(A, A.length(), -1, 1, 1);
    memset(dp, -1, sizeof(dp));
    int ans2 = solve(B, B.length(), -1, 1, 1);
    cout << ans2 - ans1;

    return 0;
}