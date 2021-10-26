//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int dp[n][2];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> dp[i][0] >> dp[i][1];
        sum1 += dp[i][0];
        sum2 += dp[i][1];
    }
    if (!(sum1 & 1) and !(sum2 & 1))
    {
        cout << 0;
        /* code */
    }
    else if ((sum1 + sum2) & 1)
    {
        cout << -1;
    }
    else
    {

        for (int i = 0; i < n; ++i)
        {
            if (dp[i][0] == dp[i][1] and (dp[i][0] & 1))
            {   
                cout << -1;
              
                return;
                /* code */
            }
        }
        cout << 1;
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}