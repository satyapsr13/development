// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// #define int long long int
// #define count_1 __builtin_popcountll
// #define pii pair<int, int>
// #define vpii vector<pair<int, int>>
// #define endl "\n"
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// int recur(int n, int height[], int coast, int t)
// {

//     if (t == n - 1)
//     {
//         return coast;
//         /* code */
//     }
//     if (abs(height[t + 1] - height[t]) + abs(height[t + 2] - height[t + 1]) > abs(height[t + 2] - height[t]))
//     {
//         recur(n, height, coast + abs(height[t + 2] - height[t]), t + 2);
//     }
//     else
//     {
//         recur(n, height, coast + abs(height[t + 1] - height[t]) + abs(height[t + 2] - height[t + 1]), t + 1);
//     }
//     return coast;
// }
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n;
//     int height[n];
//     ////memset(arr, 0, sizeof(arr));
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> height[i];
//     }
//     cout << recur(n, height, 0, 0);
//     cout << "\n";
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     solved_by_satyapsr13();

//     return 0;
// }

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// #include ""
#include <iostream>
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
    int h[n+2];
    ////memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }
    h[n] = 0;
    h[n+1] = 0;

    for (int i = 0; i < n;)
    {
        if (abs(h[i] - h[i + 2]) <= abs(h[i] - h[i + 1])+ abs(h[i+2] - h[i + 1]))
        {
            ans += abs(h[i] - h[i + 2]);
            db(i);
            db(ans);
            i += 2;
        }
        else
        {
            ans += abs(h[i] - h[i + 1]);
            db(i+0);
            db(ans);
            i++;
        }

        /* code */
    }
    
    cout << ans;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}