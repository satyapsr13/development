//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
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
    int a1 = 0;
    int a2 = 0;
    //memset(arr, 0, sizeof(arr));

    for (int i = 1; i < n + 1; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            a1++;
        }
    }
    // cout << a2;
    a2 = n - a1;
    int p1, p2;
    while (k--)
    {
        cin >> p1 >> p2;
        // if (p2 - p1 & 1 and min(a1, a2) >= (p2 - p1+1)/2)
        // {
        //     cout << 1;
        //     cout << "\n";

        //     /* code */
        // }
        // else
        // {
        //     cout << 0;
        //     cout << "\n";
        // }

        (p2 - p1 & 1 and min(a1, a2) >= (p2 - p1 + 1) / 2) ? cout << 1 : cout << 0;
        cout << "\n";
        /* code */
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int arr[n];
    int a1 = 0;
    int a2 = 0;
    //memset(arr, 0, sizeof(arr));

    for (int i = 1; i < n + 1; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            a1++;
        }
    }
    // cout << a2;
    a2 = n - a1;
    int p1, p2;
    while (k--)
    {
        cin >> p1 >> p2;
       

        (p2 - p1 & 1 and min(a1, a2) >= (p2 - p1 + 1) / 2) ? cout << 1 : cout << 0;
        cout << "\n";
        /* code */
    }
    return 0;
}