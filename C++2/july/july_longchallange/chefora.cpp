// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */
// #include <bits/stdc++.h>
// #define int long long int
// #define mod 1e9 + 7
// #define space ' '
// #define endl "\n"
// #define db(x) cout << #x << "\t" << x << "\t\n"

// using namespace std;

// int findcheforano(int n)
// {
//     int size = log10(n) + 1;
//     int m = n;
//     int digit;
//     m = m / 10;
//     while (m > 0)
//     {
//         digit = m % 10;
//         n = (n * 10) + digit;
//         m = m / 10;
//         /* code */
//     }
//     return n;
// }
// int binarymultiply(int a, int n)
// {
//     int ans = 0;
//     while (n > 0)
//     {
//         if (n & 1)
//         {
//             ans = (ans + a) % 1000000007;
//         }
//         a = (a % 1000000007) + (a % 1000000007);

//         a = a % 1000000007;
//         ans = ans % 1000000007;

//         n = n >> 1;
//     }
//     return ans;
// }
// int power(int a, int n)
// {
//     int ans = 1;
//     while (n > 0)
//     {
//         if (n & 1)
//         {
//             ans = binarymultiply((ans % 1000000007) , (a % 1000000007));
//         }
//         a =binarymultiply ((a % 1000000007),  (a % 1000000007));

//         a = a % 1000000007;
//         ans = ans % 1000000007;

//         n = n >> 1;
//     }
//     return ans;
// }

// void solved_by_satyapsr13(vector<int> v)
// {
//     int l, r, ans = 0, count = 0, sum = 0;
//     cin >> l >> r;
//     if (l == 1)
//     {
//         cout << 1 << endl;
//         /* code */
//     }
   
//     else
//     {

//         int prod = 1;
       
//         cout << power(l, v[r]-v[l]) % 1000000007 << endl;
//         // db(v[r] - v[l]);
//     }
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     vector<int> v;
//     v.push_back(0);
//     for (int i = 1; i < 100005; ++i)
//     {
//         v.push_back(findcheforano(i));
//     }

//     for (int i= 0; i < v.size(); i++)
//     {
//         v[i + 1] += v[i];
//     }
//     int i = 0;
//     // for (auto it = v.begin(); it < v.end();it++)
//     // {
//     //     cout <<i++<<"\t"<< *it << endl;
//     // }
//     int Test_Cases;
//     cin >> Test_Cases;
//     while (Test_Cases--)
//     {
//         solved_by_satyapsr13(v);
//     }
//     // cout << power(10, 111);

//     return 0;
// }


//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
#define int long long int
#define endl "\n"   
#define google(n) cout << "Case #1: "<<n
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"

using namespace std;
 void solved_by_satyapsr13()
{
    string s;
    cin >> s;
    int t = stoll(s) + 1;
    cout << t;
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