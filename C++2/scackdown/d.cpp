
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
////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
// vector<bool> vis(mx);
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {

        const int mx = 3e5 + 1;
        vector<vector<int>> graph(mx);

        int node;
        cin >> node;
        int edges;
        cin >> edges;
        for (int i = 1; i <= edges; ++i)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int mainans = 0;

        vector<pair<int, int>> ans;

        for (int i = 1; i <= node; ++i)
        {
            ans.push_back(make_pair(graph[i].size(), i));
        }
        // db(ans[4].first);

        sort(ans.begin(), ans.end());
        // for (auto it : ans)
        // {
        //     cerr << it.first << " ";
        //     cerr << it.second << " ";
        //     cerr << "\n";
        // }
        for (auto it : graph)
        {
            // cout << it<<" ";
            debug(it);
            int countme = 0;
            int j = 1;
            for (int i = 0; i < it.size(); ++i)
            {
                // cerr << it[i];

                if (it[i] < j)
                {

                    countme++;
                    cerr << countme << "\n";
                }
            }
            j++;
            db(countme);
            mainans = max(mainans, countme);
            cerr << "\n";
        }
        cerr << "\n";
        mainans = max(mainans, ans[0].first);

        cout << mainans;
        cout << "\n";
        for (int i = 1; i <= node; ++i)
        {
            ans[i - 1].first = node - i + 1;
        }
        sort(ans.begin(), ans.end(), [](pair<int, int> a, pair<int, int> b)
             { return a.second < b.second; });

        for (int i = 0; i < node; ++i)
        {
            cout << ans[i].first << " ";
        }
        cout << "\n";
        // cerr << "\n";
        // cerr << "\n";
    }
    //  solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}