//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
vector<vector<int>> adj(10000);
vector<int> color(10000, -1);
bool checkBipartite(int node, int color1)
{

    color[node] = color1;
    for (auto it : adj[node])
    {
        // cout << it<<" ";
        if (color[it] == -1)
        {
            if (checkBipartite(it, !color1))
            {
                /* code */ return true;
            }

            /* code */
        }
        else if (color[it] == color1)
        {

            return true;
            /* code */
        }
    }
    return false;
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

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= node; ++i)
    {
        if (color[i] == -1)
        {
            // ;
            if (checkBipartite(i, 0))
            {
                cout << "YES"
                     << "\n";
                return 0;
                /* code */
            }

            /* code */
        }
    }

    // solved_by_satyapsr13();

    return 0;
}