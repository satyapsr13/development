// // Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */
// #include <bits/stdc++.h>
// //#define int long long int
// #define endl "\n"
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"
// using namespace std;
// const int mx = 5e5 + 5;
// int edges;
// int node;
// vector<vector<int>> tree(mx);
// vector<bool> vis(mx);
// void dfs(int node)
// {
//     vis[node] = true;
//     cout << "node \t" << node;
//     cout << "\n";
      
//      for (int i = 1; i < node; ++i)
//      {
         
//      }
// }
// void killNode()
// {
//     for (int i = 1; i < node + 1; ++i)
//     {
//         if (!vis[i])
//         {
//             dfs(i);
            
//         }
//     }
// }

// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     cin >> node;
//     cin >> edget;
//     for (int i = 0; i < edges; ++i)
//     {
//         int u, v;
//         cin >> u >> v;
//         tree[u].push_back(v);
//         tree[v].push_back(u);
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int index;
//         cin >> index;
//         if (index == 3)
//         {
//         }
//         else if (index == 2)
//         {
//         }
//         else
//         {
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int n, m, i, x, y, q, t, r, cnt[200200];
#define db(x) cout<<#x<<" "<<x<<"\n"
int main()
{
    scanf("%d%d", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d%d", &x, &y);
        if (x > y)
            swap(x, y);
        if (++cnt[x] == 1)
            ++r;
        db(r);
    }
    cerr << r;
    scanf("%d", &q);
    while (q--)
    {
        scanf("%d", &t);
        if (t == 3)
            printf("%d\n", n - r);
        else
        {
            scanf("%d%d", &x, &y);
            if (x > y)
                swap(x, y);
            if (t == 1)
            {
                if (++cnt[x] == 1)
                    ++r;
            }
            else
            {
                if (--cnt[x] == 0)
                    --r;
            }
        }
    }
    return 0;
}