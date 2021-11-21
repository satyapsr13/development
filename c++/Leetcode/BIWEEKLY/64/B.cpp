

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
#define v2 vector<vector<int>>
// int ans = 0;

bool cmp(vector<int> a, vector<int> b)
{
    return a[1] < b[1];
}

int findAns(vector<vector<int>> v, int ans, int n, int start)
{
    if (n == 1)
    {
        return ans;
    }
    if (v[n][1] <= start)
    {
        return max(findAns(v, ans, n - 1, v[n][0]), findAns(v, ans + v[n][2], n - 1, v[n][0]));
    }
    else
    {
        return findAns(v, ans, n - 2, v[n][0]);
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<vector<int>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back({a - 1, b, c});
    }

    v.push_back({INT_MAX, INT_MAX, INT_MAX});
    sort(v.begin(), v.end(), cmp);

    for (auto it : v)
    {
        // cout << it<<" ";
        for (auto it1 : it)
        {
            cout << it1 << " ";
        }
        cout << "\n";
    }
    cout << findAns(v, 0, n -1, INT_MAX);
    return 0;
}