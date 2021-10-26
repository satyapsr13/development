
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout << "\n" \
                   << #x << "  " << x << "\n"
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int mxp = INT_MIN, mnp = INT_MAX,mn,mx;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < mnp)
        {
            mnp = arr[i];
            /* code */
        }
        if (arr[i] > mxp)
        {
            mxp = arr[i];
            /* code */
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == mnp)
        {
            mn = i;
            // db(mn);
            /* code */
        }
        if (arr[i] == mxp)
        {
            mx = i;
            // db(mx);
            /* code */
        }
    }

    // cout << mn << mx<<"\n";
    int a, b, c, d;
    a = max(mn, mx) + 1; //
    b = (mn + n + 1 - mx);
    d = (mx + n + 1 - mn);
    c = n - min(mn, mx); // when both are in right

       cout << min(min(a, c), min(d, b)) << "\n";
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