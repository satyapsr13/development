////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    int arr[n];
    ////memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int arr1[n - 1];

    for (int i = 0; i < n - 1; ++i)
    {
        cin >> arr1[i];
    }

    sort(arr, arr + n);
    sort(arr1, arr1 + n - 1);

    if (n == 2)
    {
        if (arr1[0] - arr[1] >= 0)
        {
            cout << arr1[0] - arr[1];
            cout << "\n";
            return;
        }
        else
        {
            cout << arr1[0] - arr[0];
            cout << "\n";
            return;
        }
    }
    if (arr1[0] - arr[1] == arr1[1] - arr[2] and arr1[0 + 1] - arr[1 + 1] == arr1[1 + 1] - arr[2 + 1])
    {

        for (int i = 0; i < n - 1; ++i)
        {
            if (arr1[i] != arr[i + 1])
            {
                break;
                /* code */
            }
        }
        cout << arr1[0] - arr[1];
        cout << "\n";
        return;
        /* code */
    }

    cout << arr1[0] - arr[0];
    cout << "\n";
    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}