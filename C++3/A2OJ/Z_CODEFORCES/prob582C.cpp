// https://codeforces.com/problemset/problem/580/C
#include <bits/stdc++.h>
using namespace std;
#define w 100001
vector<int> v[w];
int n, m, x, y, a[w], b[w], i = 1, c, p;
void tree(int k)
{
    b[k]++;
    int z = 0;
    if (a[k])
        a[k] += c;
    if (a[k] > m)
        return;
    for (int j = v[k].size(); j--;)
        if (!b[v[k][j]])
            z = 1, c = a[k], tree(v[k][j]);
    if (!z)
    {
        p++;
        return;
    }
}
main()
{
    cin >> n >> m;
    for (; i <= n; i++)
        cin >> a[i];
    for (i = 1; i < n; i++)
        cin >> x >> y, v[x].push_back(y), v[y].push_back(x);
    tree(1);
    cout << p;
}