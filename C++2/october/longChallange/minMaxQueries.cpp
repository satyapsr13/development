#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
const int N = 1e5 + 1;
int arr[N] = {0}, tree[4 * N] = {0};
void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = arr[start];
        return;
    }

    int mid = start + end / 2;
    build(2 * node, start, mid);
    // build(2 * node + 1, mid + 1, end);

    tree[node] = tree[2 * node] + tree[2 * node + 1];
    // return;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    build(1, 0, n - 1);

    for (int i = 1; i < 2 * n; ++i)
    {
        cout << tree[i] << " ";
    }

    return 0;
}