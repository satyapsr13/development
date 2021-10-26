//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;

vector<vector<int>> adj;
vector<int> v;
signed main()
{
    int n, m;
    cin >> n >> m;
    v = vector<int>(n);

    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
    }

    adj = vector<vector<int>>(n);
     
    for (int i = 0,a,b; i < n; ++i)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }


    return 0;
}




