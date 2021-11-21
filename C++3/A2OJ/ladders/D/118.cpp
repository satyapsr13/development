
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
int a, b, c, d;
int dp[101][101][11][11];
int find(int n, int n1, int n2, int l, int r)
{

    if (n == 0)
    {
        return 1;
    }
    if (dp[n1][n2][l][r]!=-1)
    {
        return dp[n1][n2][l][r];
    }
    int f=0, h=0;
    if (n1 > 0 and l >0)
    {
        f = find(n - 1, n1 - 1, n2, l - 1, d) %   100000000;
        // dp[n1][n2][l][r] = f;
    }
    if (n2 > 0 and r >0 )
    {

        h = find(n - 1, n1, n2 - 1, c, r - 1) %   100000000;
        // dp[n1][n2][l][r] = h;
    }
    // int h1 = find(n - 1,0,0);
    return dp[n1][n2][l][r] = (f + h) %   100000000;
}
void solved_by_satyapsr13()
{
    cin >> a >> b >> c >> d;
    cout << find(a + b, a, b, c, d) %   100000000;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(dp, -1, sizeof(dp));

    solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}