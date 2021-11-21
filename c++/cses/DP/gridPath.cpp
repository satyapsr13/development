
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
#define db2(x, y) cout << "\t\n"          \
                       << #x << "\t" << x \
                       << " "             \
                       << #y << "\t" << y << "\t"
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
int mark[10002][10002];
int n;
void solved_by_satyapsr13()
{

    cin >> n;
    char arr[1002][1002];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> arr[i][j];
        }
    }
    // int mark[0][]

    // for (int i = 0; i < n; ++i)
    // {
    //     mark[i][0] = 1;
    //     mark[0][i] = 1;
    // }

    mark[1][0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (arr[i][j] == '.')
            {
                mark[i][j] = mark[i][j - 1] + mark[i - 1][j];
                mark[i][j] %= 1000000007;
            }
            else
            {
                mark[i][j] = 0;
            }
        }
    }

    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= n; ++j)
    //     {
    //         cout << mark[i][j];
    //     }
    //     cout << "\n";
    // }

    cout << mark[n][n];
}
signed main()
{

    solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}