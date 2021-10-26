// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// #define int long long int
// #define count_1 __builtin_popcountll
// #define endl "\n"
// #define google(n) cout << "Case #1: " << n
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// const int N = 1000000;
// vector<int> v;
// void recut(int n)
// {
//      if (n == 0)
//     {
//         return;
//         /* code */
//     }
    
//     if (n == 1)
//     {
//         v.push_back(n);
//         /* code */
//         return;
//     }
//     int tt = sqrt(n);
//     v.push_back(tt);
//     // cout << tt<<"  ";
//     n = n - (tt * tt*tt);

//     recut(n);
// }
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, count = 0, sum = 0;
//     cin >> n;
//     recut(n);
//     cout << v.size();
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int Test_Cases = 1;
//     while (Test_Cases--)
//     {
//         solved_by_satyapsr13();
//     }
//     return 0;
// }
//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"   
#define google(n) cout << "Case #1: "<<n
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"

using namespace std;
 void solved_by_satyapsr13()
{  int n,k,ans=0,count=0,sum=0;
   cin>>n;
  
 for (int i = 0; i < n; ++i)
 {
     cout << "👍" << endl;
     //  return;
     
 }
    
 
 
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases=1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}