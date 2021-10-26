////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
int cmp(pii a, pii b)
{
    return a.second < b.second;
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.second << " ";
    }
    vpii v;
    for (auto it : mp)
    {

        v.push_back(make_pair(it.first, it.second));
    }

    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        cout << it.second << " ";
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solved_by_satyapsr13();

    return 0;
}