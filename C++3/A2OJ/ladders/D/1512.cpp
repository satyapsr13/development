
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
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    vector<int> v(n + 2);

    for (int i = 0, x; i < n + 2; ++i)
    {
        cin >> v[i];
    }
    sum = accumulate(v.begin(), v.end(), 0LL);

    sort(v.begin(), v.end());
    int sum2 = sum - v[n + 1];

    {
        if (sum2 - v[n] == v[n])
        {

            for (int i = 0; i < n; ++i)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
            return;
            /* code */
        }
    }
    {

        for (int i = 0; i < n + 1; ++i)
        {
            if (sum2 - v[i] == v[n + 1])
            {

                for (int j = 0; j < n + 1; ++j)
                {
                    // debug(v);
                    if (j == i)
                    {
                        continue;
                        /* code */
                    }

                    cout << v[j] << " ";
                }
                cout << "\n";
                return;
                /* code */
            }
        }
    }

    // int target = 0;
    // bool l = 1;
    // if (n == 1)
    // {
    //     if (v[1] == v[0])
    //     {
    //         cout << v[0] << "\n";
    //         return;
    //         /* code */
    //     }
    //     cout << "-1"
    //          << "\n";
    //     return;
    // }
    // if (sum2 - v[n] == v[n])
    // {
    //     for (int i = 0; i < n; ++i)
    //     {
    //         cout << v[i] << " ";
    //     }
    //     cout << "\n";
    //     return;
    //     /* code */
    // }

    // for (int i = 0; i < n + 1; ++i)
    // {
    //     if (sum2 - v[i] == v[n + 1])
    //     {

    //         for (auto it : v)
    //         {
    //             if ((it == v[i] and l) || it == v[n + 1])
    //             {
    //                 l = 0;
    //                 continue;
    //             }

    //             cout << it << " ";
    //         }
    //         cout << "\n";
    //         return;
    //     }
    // }
    cout << "-1"
         << "\n";
    return;
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



//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
using namespace std;
const int mx = 1e5 + 5;
vector<vector<int>> tree(mx);
vector<bool> vis(mx);
void dfs(int node)
{
    vis[node] = true;
    cout << "node \t" << node;
    cout << "\n";
    for (int neigh : tree[node])
    {
        if (!vis[neigh])
        {
            dfs(neigh);
            /* code */
        }
    }
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int node;
    cin >> node;

    for (int i = 0; i < node - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    for (int i = 1; i < node + 1; ++i)
    {
        if (!vis[i])
        {
            dfs(i);
            /* code */
        }
    }
    return 0;
}
