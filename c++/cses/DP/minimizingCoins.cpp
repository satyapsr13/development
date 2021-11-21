
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
// int mark[101][1000001] = {0};
// int countMe(int n, vector<int> v, int target, int ans)
// {
//     // db(target);
//     if (target == 0)
//     {
//         return ans;
//     }
//     if (n == 0)
//     {
//         return INT_MAX;
//     }
//     if (mark[n][target-v[n]] != 0)
//     {
//         return mark[n][target];
//     }

//     if (v[n] <= target)
//     {
//         return mark[n][target] = min(countMe(n, v, target - v[n], ans + 1), countMe(n - 1, v, target, ans));
//     }
//     else
//     {

//         return mark[n][target] = countMe(n - 1, v, target, ans);
//     }
// }
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n >> k;
//     vector<int> v(n + 1);
//     v.push_back(0);
//     for (int i = 1, x; i <= n; ++i)
//     {
//         cin >> v[i];
//     }
//     int t = countMe(n, v, k, 0);
//     if (t == INT_MAX)
//     {
//         cout << "-1"
//              << "\n";
//         return;
//     }
//     cout << t << "\n";
//     return;
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     solved_by_satyapsr13();
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
    cin >> n >> k;
    vector<int> v(n + 1);
    vector<int> dp(k + 1, 1e9);
    for (int i = 1, x; i <= n; ++i)
    {
        cin >> v[i];
    }

    dp[0] = 0;
    for (int i = 1; i <= k; ++i)
    {

        for (int j = 1; j <= n; ++j)
        {
            if (i >= v[j])
            {
                dp[i] = min(dp[i], dp[i - v[j]] + 1);
            }
        }
    }
    cout << (dp[k ] != 1000000000 ? dp[k ] : -1);
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}