//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
int count1(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '1')
        {
            ans++;
        }
    }

    return ans;
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    vector<string> s(n);
    int arr[n];
    string p;

    for (int i = 0; i < n; ++i)
    {
        cin >> p;
        // s.push_back(p);
        arr[i] = count1(p);
    }
    // sort(arr,)

    sort(arr, arr + n);
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}