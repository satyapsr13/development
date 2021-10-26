// https: //www.codechef.com/COOK129C/problems/MARARUN

#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout < < < < #x < < < < x <<
using namespace std;
void solve()
{
    int dd, d,ans=0;
    read2(dd, d);
    int a, b, c;
    read3(a, b, c);
   
   
    
    if (dd * d >= 42)
    {
        ans = 3;
        /* code */
    }else
    {
        if (dd * d >= 21)
        {
            ans = 2;
            /* code */
        }
        else
        {
            if (dd * d >= 10)
            {
                ans = 1;
                /* code */
            }
        }
    }

    cout << ans << "\n";
    // int arr[n];
}
signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}