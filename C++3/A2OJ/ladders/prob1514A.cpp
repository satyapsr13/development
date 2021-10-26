
#include <bits/stdc++.h>
#define int long long int
// const int mod(1e9 + 7);
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout < < < < #x < < < < x <<
using namespace std;


signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[10001] = {0};

    for (int i = 1; i <= 100; i += 1)
    {
        arr[i * i] = 1;
    }
    int t;
    cin >> t;
    while (t--)
    {
        // solve();
        int n;
        cin >> n;
        int p;
        bool b = 0, ok = 1;
        for (int i = 0; i < n; ++i)
        {
            cin >> p;
            // cout <<p<<" "<< arr[p]<<endl;

            ok &= arr[p];
        }
        cout << (ok ? "NO\n" : "YES\n");
        // cout << (ok ? "NO\n" : "YES\n");
    }
    return 0;
}