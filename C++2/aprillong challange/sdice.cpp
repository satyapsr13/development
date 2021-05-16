// // // https://www.codechef.com/APRIL21C/problems/SDICE
// #include <bits/stdc++.h>
// using namespace std;
// int sum(int a)
// {
//     int s = 0;
//     while (a--)
//     {
//         s = s + (6 - a);
//     }
//     return s;
// }

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n, n1, n2, ans;
//         cin >> n;
//         n1 = n % 4;
//         n2 = n / 4;
//         if (n == 1 || n1 == 1)
//         {
//             if (n > 8)
//             {
//                 // cout << "\t" << (n1 * (n2 - 1) * 4 * sum(2))
//                 //  << "\t" << sum(5) << "\t" << ((sum(2) + (3 * sum(3))));
//                 ans = (n1 * (n2 - 1) * 4 * sum(2)) + sum(5) + ((sum(2) + (3 * sum(3))));
//             }
//             else
//             {
//                 // cout<<"\t"<<(n2 * ((3 * sum(3)) + sum(2)))<<"\t"<<sum(5);
//                 ans = (n2 * ((3 * sum(3)) + sum(2))) + sum(5);
//             }
//         }
//         if (n == 2 || n1 == 2)
//         {
//             if (n > 8)
//             {
//                 // cout << "\t" << ((n1 - 1) * (n2 - 1) * 4 * sum(2)) << "\t" << (2 * sum(4)) << "\t" << ((2 * sum(2)) + (2 * sum(3)));
//                 ans = ((n1 - 1) * (n2 - 1) * 4 * sum(2)) + (2 * sum(4)) + ((2 * sum(2)) + (2 * sum(3)));
//             }
//             else
//             {
//                 // cout << "\t" << ((n / 6) * (2 * (sum(3) + sum(2)))) << "\t" << (2 * sum(4));
//                 ans = ((n / 6) * (2 * (sum(3) + sum(2)) + (2 * sum(4)))) + (2 * sum(4));
//             }
//         }
//         if (n == 3 || n1 == 3)
//         {
//             if (n > 8)
//             {
//                 // cout << "\t" << ((n1 - 2) * (n2 - 1) * 4 * sum(2)) << "\t" << ((2 * sum(3)) + (sum(2))) << "\t" << (sum(3) + (3 * sum(2)));
//                 ans = ((n1 - 2) * (n2 - 1) * 4 * sum(2)) + ((2 * sum(3)) + (sum(2))) + (sum(3) + (3 * sum(2)));
//             }
//             else
//             {
//                 // cout << "\t" << (n / 7 * (sum(3) + (3 * sum(2)))) << "\t" << (sum(2) + (2 * sum(3)));
//                 ans = (n / 7 * (sum(3) + (3 * sum(2)))) + (sum(2) + (2 * sum(3)));
//             }
//         }
//         if (n == 4 || n1 == 0)
//         {
//             if (n > 8)
//             {
//                 // cout<<"\t"<<((n2 - 1) * 4 * sum(2))<<"\t"<< (4 * sum(3))<<"\t"<<(4 * sum(2));
//                 ans = ((n2 - 1) * 4 * sum(2)) + (4 * sum(3)) + (4 * sum(2));
//             }
//             else
//             {
//                 // cout<<"\t"<<((n / 8) * 4 * sum(2))<<"\t"<<(4 * sum(3));
//                 ans = ((n / 8) * 4 * sum(2)) + (4 * sum(3));
//             }
//         }
//         cout
//             << ans << endl;
//     }
//     return 0;
// }

// // // https://www.codechef.com/APRIL21C/problems/SDICE
// // #include <bits/stdc++.h>
// // using namespace std;
// // int sum(int a)
// // {
// //     int s = 0;
// //     while (a--)
// //     {
// //         s = s + (6 - a);
// //     }
// //     return s;
// // }

// // int main(int argc, char const *argv[])
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         long long int n, n1, n2, ans;
// //         cin >> n;
// //         n1 = n % 4;
// //         n2 = n / 4;
// //         if (n == 1 || n1 == 1)
// //         {
// //             if (n > 8)
// //             {
// //                 ans = (n1 * (n2 - 1) * 4 * sum(2)) + sum(5) + ((sum(2) + (3 * sum(3))));
// //             }
// //             else
// //             {
// //                 ans = (n2 * ((3 * sum(3)) + sum(2))) + sum(5);
// //             }
// //         }
// //         if (n == 2 || n1 == 2)
// //         {
// //             if (n > 8)
// //             {
// //                 ans = ((n1 - 1) * (n2 - 1) * 4 * sum(2)) + (2 * sum(4)) + ((2 * sum(4)) + (2 * sum(3)));
// //             }
// //             else
// //             {
// //                 ans = ((n / 6) * (2 * (sum(3) + sum(2)) + (2 * sum(4)))) + (2 * sum(4));
// //             }
// //         }
// //         if (n == 3 || n1 == 3)
// //         {
// //             if (n > 8)
// //             {
// //                 ans = ((n1 - 2) * (n2 - 1) * 4 * sum(2)) + ((2 * sum(3)) + (sum(2))) + (sum(3) + (3 * sum(2)));
// //             }
// //             else
// //             {
// //                 ans = (n/7*(sum(3)+(3*sum(2)))) + (sum(3) + (2 * sum(4)));
// //             }
// //         }
// //         if (n == 4 || n1 == 0)
// //         {
// //             if (n > 8)
// //             {
// //                 ans = ((n2 - 1) * 4 * sum(2)) + (4 * sum(3)) + (4 * sum(2));
// //             }
// //             else
// //             {
// //                 ans = ((n/8) * 4 * sum(2)) + (4 * sum(3));
// //             }
// //         }
// //         cout << ans<<endl;
// //     }
// //     return 0;
// // }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test_case;
    cin >> test_case;
    while (test_case--)
    {
        long long int n,s = 0;
        cin >> n;
        int r = n % 4;
        s = (n / 4) * 44;
        if (n >= 4)
        {
            if (r == 0)
                s = s + 16;
            if (r == 1)
                s = s + 32;
            if (r == 2)
                s = s + 44;
            if (r == 3)
                s = s + 55;
            cout << s << endl;
        }
        else
        {
            int result;
            if (r == 1)
                result = 20;
            if (r == 2)
                result = 36;
            if (r == 3)
                result = 51;
            cout << result << endl;
        }
    }
    return 0;
}
