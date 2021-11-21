
#include <bits/stdc++.h>
using namespace std;
// #define int long long int
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
int dp[5001][5001] = {0};
// int find(string s, string p, int n, int m, int ans)
// {
//     if (n < 0 || m < 0)
//     {
//         return 0;
//     }
//     if (dp[n][m] != -1)
//     {
//         return dp[n][m];
//     }

//     if (s[n] == p[m])
//     {
//         return dp[n][m] = 1 + find(s, p, n - 1, m - 1, ans + 1);
//     }
//     else
//     {
//         return dp[n][m] = max(find(s, p, n - 1, m, ans), find(s, p, n, m - 1, ans));
//     }
//     return ans;
// }

void solved_by_satyapsr13()
{

    string s;
    string s1 = "1";

    cin >> s;
    s = s1 + s;
    string p;
    cin >> p;
    p = s1 + p;
    int n = s.size();
    int m = p.size();
    // db(dp[4][4]);
    // db(n);
    for (int i = 1; i <= m; ++i)
    {
        if (s[0]==p[0])
        {

            dp[1][i] = i-1;
            dp[i][1] = i-1;
        }else
        {
            dp[i][1] = i;
            dp[1][i] = i;
        }
    }

    for (int i = 2; i <= n; ++i)
    {

        // return;
        for (int j = 2; j <= m; ++j)
        {
            // dp[i][j] = 0;
            if (s[i] == p[j])
            {

                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1});
            }
        }
    }

    // for (int i = 0; i <= n; ++i)
    // {
    //     for (int j = 0; j <= m; ++j)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // int lcs = dp[n][m];
    // n--;
    // m--;
    // if (s.size() <= p.size())
    // {
    //     cout << m - lcs;
    // }
    // else
    // {
    //     cout << n - m + (m - lcs);
    // }
    cout << dp[n][m]+1;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(dp, 0, sizeof(dp));
    solved_by_satyapsr13();

    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}