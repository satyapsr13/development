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
    }

    sort(arr, arr + n);
    int mx = INT_MIN;
    int pp = INT_MIN;
    int pp1 = INT_MIN;
    if (arr[0] != 0)
    {
        pp = 2 * arr[0];
        /* code */
    }
    if (arr[n-1] != k)
    {
        pp1 = 2 *(k- arr[n-1]);
        /* code */
    }
    mx = max(pp, pp1);

    for (int i = 0; i < n - 1; ++i)
    {
        mx = max(mx, arr[i + 1] - arr[i]);
    }
    float pp3 = mx * 1.0 / 2;

    cout << pp3;

    cout << "\n";
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