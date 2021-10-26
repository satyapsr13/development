
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// #define count_1 __builtin_popcountll
// long long power(long long a, long long b, long long md)
// {
//     return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
// }
// #define db(x) cerr << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// #define db2(x, y) cerr << "\t\n" \
//                        << #x << " " << x << "\t" << #y << " " << y << "\n"
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
// // #define endl "\n"
// #define all(v) v.begin(), v.end()
// #define valueupto(x, y) fixed << setprecision(x) << y
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
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n;
//     string s;
//     cin >> s;
//     // cin.getline(s,1000001);
//     // cin.ignore();
//     vector<int> sdfaasdfasfdasdf;

//     sdfaasdfasfdasdf.push_back(0);
//     for (int i = 0; i < n; ++i)
//     {
//         if (s[i] == '*')
//         {
//             sdfaasdfasfdasdf.push_back(i + 1);
//         }
//     }

//     int star = sdfaasdfasfdasdf.size();

//     for (int i = 0; i < star; ++i)
//     {
//         ans = 0;
//         for (int j = i, k = 0; k < star - 1; k++, ++j)
//         {
//             // db2(sdfaasdfasfdasdf[k+1], (j + 1));
//             ans += abs(sdfaasdfasfdasdf[k + 1] - (j + 1));
//             // db(ans);
//         }
//         // db(ans);
//         mn = min(mn, ans);
//     }
//     cout << mn;
//     cout << endl;
// }
// signed main()
// {

//     int Test_Cases;
//     cin >> Test_Cases;
//     while (Test_Cases--)
//         solved_by_satyapsr13();
//     // cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (auto x : s)
        cnt += (x == '*' ? 1 : 0);
    int pos = -1;
    int cur = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            cur++;
            if (cur == cnt / 2)
                pos = i;
        }
    }
    long long ans = 0;
    cur = pos - cnt / 2;
    for (int i = 0; i < n; i++)
        if (s[i] == '*')
        {
            ans += abs(cur - i);
            cur++;
        }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        solve();
    }
}