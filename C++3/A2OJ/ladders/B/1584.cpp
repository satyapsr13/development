
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// #define count_1 __builtin_popcountll
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
// #define valueupto(x, y) fixed << setprecision(x) << y
// //#define PI 3.141592653589793238462
// typedef long long ll;
// #ifndef ONLINE_JUDGE
// #define debug(x)                          \
//     cerr << __LINE__ << " " << #x << " "; \
//     _print(x);                            \
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
// //const int d4x[4] = {-1, 0, 1, 0}, d4y[4] = {0, 1, 0, -1};
// //const int d8x[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
// ////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     int m;
//     cin >> n >> m;
//     if (n == 1 || m == 1)
//     {
//         if (n == 1)
//         {
//             cout << ceil(m * 1.0 / 3);
//             cout << "\n";
//             return;
//         }
//         else
//         {
//             cout << ceil(n * 1.0 / 3);
//             cout << "\n";
//             return;
//         }
//     }
//     if (n % 3 == 0)
//     {
//         cout << n / 3 * m;
//         cout << "\n";
//         return;
//     }
//     if (m % 3 == 0)
//     {
//         cout << m / 3 * n;
//         cout << "\n";
//         return;
//     }
//     // cout << min((m / 3) * (m%3==2?n:n/2) + n, (n / 3) * m + m);

//     // cout << ((m / 3) * (m%3==2?n:n/2) + n);
//     if (n < m)
//     {
//         if (m % 3 == 1)
//         {
//             cout << m / 3 * n + (n / 2);
//             cout << "\n";
//             return;
//         }
//         else
//         {
//             cout << m / 3 * n + n  ;
//             cout << "\n";
//             return;
//         }
//     }else
//     {
//         swap(n, m);
//         if (m % 3 == 1)
//         {
//             cout << m / 3 * n + (n / 2);
//             cout << "\n";
//             return;
//         }
//         else
//         {
//             cout << m / 3 * n + n;
//             cout << "\n";
//             return;
//         }
//     }

//     cout << "\n";
//     return;
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
#define count_1 __builtin_popcountll
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
#define valueupto(x, y) fixed << setprecision(x) << y
//#define PI 3.141592653589793238462
typedef long long ll;
#ifndef ONLINE_JUDGE
#define debug(x)                          \
    cerr << __LINE__ << " " << #x << " "; \
    _print(x);                            \
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
//const int d4x[4] = {-1, 0, 1, 0}, d4y[4] = {0, 1, 0, -1};
//const int d8x[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int m;
    cin >> n ;
    vector<int> v1(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v1[i];
    }

    vector<int> v2(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; ++i)
    {
        if (abs(v1[i] - v2[i]) >= 2)
        {
            cout << "NO"
                 << "\n";
            return;
        }
    }
    cout << "YES"
         << "\n";
    return;
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