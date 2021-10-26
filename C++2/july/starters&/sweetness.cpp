//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
// https : //www.codechef.com/START7C/problems/MAXSWT
#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
// #define
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

        using namespace std;
bool comp(pii p1, pii p2)
{
    if (p1.first == p2.first)
    {
        /* code */
        return p2.second < p1.second;
    }

    return p1.second < p2.second;
}
bool Cmpp(pii v1, pii v2)
{
    return v1.second == v2.second ? v1.first < v2.first : v2.second < v1.second;
}
struct Cmp
{
    bool operator()(const pii &v1, const pii &v2) const
    {
        return v1.second == v2.second ? v1.first < v2.first : v2.second < v1.second;
    }
};
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    // vector<pii> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first;
    }
    // int t;
    for (int i = 0; i < n; ++i)
    {
        // cin >> t;
    }
    // for (int i = 0; i < n; i++)
    //     cin >> v[i].first;
    for (int i = 0; i < n; i++)
        cin >> v[i].second;

    sort(v.begin(), v.end());
    
    multiset<pii, Cmp> mset;
    int ptr = 0;

    for (int i = n - 1; i >= 0; --i)
    {
        while (ptr < i and v[ptr].first + v[i].first <= k)
        {
            mset.insert(v[ptr]);
            ptr++;
            /* code */
        }
        for (auto it : mset)
        {
            cout << it.first << " " << it.second;
            cout << "\n";
        }

        auto it = mset.find(v[i]);
        if (i <= ptr - 1 and it != mset.end())
        {
            mset.erase(it);
            
        }
        if (v[i].first <= k)
        {
            ans = max(ans, v[i].second + (mset.empty() ? 0 : (*mset.begin()).second));
            
        }
    }
        cout << ans;
    cout << "\n";

    // cout <<"YES"<<endl;
    // return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << "YES" << endl;
    // return;
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}