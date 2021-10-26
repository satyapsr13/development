#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        int node = adj[0][0];
        queue<int> q;
        vector<int> ans;
        q.push(node);
        while (!q.empty())
        {
            int mynode = q.front();
            ans.push_back(mynode);
            for (auto it : adj[mynode])
            {
                q.push(it);
            }
        }

        return ans;
    }
};

int main(int argc, char const *argv[])
{
    
    
    return 0;
}


const int mx = 1e5 + 5;
vector<vector<int>> tree(mx);
vector<bool> vis(mx);
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    vis[node] = true;
    while (!q.empty())
    {
        int pnode = q.front();
        cout << "node\t" << pnode;
        cout <<"\n" ;
        q.pop();

        for (int neigh : tree[pnode])
        {
            if (!vis[neigh])
            {
                vis[neigh] = true;
                q.push(neigh);
                
            }
        }
    }
}
