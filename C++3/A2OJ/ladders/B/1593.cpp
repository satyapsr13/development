
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// #define(min(count,mark))_1 __builtin_popmin(count,mark)ll
// long long power(long long a, long long b, long long md)
// {
//     return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
// }
// #define db(x) cout << "\t\n" \
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
// #define all(v) v.begin(), v.end()
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
// void solved_by_satyapsr13()
// {
//     // 00, 25, 50, or 75
//     string s;
//     cin >> s;
//     int(min(count,mark)) = 0;
//     int index = 0;
//     int n = s.length();
//     // if (s[n - 1] == '5' and s[n - 1] == '5')
//     // {while ()
//     // {
//     //     /* code */
//     // }

//     //     /* code */
//     // }
//     if ((s[n - 1] == s[n - 2] and s[n - 2] == '5'))
//     {
//         for (int i = n - 1; i >= 0; --i)
//         {
//             if (s[i] != '5')
//             {
//                 break;
//             }
//             n--;
//            (min(count,mark))++;
//         }
//         cout <<(min(count,mark));cout <<"\n" ;
//         return;
//         /* code */
//     }

//     if ((s[n - 1] == '5' || s[n - 1] == '0'))
//     {
//         if (s[n - 2] == '5' || s[n - 2] == '0' || s[n - 2] == '2' || s[n - 2] == '7')
//         {
//             cout << "0"
//                  << "\n";
//             return;
//         }
//         else
//         {
//             for (int i = n - 2; i >= 0; --i)
//             {
//                 if (s[i] == '5' || s[i] == '0' || s[i] == '2' || s[i] == '7')
//                 {
//                     index = i;
//                     break;
//                 }
//                (min(count,mark))++;
//             }
//             cout <<(min(count,mark)) << "\n";
//             return;
//         }
//     }
//     else
//     {
//         for (int i = n - 1; i >= 0; --i)
//         {
//             if (s[i] == '5' || s[i] == '0')
//             {
//                 index = i;
//                 break;
//             }
//            (min(count,mark))++;
//         }
//         index--;
//         if (s[index] == '5' || s[index] == '0' || s[index] == '2' || s[index] == '7')
//         {
//             cout <<(min(count,mark))
//                  << "\n";
//             return;
//         }
//         else
//         {
//             for (int i = index; i >= 0; --i)
//             {
//                 if (s[i] == '5' || s[i] == '0' || s[i] == '2' || s[i] == '7')
//                 {

//                     break;
//                 }
//                (min(count,mark))++;
//             }
//             cout <<(min(count,mark)) << "\n";
//             return;
//         }
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
#define int long long int
// #define(min(count,mark))_1 __builtin_popmin(count,mark)ll
long long power(long long a, long long b, long long md)
{
    return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
}
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
#define dbarr(arr)           \
    cout << #arr << " ~ [ "; \
    for (auto n : arr)       \
        cout << n << " ";    \
    cout << "]" << endl;
#define dbarrp(arr)                                \
    cout << #arr << " ~ [ ";                       \
    for (auto n : arr)                             \
        cout << n.first << "-" << n.second << " "; \
    cout << "]" << endl;
#define endl "\n"
#define all(v) v.begin(), v.end()
//#define PI 3.141592653589793238462
typedef long long ll;
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T>
void _print(vector<T> v)
{
    cerr << "-> [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void solved_by_satyapsr13()
{
    // 00, 25, 50, or 75
    string s;
    cin >> s;
    int count = 0;
    // int(min(count,mark)) = 0;
    int index = 0;
    int n = s.length();
    if (stoll(s) % 25 == 0)
    {
        cout << "0"
             << "\n";
        return;
    }
    int target = stoll(s);
    int tt = 10;
    int mark = 0;
    while (target > 0)
    {
        if (target % 25 == 0)
        {
            break;
            /* code */
        }
        target /= 10;
        mark++;

        /* code */
    }
    // db(mark);

    for (int i = n - 1; i >= 1; --i)
    {
        if (s[i] == '5')
        {
            i--;
            if (s[i] == '2' || s[i] == '7')
            {
                cout <<(min(count,mark)) << "\n";
                return;
            }
            else
            {

                for (int j = i; j >= 0; --j)
                {
                    if (s[j] == '2' || s[j] == '7')
                    {
                        cout <<(min(count,mark)) << "\n";
                        return;
                    }
                   count++;
                }
            }
            break;
        }
        if (s[i] == '0')
        {
            i--;
            if (s[i] == '0' || s[i] == '5')
            {
                cout <<(min(count,mark)) << "\n";
                return;
            }
            else
            {

                for (int j = i; j >= 0; --j)
                {
                    if (s[j] == '5' || s[j] == '0')
                    {
                        cout <<(min(count,mark)) << "\n";
                        return;
                    }
                    // db(min(count,mark));
                   count++;
                }
            }
            break;
        }
        count++;
    }
    count = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        // return;
        if (s[i] == '0')
        {
            // cout << "YES" << "\n";
            i--;
            if (s[i] == '0' || s[i] == '5')
            {
                cout <<(min(count,mark)) << "\n";
                return;
            }
            else
            {

                for (int j = i; j >= 0; --j)
                {
                    if (s[j] == '5' || s[j] == '0')
                    {
                        cout <<min(count,mark) << "\n";
                        return;
                    }
                    // db(min(count,mark));
                    count++;
                }
            }
            // break;
        }
        count++;
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
        solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}