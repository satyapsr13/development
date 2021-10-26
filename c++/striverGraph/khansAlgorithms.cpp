//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
vector<vector<int>> adj(10000);
vector<int> visited(10000, 0);
queue<int> q;
void topologicalSort(int node, int n)
{
    vector<int> indegree(n);

    for (int i = 1; i <= n; ++i)
    {
        for (auto it : adj[i])
        {
            // cout << it<<" ";
            indegree[it]++;
        }
    }
    queue<int> q;

    for (int i = 1; i <= n; ++i)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
            /* code */
        }
    }
    while (!q.empty())
    {
        int queueNode = q.front();
        q.pop();
        cout << "topological sort   " << queueNode;
        cout << "\n";

        for (auto it : adj[queueNode])
        {
            // cout << it<<" ";
            indegree[it]--;
            if (indegree[it] == 0)
            {
                q.push(it);
                /* code */
            }
        }
        /* code */
    }
}

signed main()
{

    int node;
    cin >> node;
    int edges;
    cin >> edges;

    for (int i = 0, x, y; i < edges; ++i)
    {
        cin >> y >> x;
        //x->y
        //y->x

        adj[x].push_back(y);
        // adj[y].push_back(x);
    }

    for (int i = 1; i <= node; ++i)
    {
        if (!visited[i])
        {
            topologicalSort(i, node);
            // ;

            /* code */
        }
    }

    // solved_by_satyapsr13();

    return 0;
}