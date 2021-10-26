// https: //www.codechef.com/JUNE21C/problems/CHFHEIST

#include <bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout < < < < #x < < < < x <<
using namespace std;
void solve()
{
    int d2, d1, p, q;
    cin >> d2 >> d1 >> p >> q;
    int z = (d2 / d1) - 1;
    int y = d2 % d1;
    // int ans = (p * d1) + ((z)*p) + (q * ((z * (z + 1)) / 2)) + (p +( (((z + 1) * q)) * y));
    int ans = (d1*(((z+1)*p)+((z*(z+1))/2)*q)) + ((p + ((z + 1) * q)) * y);
    cout << ans<<"\n";
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