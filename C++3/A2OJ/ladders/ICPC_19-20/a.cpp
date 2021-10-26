
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
using namespace std;
void solve()
{
    int n = 7, ans, count, sum = 0;
    //    cin>>n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int mn = (arr[1] - arr[0], arr[2] - arr[1])

        for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] + mn != arr[i + 1])
        {
            cout << arr[i] + mn;
            /* code */
        }
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Test_Cases = 1;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solve();
    }
    return 0;
}