// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// //#define int long long int

// using namespace std;
// void solved_by_satyapsr13(int v[100])
// {

// }
// int main()
// {
// //    cout << "YES"<<endl;
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int v[100];
//     //memset(arr, 0, sizeof(arr));
//     int i = 0;
//     v[0] = 1;
//     while (v[i] < 5005)
//     {
//         v[i + 1] = v[i] + 2;
//         i++;
//     }
//     int p = 0;
//     while (v[p] < 5005)
//     {
//         v[p + 1] += v[p];
//         p++;
//     }
//     // cout << p;
//     // cout <<"\n" ;
//     int Test_Cases;
//     cin >> Test_Cases;
//     while (Test_Cases--)
//     {
//         int n;
//         cin >> n;
//         if (n == 1)
//         {
//             cout << 1;
//             cout << "\n";
//             /* code */
//         }
//         else
//         {

//             for (int j = 0; j < 100; ++j)
//             {

//                 if (v[j] > n)
//                 {
//                     cout << j + 1;
//                     cout << "\n";
//                     // return;
//                     break;
//                     /* code */
//                 }
//             }

//             // cout << *upper_bound(v, v + 2502, n) << "\n";
//         }
//     }
//     return 0;
// }

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
   
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