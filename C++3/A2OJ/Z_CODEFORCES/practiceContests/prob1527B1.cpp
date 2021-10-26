
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
    int n;
    read1(n);
    // int arr[n];
    string s;
     read1( s);
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
        // read1(arr[i]);
        if (s[i] == '0')
        {
            c++;
            /* code */
        }
    }
        if (c%4==0)
        {
            s = "DRAW\n";
            /* code */
        }
        else
        {
            s = "BOB\n";
        }

        cout << s;

        // int arr[n];
}
signed main()
{

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}