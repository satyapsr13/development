//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl ''

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, count = 0, sum = 0;
    cin >> n;
    int arr[n];
    if (n & 1)
    {
        for (int i = 1; i <= n - 1; i += 2)
        {
            arr[i] = i;
            arr[i - 1] = i + 1;
            // cout << i + 1 << " " << i << " ";
        }
        arr[n - 1] = n;
        arr[n - 1] = arr[n - 1] ^ arr[n - 2];
        arr[n - 2] = arr[n - 1] ^ arr[n - 2];
        arr[n - 1] = arr[n - 1] ^ arr[n - 2];
    }
    else
    {

        for (int i = 1; i <= n; i += 2)
        {
            arr[i - 1] = i + 1;
            arr[i] = i;
            // cout << i + 1 << " " << i << " ";
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
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