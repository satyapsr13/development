
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
////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int q;
    cin >> n >> q;
    vector<int> v(n);
    unordered_map<int, int> mp;
    set<int> st; 
    for (int i = 0, x; i < n; ++i)
    {
        cin >> v[i];
        st.insert(v[i]);
        if (mp[v[i]] == 0)
        {
            mp[v[i]] = i + 1;
        }
    }
    int x;
     
    while (q--)
    {
        cin >> x;
        cout << mp[x] << " ";
       
        
        for (auto it : st)
        {
            if (mp[x] > mp[it])
            {
                // debug(mp[v[i]]);

                mp[it]++;
            }
        }

        mp[x] = 1;
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