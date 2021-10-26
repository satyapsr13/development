#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;

#define int long long int
#define count_1 __builtin_popcountll
long long power(long long a, long long b, long long md)
{
    return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
}
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
#define dbmp(mp)            \
    cout << #mp << " ~ [ "; \
    for (auto n : mp)       \
        cout << n << " ";   \
    cout << "]" << endl;
#define dbmpp(mp)                                  \
    cout << #mp << " ~ [ ";                        \
    for (auto n : mp)                              \
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
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n * 2);
    int i;
    for (i = 0; i < 2 * n; i++)
        cin >> a[i];

    ll cyc = (n % 2 == 0 ? 4 : 2 * n), pos = -1;

    for (i = 0; i < cyc; i++)
    {
        if (is_sorted(a.begin(), a.end()))
        {
            pos = i;
            break;
        }
        if (i % 2)
            for (int j = 0; j < n; j++)
                swap(a[j], a[n + j]);
        else
            for (int j = 0; j < n + n - 1; j += 2)
              {

              swap(a[j], a[j + 1]);
              debug(v);
              }  
    }
    cout << min(pos, cyc - pos);
}