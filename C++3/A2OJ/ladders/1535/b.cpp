
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
    cin >> n;
    int n1 = n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int count = 0;
    sort(arr, arr + n, [](int x, int y)
         { return x % 2 < y % 2; });

    for (int i = 0; i < n - 1; ++i)
    {

        for (int j = i + 1; j < n; ++j)
        {

           if (__gcd(arr[i],2*arr[j])>1)
           {
               count++;
               /* code */
           }
           
        }
        /* code */
    }
    
    // sort(arr, arr + n);
    


    cout <<count<< "\n";
    // cout << sum << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(false);
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