
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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int d, c, m;
    cin >> n >> d >> c >> m;
    string s;
    cin >> s;
    // int count=s.

    n = s.find_last_of('D') + 1;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'D')
        {
            count++;
        }
    }
    // db(n);

    for (int i = 0; i < n; ++i)
    {
        if (count == 0)
        {
            cout << "YES"
                  ;
            return;
        }
        if (d <= 0 || c < 0)
        {
            // cout << i;
            // db(d);
            // db(c);
            cout << "NO"
                  ;
            return;
        }
        if (s[i] == 'C')
        {
            c--;
        }
        else if (s[i] == 'D')
        {
            count--;
            d--;
            c += m;
        }
    }
    cout << "YES";
    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    int t = 0;
    cin >> Test_Cases;
    while (Test_Cases--)
    {

        cout << "Case #" << ++t << ": ";
        solved_by_satyapsr13();
        cout << "\n";
    }
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}