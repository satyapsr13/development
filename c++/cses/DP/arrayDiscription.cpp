
// #include <bits/stdc++.h>

// #define db(x) cout << "->" \
//                    << " " << #x << "\t" << x << "\t\n"
// using namespace std;
// int dp[1000001];
// int find(vector<int> v, int n, int k)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     // if (abs(ans - v[n-1]) > 1)
//     // {
//     //     return 0;
//     // }
//     int ans = 0;
//     if (v[n] == 0)
//     {
//         // return find(v, n - 1, v[n]);
//         for (int i = 1; i <= k; ++i)
//         {
//             ans += find(v, n - 1, k);
//         }
//     }
//     else
//     {

//         ans += find(v, n - 1, k);
//     }
//     // cout << "test  ";
//     // cout << __LINE__ << "\t"
//     //      << ans;cout <<"\n" ;

//     return ans;
//     // return 0;
// }
// signed main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n + 1);
//     v.push_back(INT_MIN);
//     memset(dp, 0, sizeof(dp));
//     int t;
//     cin >> t;
//     for (int i = 1, x; i <= n; ++i)
//     {
//         cin >> v[i];
//     }
//     cout << find(v, n, t);
//     return 0;
// }


//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>

#define db(x) cout<<__LINE__<<"->"<<" "<<#x<<"\t"<<x<<"\t\n"
using namespace std;

 void solved_by_satyapsr13()
{  int n,k,ans=0,count=0,sum=0;
   cin>>n;
   unordered_map<char, int> mp;
   mp['a'] = 1;
   mp['e'] = 1;
   mp['i'] = 1;
   mp['o'] = 1;
   mp['u'] = 1;
   cout <<mp['a']<<"\n";  
   return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        solved_by_satyapsr13();
    return 0;
}