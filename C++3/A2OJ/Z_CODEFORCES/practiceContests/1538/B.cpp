
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
// #define db(x) cout < < < < #x < < < < x <<
#define db(x) cout << "   \n   " << #x << "  " << x << "   \n   "
using namespace std;
void solve()
{
    int n, ans = 0, count = 0;
    int sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (n == 1)
    {
    }
    else
    {

       
        int avgp = 0;
        avgp = sum / n;
        if ((n * avgp) != sum)
        {
           
            ans = -1;
            /* code */
        }
        else
        {

            for (int i = 0; i < n; ++i)
            {
                if (arr[i] > avgp)
                {
                    ans++;
                    /* code */
                }
            }
        }
    }
    cout << ans << "\n";
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