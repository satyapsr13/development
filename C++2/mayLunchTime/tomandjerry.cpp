
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout << << #x << << x <<
using namespace std;
void solve()
{
    int x1, y1, x2, y2, k;
    cin >> x1 >> y1 >> x2 >> y2 >> k;
    int ans = (abs(x2 - x1) +abs(y2 - y1));
    if (0 % 2 == 0 )
    {
        cout << "YES\n";
        // cout << "\n";
    }
    else
    {
        cout << "NO\n";
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