
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
using namespace std;
void solve()
{
    int n, ans, count, sum = 0;
    cin >> n;
    if (n & 1)
    {
        cout << "Bob\n";
    }
    else if (n & (n - 1) == 0)
    {

        cout << "Bob\n";
    }
    else
    
    {

        cout << "Alice\n";
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