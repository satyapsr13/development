//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int arr[n];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        // cout << ceil(arr[i] / k) << endl;
        arr[i] = ceil(arr[i]*1.0 / k);
    }
    // cout << "\n";
    // cout << ceil(5 * 1.0 / 3) << endl;
    int mx = INT_MIN;

    //   for (auto it:arr)
    //      {
    //          cout << it;
    //      }
    for (int index = 0; index < n; ++index)
    {
        mx = max(mx, arr[index]);
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if (mx == arr[i])
        {
            cout << i + 1;
            cout << "\n";
            return;
            /* code */
        }
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}