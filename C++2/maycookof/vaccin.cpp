// https: //www.codechef.com/COOK129C/problems/VACCINE3

#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c

#define db(x) cout << "\n" \
                   << #x << " = " << x << "\n"
using namespace std;
void solve()
{
    int g, p;
    read2(g, p);
    int arr[10];

    for (int i = 0; i < 10; ++i)
    {
        read1(arr[i]);
    }
    int sum = 0;
    for (int i = 9; i > g - 1; --i)
    {
        sum += arr[i];
        // db(sum);
    }
    cout << (sum / p) + 1 << " ";
    if ((sum + arr[g - 1]) % p==0)
        {
       cout<<( sum + arr[g - 1]) / p<< "\n";
        }
    else
    {cout<< ((sum + arr[g - 1]) / p)+1<< "\n";
    }

    // if (sum % p)
    // {
    //     /* code */
    // }
    // else
    // {
    //     cout << sum / p << " " << sum / p << "\n";

    //     /* code */
    // }

    // int arr[n];
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
