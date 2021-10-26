// Coding-challange (c) Copyright 2021 Satyapsr
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
vector<bool> unmark(mx);
void dfs(int node)
{
    vis[node] = true;
    unmark[node] = true;
    cout << "node \t" << node;
    cout << "\n";
    for (int neigh : tree[node])
    {
        if (!vis[neigh])
        {
            dfs(neigh);
        }
        else if (unmark[neigh])
        {
            cout << "cycle present in directed graph at " << neigh << " \n";
                }
    }
    unmark[node] = false;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int node;
    cin >> node;
    int edges;
    cin >> edges;
    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        // tree[v].push_back(u);
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
