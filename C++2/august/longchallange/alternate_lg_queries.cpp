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
int lcm(int a, int b)
{
    return ((a * b) / __gcd(a, b));
}
void solved_by_satyapsr13()
{
    int n, k, m, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n >> m;
    int arr[n];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // int gcd[n];

    // for (int i = 0; i < n - 1; ++i)
    // {
    //     gcd[i] = __gcd(arr[i], arr[i + 1]);
    // }
    int type, r;
    int index = 1;
    while (m--)
    {
        /* code */
        ans = 0;
        cin >> type >> l >> r;
        // ans = r - 1;

        if (type == 1)
        {
            for (int i = r - 1; i >= l; --i)
            {
                // ans = __gcd(ans, arr[i]);
                if (1 & index)
                {
                    ans = __gcd(ans, arr[i]);
                    // index++;
                }
                if (!(1 & index))
                {
                    ans = lcm(ans, arr[i]);
                    /* code */
                }
                index++;
            }
        }
        else
        {
        }

        cout << ans;
        cout << "\n";
    }
    // cout<<__gcd(arr[4])
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
    // cout << __gcd(0, 222);
    return 0;
}