#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
const int N = 1e5 + 1;
int arr[N], tree[4 * N];
int query(int node, int start, int end, int l, int r)
{

    if (start > r || end < l)
    {
        return 0;
        /* code */
    }
    if (start >= l and end <= r)
    {
        return tree[node];
        
    }
    int mid = start + end / 2;
    return query(2 * node, start, mid, l, r) + query(2 * node + 1, mid + 1, end, l, r);
}
void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = arr[start];
        
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
signed main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    build(1, 0, n - 1);

    for (int i = 0; i < 2 * n; ++i)
    {
        cout << tree[i + 1] << " ";
    }

    // cerr << query(1, 0, n - 1, 1, 6);
    return 0;
}