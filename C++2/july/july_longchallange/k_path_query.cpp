#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long

void load_parent_and_level_of_tree(vector<int> adj[], int parent[], int level[])
{
    queue<int> q;
    parent[1] = -1;
    level[1] = 1;
    q.push(1);

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        for (int i : adj[curr])
        {
            cout << i<<" " ;
            if (i == parent[curr])
                continue;
            level[i] = level[curr] + 1;
            parent[i] = curr;
            q.push(i);
        }
    }
}



string kPathQuery(vector<int> adj[], int quer[], int m, int parent[], int level[], int vis[], int deepestNode, int deepestNodeLevel, int marker)
{
    // traversing with first one
    while (parent[deepestNode] != -1)
    {
        vis[deepestNode] = marker;
        deepestNode = parent[deepestNode];
    }
    vis[deepestNode] = marker;

    // finding second deepest node
    deepestNode = 0;
    deepestNodeLevel = 0;
    for (int i = 0; i < m; i++)
    {
        int curr = quer[i];
        if (level[curr] > deepestNodeLevel && vis[curr] != marker)
        {
            deepestNodeLevel = level[curr];
            deepestNode = curr;
        }
    }

    if (deepestNode == 0)
        return "YES\n";

    // traversing with second one
    while (deepestNode != -1 && vis[deepestNode] != marker)
    {
        vis[deepestNode] = marker;
        deepestNode = parent[deepestNode];
    }
    if (deepestNode == -1)
        deepestNodeLevel = 0;
    else
        deepestNodeLevel = level[deepestNode];
         // to know at which level the second traversing stops

    for (int i = 0; i < m; i++)
    {
        if (vis[quer[i]] != marker || level[quer[i]] < deepestNodeLevel)
            return "NO\n";
    }
    return "YES\n";
}

signed main()
{
    fast int t;
    // cout << "YES"<<endl; 
    cin >> t;
    while (t--)
    {
        int n, q, m, u, v;
        cin >> n;
        vector<int> adj[n + 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int parent[n + 1];
        int level[n + 1];
        load_parent_and_level_of_tree(adj, parent, level);
        //  for (auto it:parent)
        //     {
        //         cout << it<<"  ";
        //     }cout <<"\n" ;
        //      for (auto it:level)
        //         {
        //             cout << it<<"  ";
        //         }
        int vis[n + 1] = {0};

        cin >> q;
        for (int marker = 1; marker <= q; marker++)
        {
            int deepestNode = 0;
            int deepestNodeLevel = 0;

            cin >> m;
            int quer[m];
            for (int i = 0; i < m; i++)
            {
                cin >> quer[i];
                if (level[quer[i]] > deepestNodeLevel) // finding first deepest node
                {
                    deepestNodeLevel = level[quer[i]];
                    deepestNode = quer[i];
                }
            }
            cout << kPathQuery(adj, quer, m, parent, level, vis, deepestNode, deepestNodeLevel, marker);
        }
    }
}