//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
vector<vector<int>> adj(10000);
vector<int> visited(10000, 0);
queue<int> q;
void topologicalSort(int node)
{
    visited[node] = 1;
    for (auto it : adj[node])
    {
        if (!visited[it])
        {
            topologicalSort(it);
            /* code */
        }
        // q.push(it);
    }
    cout << "topological sort is " << node;
    cout << "\n";
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

    for (int i = 0, x, y; i < edges; ++i)
    {
        cin >> x >> y;
        //x->y
        //y->x

        adj[y].push_back(x);
        // adj[y].push_back(x);
    }

    for (int i = 1; i <= node; ++i)
    {
        if (!visited[i])
        {
            topologicalSort(i);
            // ;

            /* code */
        }
    }

    // solved_by_satyapsr13();

    return 0;
}