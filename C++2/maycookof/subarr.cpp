
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
    int n,k;
    read2(n,k);
    int arr[n], count = 0;

    for (int i = 0; i < n; ++i)
    {
        read1(arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != arr[i + k-1])
        {
            count++;
            /* code */
        }
    }
     cout <<  count<< "\n";
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}