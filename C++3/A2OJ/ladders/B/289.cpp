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
    int m, d;
    cin >> n >> m >> d;
    int arr[n * m];

    for (int i = 0; i < n * m; ++i)
    {
        cin >> arr[i];
    }
    int mod = arr[0] % d;

    sort(arr, arr + n);
    int target = arr[n * m / 2 ];
    for (int i = 0; i < n * m; ++i)
    {
        if (mod != arr[i] % d)
        {
            cout << "-1" << endl;
            return;
            /* code */
        }

        sum += abs(target - arr[i]);
    }
    cout << sum / d;
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