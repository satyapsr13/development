// https: //www.codechef.com/JUNE21C/problems/DUALDIST
 
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9+7
#define read1(a) cin>>a
#define read2(a,b) cin>>a>>b
#define read3(a,b,c) cin>>a>>b>>c
#define db(x) cout <<  << #x <<   << x << 
using namespace std;
 void solve()
{  int n,m;
    cin >> n >> m;
    vector<vector<int>> tre;
    int x, y;
     
    for (int i = 0; i < n-1; ++i)
    {
        cin >> x >> y;
        tre[x].push_back(y);
        tre[y].push_back(x);
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