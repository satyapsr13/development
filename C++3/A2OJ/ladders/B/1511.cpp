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
//     int a, b, c;
//     cin >> a >> b >> c;
//     int i;
//     int j;
//     int arr[11] = {0, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
//     int arr1[11] = {0, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000};
//     // db(i);
//     i = arr[a];

//     j = arr[b];
//     mn = arr1[a];

//     mx = arr1[b];

//     for (; i < mn; ++i)
//     {

//         for (; j < mx; ++j)
//         {
//             if (log10(__gcd(i, j)) + 1 == c)
//             {
//                 cout << i << " " << j;
//                 cout << "\n";
//                 return;
//                 /* code */
//             }
//         }
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

////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define pb push_back
#define fi first
#define sc second
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int a, b, c;
    cin >> a >> b >> c;
    int i;
    int j;
    int arr[11] = {0, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    int arr1[11] = {0, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000};
    // db(i);
    i = arr[a];

    j = arr[b];
    mn = arr1[a];

    mx = arr1[b];

    if (a < b)
    {

        cout << i << " " << j + arr[c];
    }
    else if (a >= b)
    {

        cout << i + arr[c] << " " << j;
    }
    cout <<"\n" ;
    
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