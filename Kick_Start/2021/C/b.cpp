// https: //codingcompetitions.withgoogle.com/kickstart/round/0000000000435c44/00000000007ec1cb

#include <bits/stdc++.h>
#define int long long int
#define db(x) cout << "\n" \
                   << #x << x << "\n"
using namespace std;
void solve()
{
    int n, sum = 0, count = 0;
    cin >> n;
    // vector<int> arr;

    for (int i = 1; i <= n; ++i)
    {
        sum = 0;
        int j = i;
        while (sum<n)
        {
            sum += j;
            j++;
        // cout<<j<<" " << sum << "\n";
        }
        if (sum==n)
        {
            count++;
            /* code */
        }
        
    }

    cout << count << "\n";
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