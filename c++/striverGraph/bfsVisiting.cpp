#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;

int findSortestPath(int start, int end, int arr[], int n)
{
    bool visited[end + 1] = {0};
    visited[start] = 1;
    queue<pair<int, int>> q;
    q.push({start, 0});

    while (!q.empty())
    {
        int node = q.front().first;
        int steps = q.front().second;
        // cout << node << " \n";
        db(node);
        if (node == end)
        {
            /* code */ return steps;
        }
        q.pop();

        for (int i = 0; i < n; ++i)
        {
            int target = arr[i] * node;
            if (target <= end and !visited[target])
            {

                q.push({target, steps + 1});
                visited[target] = 1;
            }
        }
        db(q.size());
    }

    return -1;
}

signed main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    cout << findSortestPath(1, 1, arr, 6);
    return 0;
}