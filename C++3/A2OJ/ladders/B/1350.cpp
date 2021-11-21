#include <bits/stdc++.h>

#define db(x) cout << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int dp[100001][20];
int n;
int find(vector<int> v, int i, int ans, int pre, int index)
{
    // cout << v[i];
    if (n < i)
    {
        return ans;
    }
    if (dp[i][ans] != -1)
    {
        return dp[i][ans];
    }
    if (pre < v[i])
    {
        // cout << v[i
        // db(v[i]);
        return   max(find(v, i + i, ans + 1, v[i], i), find(v, i + index, ans, pre, index));
    }
    else
    {
        return   find(v, i + index, ans, pre, index);
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        cin >> n;
        vector<int> v(n);
        v.push_back(0);
        memset(dp, -1, sizeof(dp));
        for (int i = 1, x; i <= n; ++i)
        {
            cin >> v[i];
        }
        cout << find(v, 1, 0, INT_MIN, 1);
        cout << "\n";
    }
    return 0;
}