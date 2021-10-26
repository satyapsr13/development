 
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9+7
#define read1(a) cin>>a
#define read2(a,b) cin>>a>>b
#define read3(a,b,c) cin>>a>>b>>c
#define db(x) cout <<  << #x <<   << x << 
using namespace std;
 void solve()
{  int n,k,f;
    read3(n, k, f);
    vector<pair<int,int>> time;
    int x, y;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        time.push_back(make_pair(x, y));
    }
    int diff==0;
    for (int i = 0; i < n; ++i)
    {
        diff += time[i].second - time[i].first;
        if (diff>=sed main()
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