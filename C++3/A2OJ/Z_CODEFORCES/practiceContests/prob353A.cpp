// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// //#define int long long int
// #define endl "\n"
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, count = 0, sum = 0;
//     cin >> n;
//    int dp[n][2];
//     int l = 0, r = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> dp[i][0] >> dp[i][1];
//         if ((dp[i][0] & 1))
//         {
//             l++;
//             /* code */
//         }
//         if ((dp[i][1] & 1))
//         {
//             r++;
//             /* code */
//         }
//     }
//     if (n == 1 and ((!(dp[0][0] & 1)) and (!(dp[0][1] & 1))))
//     {
//         cout << 0 << endl;
//         /* code */
//     }
//     else if ((n == 1||(l==1 and r==1 and l==r ) )and (((dp[0][0] & 1)) || ((dp[0][1] & 1))))
//     {
//         cout << -1 << endl;
//         /* code */
//     }

//     else
//     {

//         if ((l + r) & 1)
//         {
//             cout << -1 << endl;
//             /* code */
//         }
//         else
//         {
//             // cout << min(l, r) << endl;
//             cout << ((1&l)&(r&1))<< endl;
//             /* code */
//         }
//     }
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int Test_Cases = 1;
//     // cin >> Test_Cases;
//     while (Test_Cases--)
//     {
//         solved_by_satyapsr13();
//     }
//     return 0;
// }
//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"   
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"

using namespace std;
 void solved_by_satyapsr13()
{ 
 
 
 
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