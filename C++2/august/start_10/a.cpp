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
    cin >> n >> k;
    int arr[n];
    ////memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int i = 0;

    sort(arr, arr + n);

    while (i < k and arr[i] < 0)
    {
        sum += (arr[i] * (-2));
        i++;
    }

    while (arr[i] < 0 )
    {
        sum += (arr[i] * (-1));
        i++;
    }
    cout << sum;
    cout << "\n";
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