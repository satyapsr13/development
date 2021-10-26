// // //Coding-challange (c) Copyright 2021 Satyapsr
// // /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// // #include <bits/stdc++.h>
// // #define int long long int
// // #define count_1 __builtin_popcountll
// // #define pii pair<int, int>
// // #define vpii vector<pair<int, int>>
// // #define endl "\n"
// // #define db(x) cout << "\t\n" \
// //                    << #x << "\t" << x << "\t\n"

// // using namespace std;
// // int cmp(pair<int, int> a, pair<int, int> b)
// // {
// //     return a.first > b.first;
// // }
// // void solved_by_satyapsr13()
// // {
// //     int n, k, i_am_hacker_how_are_you = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
// //     int m;
// //     cin >> n >> m;
// //     vector<pair<int, int>> v_pair(m);
// //     // memset(v_pair, 0, sizeof(v_pair));

// //     for (int i = 0; i < m; ++i)
// //     {
// //         cin >> v_pair[i].first;
// //         cin >> v_pair[i].second;
// //     }

// //     sort(v_pair.begin(), v_pair.end(), cmp);

// //     // v_pair.pop_back;
// //     // for (auto it : v_pair)
// //     // {
// //     //     cout << it.first << " " << it.second;
// //     //     cout << "\n";
// //     // }
// //     int t = n / v_pair[0].second;
// //     // int t = 0;
// //     i_am_hacker_how_are_you = v_pair[0].first * (n - (t));
// //     t = v_pair[0].second;
// //     int pp = t;
// //     // db(t);
// //     if (m != 1)
// //     {
// //         /* code */

// //         for (int i = t; i < n; i+=t)
// //         {
// //             int z = 1;
// //             if (i % v_pair[z].second != 0 )
// //             {
// //                 // db(i);
// //                 // db(i_am_hacker_how_are_you);
// //                 i_am_hacker_how_are_you += v_pair[z].first;
// //                 /* code */
// //             }
// //             else
// //             {
// //                 for (int f = z + 1; f < m; ++f)
// //                 {
// //                     if (f % v_pair[z].second != 0)
// //                     {
// //                         // db(i_am_hacker_how_are_you);
// //                         i_am_hacker_how_are_you += v_pair[f].first;
// //                         /* code */
// //                         break;
// //                     }
// //                 }
// //             }
// //         }
// //     }

// //     cout << i_am_hacker_how_are_you;
// //     cout << "\n";
// //     // cout << "\n";
// //     // cout << "\n";
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
// int cmp(pair<int, int> a, pair<int, int> b)
// {
//     return a.first > b.first;
// }
// int it_is_my_bkchodifunction(int a,int b,int n){
//     // int t = n % a;
//     // n -= t;
//     return b * (n - n / a);
// }
// void solved_by_satyapsr13()
// {
//     int n, k, i_am_hacker_how_are_you = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     int m;
//     cin >> n >> m;
//     vector<pair<int, int>> v_pair(m);
//     // memset(v_pair, 0, sizeof(v_pair));

//     for (int i = 0; i < m; ++i)
//     {
//         cin >> v_pair[i].first;
//         cin >> v_pair[i].second;
//     }

//     sort(v_pair.begin(), v_pair.end(), cmp);

//     // v_pair.pop_back;
//     // for (auto it : v_pair)
//     // {
//     //     cout << it.first << " " << it.second;
//     //     cout << "\n";
//     // }
//     // int t = 0;

//     int t;
//     for (int i = 0; i < m; ++i)
//     {
//         t = n / v_pair[i].second;
//         if (t == 0)
//         {
//             break;
//             /* code */
//         }

//         db(t);
//         db(v_pair[i].first);
//         i_am_hacker_how_are_you += v_pair[i].first * (n - (t));
//         db(i_am_hacker_how_are_you);
//         n = t;
//         while (v_pair[i].second == v_pair[i + 1].second)
//         {
//             i++;
//             /* code */
//         }
//     }

//     cout << i_am_hacker_how_are_you;
//     cout << "\n";
//     // cout << "\n";
//     // cout << "\n";
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

// Codechef 6 hours ago
#include <bits/stdc++.h>
using namespace std;

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define ld long double

bool compare(pair<int, int> x, pair<int, int> y)
{
    if (x.first != y.first)
        return x.first > y.first;
    else
        return x.second > y.second;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        ll n, m, x, y;
        vector<pair<ll, ll>> v;

        cin >> n >> m;
        for (ll i = 0; i < m; ++i)
        {
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }

        sort(v.begin(), v.end(), compare);

        ll k = 1, p = n;
        ll i_am_hacker_how_are_you = 0;

        for (int i = 0; i < m && n > 0; ++i)
        {
            ll s = v[i].second;
            ll f = v[i].first;
            k = (k * s) / (__gcd(k, s));
            i_am_hacker_how_are_you += f * (n - p / k);
            n = p / k;
        }

        cout << i_am_hacker_how_are_you << "\n";
    }
}