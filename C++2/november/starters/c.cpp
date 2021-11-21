
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
int count1(string s, int n)
{
    if (n == 0)
    {
        return s[n] - '0';
    }
    return (s[n] == '1') + count1(s, n - 1);
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n >> k;
    vector<pair<string, int>> v;
    string s;

    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        v.push_back({s, count1(s, n - 1)});
    }
    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b)
         { return a.second < b.second; });
    s = "";
    int arr[100004] = {0};
    arr[0] = v[0].first[0] - '0';
    int i = 1;
    for (auto it : v)
    {
        // cout << it.first << "\n";
        // debug(it.first);
        // s += it.first;
        // cerr << "\n";

        for (int j = 0; j < k; ++i, j++)
        {
            if (it.first[j] == '1')
            {
                arr[i] = arr[i - 1] + 1;
            }
            else
            {
                arr[i] = arr[i - 1];
                ans += arr[i];
            }
        }
    }
    // db(i);

     

    // for (int i = 0; i < n * k; ++i)
    // {
    //     if (s[i] == '0')
    //     {
    //         ans += arr[i];
    //     }
    // }
    cout << ans;
    cout << "\n";
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