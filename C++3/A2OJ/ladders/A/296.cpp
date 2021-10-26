//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int arr[1002];
    int x;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        arr[x]++;
    }
    // for (int i = 0; i < 1000; ++i)
    // {
        
    //     cout<<arr[i];
    // }

    // cout << *max_element(arr, arr + 1001);

    if (*max_element(arr, arr + 1001) > ceil(n*1.0 / 2))
    {
        cout << "NO" << endl;
        /* code */
    }
    else
    {
        cout << "YES" << endl;
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}