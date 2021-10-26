/*this code is contributed by satyapsr13 SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
    using namespace std;
void solve()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int i;
    for (int i = 1; i <n - k; ++i)
    {
        cout << i <<" ";
    }
    
    for (int i = n; i >=n-k; --i)
    {
        cout << i << " ";
    }

    // cout << i << "d ";
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Test_Cases = 1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solve();
    }
    return 0;
}

