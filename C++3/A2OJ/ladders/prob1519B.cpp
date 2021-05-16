// https://codeforces.com/contest/1519/problem/B
#include <bits/stdc++.h>
using namespace std;
bool solve(int n, int m, int k, int a, int b)
{
    if (a == n and b == m)
        return 1;
    if (a > b)
    {
        solve(n, m, k, a, b + 1);
    }
    else
    {
        solve(n, m, k, a + 1, b);
    }
    return 0;
}
int main()
{
    int t;
    bool b;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        b = solve(n, m, k, 1, 1);
        if (b)
        {
            cout << "YES\n";
            /* code */
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
