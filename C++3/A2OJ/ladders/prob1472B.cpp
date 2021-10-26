// https: //codeforces.com/contest/1472/problem/B
#include <bits/stdc++.h>
#define int long long int
#define fl(i, a, n) for (int i = a; i < n; ++i)
using namespace std;
void solve()
{
    int n, x = 0, y = 0;
    cin >> n;
    int arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr;
        if (arr == 1)
        {
            x++;
        }
        if (arr == 2)
        {
            y++;
        }
    }
    if ((x & 1) | (x == 0 and (y & 1)))
    {
        cout << "NO\n";
        /* code */
    }
    else

    {
        cout << "YES\n";
    }
}
signed main()
{
    // int n;
    // cin >> n;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
