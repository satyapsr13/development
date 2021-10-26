/*this code is contributed by satyapsr13 SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;
void solve()
{
    int n, x, t, count = 0, sum = 0;
    cin >> n >> x >> t;
    vector<int> arr1;
    vector<int> arr2;
    vector<int>::iterator ans;
    arr1[0] = t;
    arr1[1] = t + x;
    arr2[0] = 0;
    arr2[1] = x;
    for (int i = 1; i < n - 1; ++i)
    {
        arr1[i + 1] = arr1[i] + x;
        arr2[i + 1] = 2 * arr2[i];
    }

    for (int i = 0; i < n; ++i)
    {
        ans += (lower_bound(arr2.begin(), arr2.end(), arr1[i]) - arr2.begin());
    }
    cout << ans << "\n";
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