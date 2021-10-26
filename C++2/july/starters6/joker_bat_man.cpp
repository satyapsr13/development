//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

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
    int n, ans = 0, m, l, count = 1, sum = 0;

    cin >> n >> m >> l;

    int arr[n];
    //memset(arr, 0, sizeof(arr));
    int t;
    int t1;
    for (int i = 0; i < m; ++i)
    {
        cin >> t;
        while (t--)
        {
            cin >> t1;
            arr[t1] = i + 1;
            /* code */
        }
    }
    int arr1[l];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < l; ++i)
    {
        cin >> arr1[i];
    }
    for (int i = 1; i < l; ++i)
    {
        if (arr[arr1[i]] != arr[arr1[i - 1]])
        {
            count++;
            /* code */
        }
    }
    cout << count << endl;
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