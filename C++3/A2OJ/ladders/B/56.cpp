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
    //memset(arr, 0, sizeof(arr));
    int l = 0, r = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if ((i + 1) != arr[i])
        {
            r = i + 1;
            /* code */
        }
    }
    // db(r);
    for (int i = 0; i < n; ++i)
    {
        if ((i + 1) != arr[i])
        {
            l = i + 1;
            break;
            /* code */
        }
    }
    // db(l);

    for (int i = l - 1; i < r-1; ++i)
    {
        if (arr[i] - 1 != arr[i + 1])
        {
            // cout << i;
            cout << 0 << " " << 0;
            cout << "\n";
            return;
            /* code */
        }
    }
    cout << l << " " << r;cout <<"\n" ;
    
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