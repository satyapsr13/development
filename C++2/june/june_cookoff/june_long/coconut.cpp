// https: //www.codechef.com/JUNE21C/problems/COCONUT
 
#include <bits/stdc++.h>
#define int long long int
#define mod 1e9+7
#define read1(a) cin>>a
#define read2(a,b) cin>>a>>b
#define read3(a,b,c) cin>>a>>b>>c
#define db(x) cout <<  << #x <<   << x << 
using namespace std;
 void solve()
{  int x,y,x1,y1;
    cin >> x >> y >> x1 >> y1;
    cout << (floor(x1 / x) + floor(y1 / y))<<"\n";

    // int arr[n];
 
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