/*this code is contributed by satyapsr13 SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
using namespace std;
void solve()
{
    int n, q, ans = 0, count = 0, sum = 0;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    while (q--)
    {

        int q1;
        cin >> q1;
        int ans1 = lower_bound(arr, arr + n, q1) - arr;
        if (arr[ans1] == q1)
        {
            cout << 0 << "\n";
        }
        // cout << ans1 << "\n";
        else
        {
            if (n & 1)
            {

                if (ans1 & 1)
                {
                    /* code */
                    cout << "POSITIVE\n";
                }
                else
                {
                    cout << "NEGATIVE\n";
                }
                /* code */
            }
            else
            {

                if (ans1 & 1)
                {
                    /* code */
                    cout << "NEGATIVE\n";
                }
                else
                {
                    cout << "POSITIVE\n";
                }
            }
        }
    }

    /* code */
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int Test_Cases ;
    // cin >> Test_Cases;
    // while (Test_Cases--)
    // {
    solve();
    // }
    return 0;
}