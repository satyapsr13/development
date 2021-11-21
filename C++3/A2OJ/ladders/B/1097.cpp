
#include <bits/stdc++.h>

#define db(x) cout << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int dp[1000001];
bool find(vector<int> v, int n, int ans)
{
    if (n == 0 and (ans%360 == 0  ))
    {
        return true;
    }

    if (n == 0 and ans != 0)
    {
        return false;
    }

    return find(v, n - 1, ans + v[n]) || find(v, n - 1, ans - v[n]);
}
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    v.push_back(0);
    memset(dp, 0, sizeof(dp));
    for (int i = 1, x; i <= n; ++i)
    {
        cin >> v[i];
    }
    // cout << find(v, n, 0);
    if (find(v, n, 0))
    {
        cout << "YES"
             << "\n";

        return 0;
    }
    cout << "NO" << endl;

    return 0;
}