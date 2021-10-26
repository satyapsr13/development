// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// //#define int long long int
// using namespace std;
// #define endl "\n"
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"
// vector<int> prime(1000001);
// // void sieve_of_erothenes(vector<int>  v)
// // {
// //     long long prime[1000002] = {0};
// //     // bitset<n> prime;
// //     for (long long i = 2; i <= 1000002; i++)
// //     {
// //         for (long long f = i * i; f <= 1000002; f += i)
// //         {
// //             prime[f] = 1;
// //         }
// //     }
// //     for (long long i = 2; i < 1000002; i++)
// //     {
// //         if (prime[i] != 1)
// //         {
// //             // cout << "\n"
// //             //      << ++z << "  " << i << "\n   ";
// //             v.push_back(i);
// //         }
// //     }
// // }

// void solved_by_satyapsr13()
// {
//     vector<int> v;
//     // memset(v, 0, sizeof(v));
//     v.push_back(0);
//     cout << 1;
//     // sieve_of_erothenes(v);
//     // bitset<n> prime;
//     for (long long i = 2; i <= 1000001; i++)
//     {
//         for (long long f = i * i; f <= 1000001; f += i)
//         {
//             prime[f] = 1;
//         }
//     }
//     for (long long i = 2; i < 1000001; i++)
//     {
//         if (prime[i] != 1)
//         {

//             // cout << "\n"
//             //      << ++z << "  " << i << "\n   ";
//             v.push_back(i);
//         }

//         /* code */
//     }
//     int n;
//     cin >> n;
//     int i = 0;
//     int ans = 0;
//     while (v[i] <= n)
//     {
//         if (!prime[v[i] + 2])
//         {
//             ans++;
//             /* code */
//         }
//         i++;
//         /* code */
//     }
//     cout << ans;
//     cout << "\n";
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     // int Test_Cases;
//     // cin >> Test_Cases;
//     // while (Test_Cases--)
//     // {
//     //     solved_by_satyapsr13();
//     // }
//     // cout << "YES"<<endl;

//     return 0;
// }

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13(vector<int>v,vector<int>prime)
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
 
    int i = 0;
    while (v[i]+2 <= n)
    {
        if (!prime[v[i] + 2])
        {
            // db(v[i] + 2);
            ans++;
            /* code */
        }

        /* code */
        i++;
    }
    cout << ans;
    cout << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> v;

    vector<int> prime(1000002);
    prime.push_back(0);

    //    for (auto it = prime.begin(); it < prime.end();it++)
    //    {
    //       cout <<*it;
    //    }
    for (long long i = 2; i <= 1000002; i++)
    {
        for (long long f = i * i; f <= 1000002; f += i)
        {
            prime[f] = 1;
        }
    }
    for (long long i = 2; i < 1000002; i++)
    {
        if (prime[i] != 1)
        {
            // cout << "\n"
            //      << ++z << "  " << i << "\n   ";
            v.push_back(i);
        }
    }
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13(v,prime);
    }
    return 0;
}