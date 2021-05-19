// // // https://www.codechef.com/MAY21C/problems/ISS
// // #include <bits/stdc++.h>
// // // int n=1e6+1;
// // int arr[1000001];
// // using namespace std;
// // int main(int argc, char const *argv[])
// // {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);
// //     cout.tie(0);
// //     for (int j = 1; j < 1000001; j++)
// //     {
// //         /* code */

// //         long long int sum = 0;

// //         for (int i = 1; i <= 2 * j; i++)
// //         {
// //             sum += (__gcd(j + (i * i), j + ((i + 1) * (i + 1))));
// //         }
// //         arr[j-1] = sum;
// //     }

// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         int y;
// //         cin >> y;
// //         cout << arr[y + 1] << "\n";
// //     }

// //     return 0;
// // }

// // https://www.codechef.com/MAY21C/problems/ISS
// #include <bits/stdc++.h>
// #define db(x) cout << "\n" \
//                    << #x << "\t" << x << "\n"
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long long int k, sum = 0;
//         cin >> k;
//         // for (int i = 1; i <= 2 * k; i++)
//         // {
//         //     sum += (__gcd(k + (i * i), k + ((i + 1) * (i + 1))));
//         // }
//         int num = 4 * k + 1;
//         //  db(num);
//         for (int i = 1; i < num; i++)
//         {
//             /* code */
//         }

//         // cout << sum << "\n";
//     }

//     return 0;
// }

// // https://www.codechef.com/MAY21C/problems/ISS
// #include <bits/stdc++.h>
// // int n=1e6+1;
// int arr[1000001];
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     for (int j = 1; j < 1000001; j++)
//     {
//         /* code */

//         long long int sum = 0;

//         for (int i = 1; i <= 2 * j; i++)
//         {
//             sum += (__gcd(j + (i * i), j + ((i + 1) * (i + 1))));
//         }
//         arr[j-1] = sum;
//     }

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int y;
//         cin >> y;
//         cout << arr[y + 1] << "\n";
//     }

//     return 0;
// }










// https://www.codechef.com/MAY21C/problems/ISS
#include <bits/stdc++.h>
#define db(x) cout << "\n" \
                   << #x << "\t" << x << "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        long long int k, sum = 0;
        cin >> k;
        vector<int> fact;
        long long int l = 4 * k + 1;
        long long int m = 2 * k + 1, count = 0;

        // int l = __gcd(k + ((2 * k) * (2 * k)), k + ((2 * k) * (2 * k)));
        // 1   1   7   3  1   1   3   1   1   21
        for (long long int i = 2; i < l; i++)
        {
            if (l % i == 0)
            {
                fact.push_back(i);
                // db(fact[i]);
            }
        }
        for (long long int i = 0; i < fact.size(); i++)
        {
            count += m / fact[i];
            // db(count);
            /* code */
        }
        long long int ans = m - count - 2+ l;
        
        cout << ans << "\n";
        // int p;
        for (long long int i = 0; i < fact.size(); i++)
        {
            ans += (m / fact[i])*fact[i];
            // db(count);
            /* code */
        }
        cout << ans << "\n";
    }

    return 0;
}
