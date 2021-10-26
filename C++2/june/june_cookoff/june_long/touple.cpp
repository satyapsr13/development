// Total Score = 100.00 %
#include <bits/stdc++.h>
#define int long long int
// #define mod 1000000007
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout < < < < #x < < < < x <<
using namespace std;
int power(int a, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans % 1000000007) * (a % 1000000007);
        }
        a = (a % 1000000007) * (a % 1000000007);
        n = n >> 1;
    }
    return ans;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int pp1 = power(2,n);
    // cout << pp1 << "\n";
    int ans = power(pp1-1, m);
    ans %= 1000000007;

    cout
        << ans << "\n";
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