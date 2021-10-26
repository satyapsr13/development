 
#include <bits/stdc++.h>
#define int long long int
#define mod 1e9+7
#define read1(a) cin>>a
#define read2(a,b) cin>>a>>b
#define read3(a,b,c) cin>>a>>b>>c
#define db(x) cout <<  << #x <<   << x << 
using namespace std;
 void solve()
{  int n;
    read1( n);
    int ans = 1;
    int j = log2(n);
    ans = (1<<j) - 1;
    // int arr[n];
    cout << ans << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(NULL);
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