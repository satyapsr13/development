// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj[];
// void bfs(int n)
// {
//     vector<int> bfs;
//     vector<int> visitedited(n + 1, 0);
//     queue<int> que;
//     que.push(n);

//     visitedited[n]==1;

// }
// void joinedge(int a, int b)
// {
//     adj[a].push_back(b);
//     adj[b].push_back(a);
// }

// int main()
// {
//     int n; //nodes
//     cin >> n;

//     int e; //edges
//     cin >> e;
//     vector<int> visitedited(n+1,0);
//     int a, b;
//     cout << "enter edges for connection";
//     cin >> a >> b;
//     joinedge(a, b);
//     for (int i = 1; i < n; i++)

//     {
//         if (visitedited[i] == 0)
//         {
//             bfs(i);
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> bfs;
        vector<int> visited(V, 0);
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for (auto it : adj[node])
            {
                if (!visited[it])
                {
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }

        return bfs;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    // for multiple graphs
    while (tc--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u); // uncomment this for undirected graoh
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends