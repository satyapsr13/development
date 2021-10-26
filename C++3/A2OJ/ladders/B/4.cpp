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
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int mx;
    cin >> mx;
    int dp[n][2];
    

    for (int i = 0; i < n; ++i)
    {
        cin >> dp[i][0] >> dp[i][1];
    }

    for (int i = 0; i < n; ++i)
    {
        sum += dp[i][1];
        if (sum >= mx)
        {
            dp[i][1] -= (sum - mx);
            cout << "YES"
                 << "\n";
            for (int j = 0; j <= i; ++j)
            {
                cout << dp[j][1] << " ";
            }
            return;
        }
    }
    cout << "NO" << endl;
    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}