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
    cin >> k >> n;
    int arr[n];
    //memset(arr, 0, sizeof(arr));
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 1 | arr[i] == k)
        {
            cout << "NO" << endl;
            return;
            /* code */
        }
    }


    for (int i = 1; i < n; ++i)
    {
        if (arr[i] - arr[i - 1] > 2)
        {
            // db(arr[i]);
            cout << "NO" << endl;
            return;
            /* code */
        }
    }
    cout << "YES" << endl;
    return;
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