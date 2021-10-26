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
// const int N = 1e5 + 2;
// int arr[N];
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n;
//     int pp = 0;
//     for (int i = 1; i <= n; ++i)
//     {
//         for (int j = 1; j <= n; ++j)

//         {

//             for (int k = 1; k < n; ++k)
//             {

//                 if (i % j == k and j%k==0)
//                 {
//                     cout<<++pp<<"      " << i << " " << j<<" "<<k;cout <<"\n" ;

//                     ans++;
//                     // cout << "\n";
//                 }

//                 /* code */
//             }
//         }
//     }
//     cout <<ans<<endl;
//     return;
//     // cout <<"\n" ;
//     // cout <<"\n" ;
//     // cout <<"\n" ;
//     // cout <<"\n" ;

// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     // cout << "YES" << endl;
//     int Test_Cases;

//     cin >> Test_Cases;
//     while (Test_Cases--)
//     {
//         solved_by_satyapsr13();
//     }
//     return 0;
// }

// Codechef 1 day ago
//     agar phir bhi koi problem ho to mera code dekhna

#include <bits/stdc++.h>
using namespace std;

// #define tc    \
//     int t;    \
//     cin >> t; \
//     while (t--)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        long long n;
        cin >> n;
        long long count = 0;

        for (int c = 1; c <= n; ++c)
        {
            for (int b = c; b <= n; b += c)
            {
                for (int a = c; a <= n; a += b)
                {
                    if (a % b == c)
                    {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }
}