// // // https://www.hackerearth.com/challenges/competitive/may-circuits-21/algorithm/binary-inversions-cf645357/
// // #include <bits/stdc++.h>
// // #define db(x) cout << "\n" \
// //                    << #x << "\t" << x << "\n"
// // #define int long long int
// // #define fl(i, a, n) for (int i = a; i < n; ++i)
// // int cnt;
// // bool b = 0;
// // int solve(int arr[], int n)
// // {
// //     int m = 0, o = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i] > arr[i + 1])
// //         {
// //             m = i;
// //         }
// //         if (arr[n - 1 - i] < arr[n - i - 2])
// //         {
// //             o = n - i - 2;
// //         }
// //         if (o < m)
// //         {
// //             return cnt;
// //             /* code */
// //         }

// //         reverse(arr + m, arr + o);
// //         cnt++;

// //         solve(arr, n);
// //     }
// //     return cnt;
// // }
// // using namespace std;
// // signed main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         b = 0;
// //         // cnt = 0;
// //         int n;
// //         cin >> n;
// //         int arr[n];
// //         // fl(i, 0, n)
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> arr[i];
// //         }
// //         int ans = solve(arr, n);
// //         cout << ans << "\n";
// //         // reverse(arr+3,arr+8);
// //         // fl(i, 0, n)
// //         // for (int i = 0; i <n; i++)
// //         // {
// //         //     cout<<arr[i];
// //         // }
// //     }

// //     return 0;
// // }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int j = 1; j <= n; j++)
//     {
//         int p = n - j + 1;
//         int q = n - p;
//         for (int a = n; a > p; a--)
//             cout << a << " ";
//         for (int i = q; i < n; i++)
//             cout << p << " ";
//         for (int i = q; i < n - 1; i++)
//             cout << p << " ";
//         for (int a = p + 1; a <= n; a++)
//             cout << a << " ";
//         cout << endl;
//     }
//     for (int j = n - 1; j >= 1; j--)
//     {
//         int p = n - j + 1;
//         int q = n - p;
//         for (int a = n; a > p; a--)
//             cout << a << " ";
//         for (int i = q; i < n; i++)
//             cout << p << " ";
//         for (int i = q; i < n - 1; i++)
//             cout << p << " ";
//         for (int a = p + 1; a <= n; a++)
//             cout << a << " ";
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long int
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;
signed main()
{
    int n, k, c;
    cin >> n>> k;
    int arr[n];
    fl(i, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    fl(i, n)
    {
        if (arr[i] > k)
        {
            cout << n - i;
            return 0;
        }
    }
    cout<<0;

    cout << c;

    //  int t;
    //  cin >> t;
    //  while(t--)
    //  {
    //  }
    return 0;
}