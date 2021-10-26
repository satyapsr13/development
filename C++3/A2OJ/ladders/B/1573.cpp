// // ////Coding-challange (c) Copyright 2021 Satyapsr
// // //// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

// // #include <bits/stdc++.h>
// // #define int long long int
// // #define count_1 __builtin_popcountll
// // #define pii pair<int, int>
// // #define pb push_back
// // #define fi first
// // #define sc second
// // #define vpii vector<pair<int, int>>
// // #define endl "\n"
// // #define db(x) cout << "\t\n" \
// //                    << #x << "\t" << x << "\t\n"

// // using namespace std;
// // void solved_by_satyapsr13()
// // {
// //     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
// //     cin >> n;
// //     int arr[n];

// //     for (int i = 0; i < n; ++i)
// //     {
// //         cin >> arr[i];
// //     }
// //     int arr1[n + 1];
// //     arr1[n] = 0;

// //     for (int i = 0; i < n; ++i)
// //     {
// //         cin >> arr1[i];
// //     }
// //     // mn = min(mn, arr[0]);

// //         mx = max(mx, arr1[0]);
// //     for (int i = 0; i < n; ++i)
// //     {
// //         mx = max(mx, arr1[i+1]);
// //         mn = min(mn, arr[i]);
// //         if (mn < mx)
// //         {
// //             break;
// //             /* code */
// //         }
// //     }

// //     for (int i = 0; i < n; ++i)
// //     {
// //         if (arr[i] == mn)
// //         {
// //             ans += i;
// //             break;
// //             /* code */
// //         }
// //     }
// //     for (int i = 0; i < n; ++i)
// //     {
// //         if (arr1[i] == mx)
// //         {
// //             ans += i;
// //             break;
// //             /* code */
// //         }
// //     }
// //     cout << ans;
// //     cout << "\n";
// // }
// // signed main()
// // {

// //     ios_base::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     cout.tie(nullptr);
// //     int Test_Cases;
// //     cin >> Test_Cases;
// //     while (Test_Cases--)
// //     {
// //         solved_by_satyapsr13();
// //     }
// //     return 0;
// // }

// ////Coding-challange (c) Copyright 2021 Satyapsr
// //// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

// #include <bits/stdc++.h>
// #define int long long int
// #define count_1 __builtin_popcountll
// #define pii pair<int, int>
// #define pb push_back
// #define fi first
// #define sc second
// #define vpii vector<pair<int, int>>
// #define endl "\n"
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     int arr1[n];

//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr1[i];
//     }



// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int Test_Cases;
//     cin >> Test_Cases;
//     while (Test_Cases--)
//     {
//         solved_by_satyapsr13();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int b[100005];
pair<int, int> a[100005];
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        sort(a + 1, a + n + 1);
        int res = INT_MAX;
        int j = 0;
        for (int i = 1; i <= n; i++)
        {
            while (b[j] <= a[i].first)
                j++;
            res = min(res, a[i].second - 1 + j - 1);
        }
        cout << res << endl;
    }
}