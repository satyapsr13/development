
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
// struct data
// {
//     int hei;
//     int d1;
//     int d2;
//     data(int _hei, int _d1, int _d2) /* data */
//     {
//         hei = _hei;
//         d2 = _d2;
//         d1 = _d1;
//     }
// };

// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     int d;
//     cin >> d >> n >> k;
//     vector<data> vd;
//     int x, y, z;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> x >> y >> z;
//         vd.push_back(data(x, y, z));
//     }

//     sort(vd.begin(), vd.end(), [](data a, data b)
//          { return a.hei > b.hei; });

//     for (int i = 0; i < n - k; ++i)
//     {
//         int ll = k;
//         ans = vd[i].hei;
//         for (int j = j + 1; j < n; ++j)
//         {
//             if (vd[i].d1> and k > 0)
//             {
//                 ans += vd[j].hei;

//                 k--;
//             }
//         }
//         count = max(count, ans);
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
//     cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define F_OR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__) \
(__VA_ARGS__)
#define EACH(x, a) for (auto &x : a)

template <class T>
bool umin(T &a, const T &b)
{
    return b < a ? a = b, 1 : 0;
}
template <class T>
bool umax(T &a, const T &b)
{
    return a < b ? a = b, 1 : 0;
}

ll FIRSTTRUE(function<bool(ll)> f, ll lb, ll rb)
{
    while (lb < rb)
    {
        ll mb = (lb + rb) / 2;
        f(mb) ? rb = mb : lb = mb + 1;
    }
    return lb;
}
ll LASTTRUE(function<bool(ll)> f, ll lb, ll rb)
{
    while (lb < rb)
    {
        ll mb = (lb + rb + 1) / 2;
        f(mb) ? lb = mb : rb = mb - 1;
    }
    return lb;
}

template <class A>
void read(vt<A> &v);
template <class A, size_t S>
void read(ar<A, S> &a);
template <class T>
void read(T &x)
{
    cin >> x;
}
void read(double &d)
{
    string t;
    read(t);
    d = stod(t);
}
void read(long double &d)
{
    string t;
    read(t);
    d = stold(t);
}
template <class H, class... T>
void read(H &h, T &...t)
{
    read(h);
    read(t...);
}
template <class A>
void read(vt<A> &x)
{
    EACH(a, x)
    read(a);
}
template <class A, size_t S>
void read(array<A, S> &x)
{
    EACH(a, x)
    read(a);
}

string to_string(char c)
{
    return string(1, c);
}
string to_string(bool b)
{
    return b ? "true" : "false";
}
string to_string(const char *s)
{
    return string(s);
}
string to_string(string s)
{
    return s;
}
string to_string(vt<bool> v)
{
    string res;
    FOR(sz(v))
    res += char('0' + v[i]);
    return res;
}

template <size_t S>
string to_string(bitset<S> b)
{
    string res;
    FOR(S)
    res += char('0' + b[i]);
    return res;
}
template <class T>
string to_string(T v)
{
    bool f = 1;
    string res;
    EACH(x, v)
    {
        if (!f)
            res += ' ';
        f = 0;
        res += to_string(x);
    }
    return res;
}

template <class A>
void write(A x)
{
    cout << to_string(x);
}
template <class H, class... T>
void write(const H &h, const T &...t)
{
    write(h);
    write(t...);
}
void print()
{
    write("\n");
}
template <class H, class... T>
void print(const H &h, const T &...t)
{
    write(h);
    if (sizeof...(t))
        write(' ');
    print(t...);
}

void DBG()
{
    cerr << "]" << endl;
}
template <class H, class... T>
void DBG(H h, T... t)
{
    cerr << to_string(h);
    if (sizeof...(t))
        cerr << ", ";
    DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

template <class T>
void offset(ll o, T &x)
{
    x += o;
}
template <class T>
void offset(ll o, vt<T> &x)
{
    EACH(a, x)
    offset(o, a);
}
template <class T, size_t S>
void offset(ll o, ar<T, S> &x)
{
    EACH(a, x)
    offset(o, a);
}

mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b)
{
    return uniform_int_distribution<ll>(a, b)(mt_rng);
}

template <class T, class U>
void vti(vt<T> &v, U x, size_t n)
{
    v = vt<T>(n, x);
}
template <class T, class U>
void vti(vt<T> &v, U x, size_t n, size_t m...)
{
    v = vt<T>(n);
    EACH(a, v)
    vti(a, x, m);
}

const int d4i[4] = {-1, 0, 1, 0}, d4j[4] = {0, 1, 0, -1};
const int d8i[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8] = {0, 1, 1, 1, 0, -1, -1, -1};

const int mxN = 3e5;
vt<int> ta[mxN], td[mxN];
vt<int> h;

void solve()
{
    int n, d, k;
    read(d, n, k);
    h = vt<int>(n);
    FOR(n)
    {
        int s, e;
        read(h[i], s, e);
        ta[s - 1].pb(i);
        td[e - 1].pb(i);
    }
    ll ans = 0, ss = 0;
    set<ar<int, 2>> s1, s2;
    FOR(d)
    {
        EACH(a, ta[i])
        {
            s1.insert({h[a], a});
            ss += h[a];
            if (sz(s1) > k)
            {
                auto it = s1.begin();
                ss -= (*it)[0];
                s2.insert(*it);
                s1.erase(it);
            }
        }
        ta[i].clear();
        umax(ans, ss);
        EACH(d, td[i])
        {
            if (s2.find({h[d], d}) != s2.end())
            {
                s2.erase({h[d], d});
            }
            else
            {
                s1.erase({h[d], d});
                ss -= h[d];
                if (sz(s2))
                {
                    auto it = --s2.end();
                    ss += (*it)[0];
                    s1.insert(*it);
                    s2.erase(it);
                }
            }
        }
        td[i].clear();
    }
    print(ans);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    read(t);
    FOR(t)
    {
        write("Case #", i + 1, ": ");
        solve();
    }
}