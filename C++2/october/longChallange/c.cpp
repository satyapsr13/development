
// // #include <iostream>
// // #include <cstdio>
// // #include <cstdlib>
// // #include <algorithm>
// // #include <cmath>
// // #include <vector>
// // #include <set>
// // #include <map>
// // #include <unordered_set>
// // #include <unordered_map>
// // #include <queue>
// // #include <ctime>
// // #include <cassert>
// // #include <complex>
// // #include <string>
// // #include <cstring>
// // #include <chrono>
// // #include <random>
// // #include <bitset>
// // #include <climits>
// // // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long int
// // #define count_1 __builtin_popcountll
// // #define db(x) cerr << "\t\n" \
// //                    << #x << "\t" << x << "\t\n"
// // #define dbarr(arr)           \
// //     cout << #arr << " ~ [ "; \
// //     for (auto n : arr)       \
// //         cout << n << " ";    \
// //     cout << "]" << endl;
// // #define dbarrp(arr)                                \
// //     cout << #arr << " ~ [ ";                       \
// //     for (auto n : arr)                             \
// //         cout << n.first << "-" << n.second << " "; \
// //     cout << "]" << endl;
// // #define endl "\n"
// // //#define PI 3.141592653589793238462
// // typedef long long ll;
// // #ifndef ONLINE_JUDGE
// // #define debug(x)       \
// //     cerr << #x << " "; \
// //     _print(x);         \
// //     cerr << endl;
// // #else
// // #define debug(x)
// // #endif

// // void _print(int t)
// // {
// //     cerr << t;
// // }
// // void _print(string t) { cerr << t; }
// // void _print(char t) { cerr << t; }
// // void _print(double t) { cerr << t; }

// // template <class T>
// // void _print(vector<T> v)
// // {
// //     cerr << "-> [ ";
// //     for (T i : v)
// //     {
// //         _print(i);
// //         cerr << " ";
// //     }
// //     cerr << "]";
// // }
// // ////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

// // bool isPresent(int n, int digit)
// // {
// //     // int count = 0;
// //     while (n > 0)
// //     {
// //         if ((n % 10) == digit)
// //         {

// //             // return;
// //             return true;
// //         }
// //         n /= 10;
// //     }
// //     return false;
// // }
// // void solved_by_satyapsr13()
// // {
// //     int n, ans = 0, l, count = 0, sum = 0, use_me = 0, mx = INT_MIN;
// //     int digit;
// //     cin >> n >> digit;
// //     int no_of_digits = log10(n) + 1;

// //     if (isPresent(n, digit) == 0)
// //     {
// //         cout << "0"
// //              << "\n";
// //         return;
// //     }
// //     else if (digit == 0)
// //     {
// //         int arr[9] = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111};
// //         use_me = ceil(pow(10, no_of_digits - 1));
// //         int count = 0;
// //         while (use_me != 0)
// //         {
// //             if ((n / use_me) % 10 == 0)
// //             {
// //                 break;
// //                 /* code */
// //             }
// //             count++;
// //             use_me /= 10;
// //             //db(use_me);

// //             /* code */
// //         }
// //         count++;
// //         db(count);
// //         use_me = ceil(pow(10, no_of_digits - count));
// //         use_me = (n / use_me) * use_me;
// //         use_me += arr[no_of_digits - count + 1];
// //         //db(use_me);
// //         cout << use_me - n;
// //         cout << "\n";
// //         return;
// //     }

// //     else
// //     {
// //         int arr[9] = {0, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
// //         // cout <<"YES"<<"\n";
// //         // return;
// //         use_me = ceil(pow(10, no_of_digits - 1));
// //         int count = 0;
// //         while (use_me != 0)
// //         {
// //             if ((n / use_me) % 10 == digit)
// //             {
// //                 break;
// //                 /* code */
// //             }
// //             count++;
// //             use_me /= 10;
// //             // //db(use_me);

// //             /* code */
// //         }
// //         count++;
// //         db(count);
// //         use_me = ceil(pow(10, no_of_digits - count));
// //         count = use_me;
// //         use_me = (n / use_me);
// //         use_me++;
// //         db(count);
// //         use_me *= count;
// //         // use_me += arr[no_of_digits - count + 1];
// //         //db(use_me);
// //         cout << use_me - n;
// //         cout << "\n";
// //         return;
// //         // int target = pow(10, no_of_digits);
// //         // int first_index = 0;
// //         // while (target != 0)
// //         // {

// //         //     if ((n / target) % 10 == digit)
// //         //     {
// //         //         break;
// //         //         /* code */
// //         //     }
// //         //     target /= 10;
// //         //     first_index++;
// //         // }

// //         // int pp = pow(10, no_of_digits - first_index + 1);
// //         // // debug(pp);
// //         // int minus_no = n % pp;
// //         // // int tt=pow(10,)
// //         // int finaldigit = (digit + 1) * (pp / 10);

// //         // cout << finaldigit - minus_no << "\n";
// //         // return;
// //         // debug(finaldigit);
// //         // // debug(int(pow(10, no_of_digits - first_index)));
// //         // cerr << first_index;
// //         // // cerr << ;
// //         // debug(minus_no);
// //     }
// // }
// // signed main()
// // {

// //     ios_base::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     cout.tie(nullptr);
// //     int Test_Cases;
// //     cin >> Test_Cases;
// //     while (Test_Cases--)
// //         solved_by_satyapsr13();
// //     cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
// //     return 0;
// // }

// #include <iostream>
// #include <cstdio>
// #include <cstdlib>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// #include <set>
// #include <map>
// #include <unordered_set>
// #include <unordered_map>
// #include <queue>
// #include <ctime>
// #include <cassert>
// #include <complex>
// #include <string>
// #include <cstring>
// #include <chrono>
// #include <random>
// #include <bitset>
// #include <climits>
// // #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// #define count_1 __builtin_popcountll
// #define db(x) cerr << "\t\n" \
//                    << #x << "\t" << x << "\t\n"
// #define dbarr(arr)           \
//     cout << #arr << " ~ [ "; \
//     for (auto n : arr)       \
//         cout << n << " ";    \
//     cout << "]" << endl;
// #define dbarrp(arr)                                \
//     cout << #arr << " ~ [ ";                       \
//     for (auto n : arr)                             \
//         cout << n.first << "-" << n.second << " "; \
//     cout << "]" << endl;
// #define endl "\n"
// //#define PI 3.141592653589793238462
// typedef long long ll;
// #ifndef ONLINE_JUDGE
// #define debug(x)       \
//     cerr << #x << " "; \
//     _print(x);         \
//     cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(int t)
// {
//     cerr << t;
// }
// void _print(string t) { cerr << t; }
// void _print(char t) { cerr << t; }
// void _print(double t) { cerr << t; }

// template <class T>
// void _print(vector<T> v)
// {
//     cerr << "-> [ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// ////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

// bool isPresent(int n, int digit)
// {
//     // int count = 0;
//     while (n > 0)
//     {
//         if ((n % 10) == digit)
//         {

//             // return;
//             return true;
//         }
//         n /= 10;
//     }
//     return false;
// }
// void solved_by_satyapsr13()
// {
//     int n, ans = 0, l, count = 0, sum = 0, use_me = 0, mx = INT_MIN;
//     int digit;
//     cin >> n >> digit;
//     int no_of_digits = log10(n) + 1;

//     if (isPresent(n, digit) == 0)
//     {
//         cout << "0"
//              << "\n";
//         return;
//     }

//     if (digit == 0)
//     {
//         int arr[9] = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111};
//         use_me = ceil(pow(10, no_of_digits - 1));
//         int count = 0;
//         while (use_me != 0)
//         {
//             if ((n / use_me) % 10 == 0)
//             {
//                 break;
//                 /* code */
//             }
//             count++;
//             use_me /= 10;
//             //db(use_me);

//             /* code */
//         }
//         count++;
//         db(count);
//         use_me = ceil(pow(10, no_of_digits - count));
//         use_me = (n / use_me) * use_me;
//         use_me += arr[no_of_digits - count + 1];
//         //db(use_me);
//         cout << use_me - n;
//         cout <<"\n" ;
        
//         cerr << use_me;
//         cout
//             << "\n";
//         return;
//     }

//     else
//     {
//         int arr[9] = {0, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
//         // cout <<"YES"<<"\n";
//         // return;
//         use_me = ceil(pow(10, no_of_digits - 1));
//         int count = 0;
//         while (use_me != 0)
//         {
//             if ((n / use_me) % 10 == digit)
//             {
//                 break;
//                 /* code */
//             }
//             count++;
//             use_me /= 10;
//             // //db(use_me);

//             /* code */
//         }
//         count++;
//         db(count);
//         use_me = ceil(pow(10, no_of_digits - count));
//         count = use_me;
//         use_me = (n / use_me);
//         use_me++;
//         db(count);
//         use_me *= count;
//         // use_me += arr[no_of_digits - count + 1];
//         //db(use_me);
//         cout << use_me - n;
//         cout << "\n";
//         return;
//     }
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int Test_Cases;
//     cin >> Test_Cases;
//     while (Test_Cases--)
//         solved_by_satyapsr13();
//     cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define sc ;
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ll long long
#define Radhe ios::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int main()
{
    tc
    {
        ll n;
        ll d;

        cin >> n;
        cin >> d;

        string str = to_string(n);
        ll len = str.length();

        if (d == 0)
        {
            int ind2 = len;

            for (int i = 0; i < len; i++)
            {
                if (str[i] == '0')
                {
                    str[i] = '1';
                    ind2 = i;
                    break;
                }
            }

            for (int j = ind2 + 1; j < len; j++)
            {
                str[j] = '1';
            }
        }
        else if (d == 9)
        {
            if (str[0] == '9')
            {
                for (int i = 0; i < len; i++)
                {
                    str[i] = '0';
                }
                str = "1" + str;
            }
            else
            {
                int ind = len;
                for (int i = 0; i < len; i++)
                {
                    if (str[i] == '9')
                    {

                        for (int k = i - 1; k >= 0; k--)
                        {
                            if (str[k] <= '7')
                            {
                                str[k]++;
                                ind = k;
                                goto cvv;
                            }
                        }

                        for (int i = 0; i < len; i++)
                        {
                            str[i] = '0';
                        }
                        str = "1" + str;

                        goto fvv;
                    }
                }

            cvv:;

                for (int j = ind + 1; j < len; j++)
                {
                    str[j] = '0';
                }

            fvv:;
            }
        }
        else
        {
            int i = 0;
            for (i = 0; i < len; i++)
            {
                if ((str[i] - 48) == d)
                {
                    str[i] = str[i] + 1;
                    break;
                }
            }

            for (int j = i + 1; j < len; j++)
            {
                str[j] = '0';
            }
        }

        ll nn = stoll(str);

        cout << nn - n << "\n";
    }
}