//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
#define google(n) cout << "Case #1: " << n
using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    char c;
    int arr[12];
    memset(arr, 0, sizeof(arr));

    for (int i = 1; i < 17; ++i)
    {

        cin >> c;
        arr[c - '0']++;
    }
    // cout << arr[1];
    for (int i = 1; i < 11; ++i)
    {
        if (arr[i] > 2 * n)
        {
            // db(arr[i]);
            cout << "NO" << endl;
            /* code */ return;
        }
    }
    cout << "YES" << endl;

    // google(n);
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