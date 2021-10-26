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
    // cout << "YES" << endl;
    // return;
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int arr[100000] = {0};
    int arr1[n];
    // memset(arr, 0, sizeof(arr));
    int t;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
         arr1[i]=t;
        arr[t]++;
    }
    int mn = 0;
    for (int i = 0; i < n; ++i)
    {
        mn += min(arr[arr1[i]], arr1[i] - 1);
        arr[arr1[i]] = 0;
        // db(mn);
        // db(arr1[i]);
    }
    cout << mn << endl;
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