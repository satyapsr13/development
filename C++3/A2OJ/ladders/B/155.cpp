//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;

int comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
        /* code */
    }
    return a.second > b.second;
}

void solved_by_satyapsr13()
{
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;

        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), comp);
   
    int sum =0;
    int i=0;
    int ans = 0;
    do
    {
        ans += v[i].first;
        sum += v[i].second;
        i++;
        /* code */
    } while (i<=sum and i<n );
    cout << ans;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}