//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
// #include <iostream>
// #include <climits>
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
    //    cin>>n;
    int arr[4];
    int arr1[11] = {0};
    //memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 4; ++i)
    {
        cin >> arr[i];
        arr1[arr[i]]++;
        mx = max(mx, arr1[arr[i]]);
    }
    // mx = max_element(arr1, arr + 11);

    if (mx == 4)
    {
        cout << "0" << endl;
        return;
        /* code */
    }
    if (mx == 3)
    {
        cout << "1" << endl;
        return;
        /* code */
    }
    cout << "2" << endl;
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