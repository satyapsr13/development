////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    int arr_x[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr_x[i];
    }
    int arr_y[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr_y[i];
    }
    int target_x = arr_x[0];
    int target_y = arr_y[0];

    for (int i = 0; i < n; ++i)
    {
        if (arr_x[i] == arr_y[i])
        {
            target_x = arr_x[i];
            target_y = arr_y[i];
            break;
            /* code */
        }
    }
    // db(target_x);
    for (int i = 0; i < n; ++i)
    {
      
        int x0 = target_x - arr_x[i];
        int y0 = target_y - arr_y[i];
        if (target_x == arr_x[i] and target_y == arr_y[i])
        {
            // db(i+1);
            continue;
        }
       else if (target_x == arr_x[i] || target_y == arr_y[i])
        {
            // db(i);
            ans++;
            db(ans+1);
            continue;
        }

        else if (x0 == y0)
        {
            db(ans+2);
            
            ans++;
            continue;
        }
        else if (x0 == ((y0) * (-1)))
        {
            db(ans+3);
            
            ans++;
            continue;
        }
        else
        {
            db(ans+4);
            
            ans += 2;
        }
    }
    cout << ans;
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