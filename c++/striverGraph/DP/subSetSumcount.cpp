// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int findCount(vector<int> v, int weight, int n)

{
    if (weight == 0)
    {
        return 1;
    }
    if (n == -1)
    {
        return 0;
    }

    if (v[n] <= weight)
    {
        return findCount(v, weight - v[n], n - 1) + findCount(v, weight, n - 1);
    }
    else
    {
        return findCount(v, weight, n - 1);
    }
}
signed main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0, x; i < n; ++i)
    {
        cin >> v[i];
    }
    int weight;
    cin >> weight;
    cout << " total count is" << findCount(v, weight, n);
    return 0;
}

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
using namespace std;
const int mx = 1e5 + 5;
vector<vector<int>> tree(mx);
vector<bool> vis(mx);

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int node;
    cin >> node;

    for (int i = 0; i < node - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    for (int i = 1; i < node + 1; ++i)
    {
        if (!vis[i])
        {
            dfs(i);
            /* code */
        }
    }
    return 0;
}
