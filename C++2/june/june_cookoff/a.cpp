/*this code is contributed by satyapsr13 SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
using namespace std;
void solve()
{
    int x1, x2, y1, y2, z1, z2;
    cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
    if (x1 > x2)
    {
        cout << "NO\n";
        /* code */
    }
    else if (y1 > y2)
    {
        cout << "NO\n";
        /* code */
    }
    else if (z1 < z2)
    {
        cout << "NO\n";
        /* code */
    }else
    {
        cout << "YES\n";
    }
    
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solve();
    }
    return 0;
}