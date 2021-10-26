/*this code is contributed by satyapsr13 SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;
void solve()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0 ; --i)
    {
        arr[i - 1] = arr[i - 1] + arr[i];
    }

    cout << *max_element(arr, arr + n) << "\n";
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