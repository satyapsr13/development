
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout < < < < #x < < < < x <<
using namespace std;
void solve()
{
    int n;

    int mn;
    int ans;
    cin >> n, mn = 1000000, ans = 0;
    int a[n];
    for (int i = 1; i <= n; ++i)
        cin >> a[i], mn = min(mn, a[i]);
    for (int i = 1; i <= n; ++i)
    {
        ans += a[i] != mn;
        cout << endl<<( a[i] != mn) << endl;
        cout << ans << endl;
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}