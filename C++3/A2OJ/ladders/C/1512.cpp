
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

class SOLVE
{
public:
    void solved_by_satyapsr13()
    {
        int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
        cin >> l >> k;
        string s;
        cin >> s;
        n = s.size();
        {
            if (n == 1 and s[0] == '?')
            { // for n==1 no problem with this
                if (l > 0)
                {

                    cout << 0;
                }
                else if (k > 0)
                {
                    cout << 1;
                }

                cout << "\n";
                return;
                /* code */
            }
        }
        int count1 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                count++;
                /* code */
            }
            else if (s[i] == '1')
            {
                count1++;
            }
        }

        // cout << "\n";

        if (count > l || count1 > k)
        {
            cout << "-1"
                 << "\n";
            return;
            /* code */
        }
        else
        {
            l -= count;
            k -= count1;
        }
        cerr << l;
        cerr << "\n";
        cerr << k;
        cerr << "\n";

        for (int i = 0; i < n; ++i)
        {
            if ((s[i] != '?' and s[n - 1 - i] == '?') || (s[i] == '?' and s[n - 1 - i] != '?'))
            {
                if (s[i] == '?')
                {
                    if (s[n - 1 - i] == '1' and k > 0)
                    {
                        s[i] = '1';
                        k--;
                    }
                    else if (l > 0 and s[n - 1 - i] == '1')
                    {
                        s[i] = '0';
                        l--;
                    }
                }
                else
                {
                    if (s[i] == '1' and k > 0)
                    {
                        s[i] = '1';
                        k--;
                        /* code */
                    }
                    else if (l > 0  )
                    {
                        s[i] = '0';
                        l--;
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '?')
            {
                if (l > 1)
                {
                    s[i] = '0';
                    s[n - 1 - i] = '0';
                    l -= 2;
                }
                else if (k > 1)
                {

                    s[i] = '1';
                    s[n - 1 - i] = '1';
                    k -= 2;
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (s[i] != s[n - 1 - i] || s[i] == '?' || s[n - 1 - i] == '?')
            {
                cout << "-1"
                     << "\n";
                return;
            }
        }

        cout << s;
        cout << "\n";
    }
};

signed main()
{
    SOLVE s1;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
        s1.solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}