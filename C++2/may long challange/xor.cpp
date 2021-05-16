// https://www.codechef.com/MAY21C/problems/XOREQUAL
#include <bits/stdc++.h>
// const double pi = 3.1415926535897932384626433832795;
// #define fl(i, n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define int int long long
using namespace std;
int power(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y % 2 == 1)
        {
            res *= x;
            /* code */
        }
        y = y >> 1;
        x *= x;

        /* code */
    }
    return res % mod;
}
// int32_t main()
// {

//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, ans;
//         cin >> n;
//         ans = power(2, n - 1, 1e9 + 7);
//         cout << ans << "\n";
//     }

//     return 0;
// }
signed main()
{

    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int t,y=1;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
           ans=power(2, n - 1);
        cout << ans << "\n";
    }

    return 0;
}
