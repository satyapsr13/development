//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define count_1 __builtin_popcountll
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
int count_set_bits(int n)
{
    int p = (log2(n)) + 1;
    int count = 0;
    while ((p)--)
    {
        if (n & 1 << p)
        {
            count++;
            
        }

    
    }
    return count;
}
// void solved_by_satyapsr13()
// {
//     int n, m, k, ans = 0, count = 0, sum = 0;
//     cin >> n >> m >> k;
//     int arr[m + 1];
//     // __builtin_popcount(5);
//     for (int i = 0; i < m + 1; ++i)
//     {
//         cin >> arr[i];
//     }
//     // int pp = count1(arr[m]);
//     // int count = 0;
//     // for (int i = 0; i < m + 1; ++i)
//     // {
//     //     cin >> arr[i];
//     // }
//     for (int i = 0; i < m ; ++i)
//     {
//         if (k >= (count_1(arr[i]^ arr[m])))
//         {
//             count++;
//             /* code */
//         }
//     }
//     cout << count << endl;
// }
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    while (Test_Cases--)
    {
       long long  t = (1 <<31)*1LL;
        cout << count_1(t);
        // solved_by_satyapsr13();
    }
   
    return 0;
}