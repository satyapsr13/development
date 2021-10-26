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
    cin >> n;
    int arr[n];
    int arr1[n];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        arr1[i] = arr[i];
    }
    sort(arr1, arr1 + n);
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        mp[arr1[i]] = i;
    }

    for (int i = 0; i < n; ++i)
    {
        arr[i] = mp[arr[i]];
    }
    // for (auto it : arr)
    // {
    //     cout << it;
    // }
    int l = -1;
    int r = -1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != i)
        {
            l = i;
            break;
            /* code */
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (arr[i] != i)
        {
            r = i;
            break;
            /* code */
        }
    }
    //  for (auto it:arr)
    //     {
    //         cout << it;
    //     }
    if (l == -1 || r == -1)
    {
        cout << "yes" << endl;
    cout <<1<< " " <<1;

        return;
        /* code */
    }
    else
    {
        reverse(arr + l, arr + r+1);
        // for (auto it : arr)
        // {
        //     cout << it;
        // }

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] != i)
            {
                cout << "no" << endl;
                /* code */
                return;
            }
        }
        /* code */
    }
    cout << "yes" << endl;
    cout << l + 1<< " " << r + 1;
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