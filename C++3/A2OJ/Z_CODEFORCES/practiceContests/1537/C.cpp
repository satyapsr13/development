// color : Color(0xFF00E676),
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

    sort(arr, arr + n);

    int min = INT_MAX;
    int index;
    if (n < 3)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        /* code */
    }
    else
    {

        for (int i = 0; i < n - 1; ++i)
        {
            if (min > arr[i + 1] - arr[i])
            {

                min = arr[i + 1] - arr[i];
                index = i;
            }
        }
        // cout << arr[index] << " ";
        for (int i = index+1; i < n; ++i)
        {
            cout << arr[i] << " ";
        }

        for (int i = 0; i <= index; ++i)
        {
            cout << arr[i] << " ";
        }
        // cout << arr[index + 1] << " ";
    }

    cout << "\n";
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