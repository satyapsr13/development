// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
class DSU
{
private:
    vector<int> parent, size;
    DSU(int n)
    {

        for (int i = 1; i <= n; ++i)
        {
            parent.push_back(i);
            size.push_back(1);
        }
    }

public:
    void Union(int u,int v){
        int pu = findParent(u);
        int pv = findParent(v);
        if (pu==pv)
        {
            return;
            /* code */
        }if (size[pu]<size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
            /* code */
        }else
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    };
    int findParent(int node)
    {
        if (parent[node]==node)
        {
            return node;
            /* code */
        }
        return parent[node] = findParent(parent[node]);
    }
};

void solve()
{
    DSU dsu(n);
}
signed main()
{

    return 0;
}