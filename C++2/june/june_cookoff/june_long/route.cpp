#include <bits/stdc++.h>

#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define ll long long int

using namespace std;

const int maxtn = 1e6, maxtm = 1e6, maxn = 1e5, maxm = 1e5;
const string newln = "\n", space = " ";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int tn = 0, tm = 0;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        tn += n;
        tm += m;
        int dp[n + 2][2];
        int a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        dp[0][0] = dp[n + 1][1] = n + 10;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                dp[i][0] = 0;
            }
            else
            {
                dp[i][0] = dp[i - 1][0] + 1;
            }
            if (a[n - i + 1] == 2)
            {
                dp[n - i + 1][1] = 0;
            }
            else
            {
                dp[n - i + 1][1] = dp[n - i + 2][1] + 1;
            }
        }

        for (int i = 0; i < n + 2; ++i)
        {

            for (int j = 0; j < 2; ++j)
            {
                cout << dp[i][j]<<"  ";
            }
            cout << endl;
        }
        // for (int i = 1; i <= m; i++)
        // {
        //     int x;
        //     cin >> x;
        //     int ans = min(dp[x][0], dp[x][1]);
        //     if (ans > n)
        //         ans = -1;
        //     if (x == 1)
        //         ans = 0;
        //     cout << ans << (i == m ? newln : space);
        // }
    }
    // assert(tn <= maxtn);
    // assert(tm <= maxtm);
}