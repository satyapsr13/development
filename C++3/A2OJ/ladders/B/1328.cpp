
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
// vector<string> permu;
// void find(string s, int l, int r)
// {
//     debug(s);
//     if (l >= r)
//     {

//         permu.push_back(s);
//         // return;
//     }
//     else
//     {

//         for (int i = l; i < r; ++i)
//         {
//             swap(s[i], s[l]);
//             find(s, l + 1, r);
//         }
//     }
//     return;
// }
// void solved_by_satyapsr13()
// {
//     int n, k;
//     cin >> n >> k;

//     int ans = 0;
//     int i = n - 1;
    
//     while (i>=0)
//     {
//         int j = n;
//         while (j > i)
//         {
//             ans++;
//             if (ans == k)
//             {

//                 for (int k = 1; k <= n; ++k)
//                 {
//                     if (i == k || k == j)
//                     {
//                         cout << "b";
//                     }
//                     else
//                     {
//                         cout << "a";
//                     }
//                 }
//                 cout << "\n";
//                 return;
//             }
//             j--;
//         }
//         i--;
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
//     // cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
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
vector<string> permu;
void find(string s, int l, int r)
{
    debug(s);
    if (l >= r)
    {

        permu.push_back(s);
        
    }
    else
    {

        for (int i = l; i < r; ++i)
        {
            swap(s[i], s[l]);
            find(s, l + 1, r);
        }
    }
    return;
}
void solved_by_satyapsr13()                           
{                           
    int n, k;                           
    cin >> n >> k;                           
                           
    int ans = 0;                           
    int i = sqrt(2*k)-1;                           
    // while (i*(i+1)<=2*k)                           
    // {                           
    //     i++;                           
                                   
    // }                           
    db(i);                           
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
    // cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    regex rg;
    return 0;
}



