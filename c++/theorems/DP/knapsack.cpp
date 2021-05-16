#include <bits/stdc++.h>
using namespace std;

int knapsack(int weight[], int value[], int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (weight[n - 1] <= w)
    {
        return max(value[n - 1] + knapsack(weight, value, n - 1, w - weight[n - 1]), knapsack(weight, value, n - 1, w));
    }
    else
    {
        return knapsack(weight, value, n - 1, w);
    }
}
int main()
{
    int w;
    cin >> w;
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        /* code */
        cin >> value[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    // }
    int ans;
    ans = knapsack(weight, value, n, w);
    cout << ans;
    return 0;
}