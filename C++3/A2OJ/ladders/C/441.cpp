
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
    int n, k, ans = 0, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int m;
    cin >> n >> m >> k;

    bool l = 0;

    vector<int> v;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = (!(i & 1) ? m : 1); (!(i & 1) ? (j >= 1) : (j <= m)); !(i & 1) ? --j : ++j)
        {
            v.push_back(i);
            v.push_back(j);
        }
    }
     
    int index;
    for (int i = 0; i < n * m; i += 4)
    {
        if (count >= k - 1)
        {
            if (count == k - 1)
            {
                cout << n * m - (2 * (k - 1)) << " ";
            }
            //    continue;
            index = i;
            break;
        }
        count++;
        cout << 2 << " " << v[i] << " " << v[i + 1] << " " << v[i + 2] << " " << v[i + 3];
        cout << endl;
    }
     

    for (int i = index ; i < 2 * n * m; ++i)
    {
        cout << v[i] << " ";
    }
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