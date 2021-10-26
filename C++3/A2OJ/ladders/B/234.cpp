//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
// #define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return b.first < a.first;
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n>>k;

    vector<pair<int, int>> v;
    int x;
    // int y;

    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.emplace_back(make_pair(x, i + 1));
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < k; ++i)
    {
        cout << v[i].second<<" ";
    }
}
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
}
