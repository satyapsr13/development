 
#include <bits/stdc++.h>

#define db(x) cout  << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int dp[1000001];
int find(vector<int> v, int n, int ans,int t)
{
    if(t>ans){
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    if (v[i])
    {
        
    }else
    {
        
    }
}
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    v.push_back(0);
    int t;
    cin >> t;
    memset(dp, 0, sizeof(dp));
    for (int i = 1, x; i <= n; ++i)
    {
        cin >> v[i];
    }
    cout << find(v, n, t,0);
    return 0;
}