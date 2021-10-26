
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
using namespace std;
void solve()
{
    int n, ans, count, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; ++i)
    {
        arr[i + 1] += arr[i];
    }
    int a1 = *max_element(arr, arr + n);
    int m;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m - 1; ++i)
    {
        arr1[i + 1] += arr1[i];
    }
    int a2 = *max_element(arr1, arr1 + m);
    if (a1 > 0 and a2 > 0)
    {
        cout << a1 + a2 << "\n";
        /* code */
    }
    else if (a1 > 0 and a2 <= 0)
    {
        cout << a1 << "\n";
    }
    else if (a2 > 0 and a1 <= 0)
    {
        cout << a2 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
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