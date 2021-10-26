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
void solved_by_satyapsr13(int o)
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    //    cin>>n;
    string s;
    cin >> s;
    vector<char> v;
    int tt = s.size();
    bool arr[tt];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < tt; ++i)
    {
        v.push_back(s[i]);
    }
    for (int i = 0; i < tt - 1; ++i)
    {
        //    v.push_back(s[i]);

        for (int j = i + 1; j < tt; ++j)
        {
            if (s[i] != s[j] and !(arr[j]))
            {
                swap(s[i], s[j]);
                arr[j] = true;
                /* code */
            }
        }
    }

    for (int i = 0; i < tt; ++i)
    {
        if (v[i] == s[i])
        {
            cout << "Case #" << o << ": ";
            cout << "IMPOSSIBLE"
                 << "\n";
            return;
            /* code */
        }
    }
    cout << "Case #" << o << ": ";
    cout << s;
    cout << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    int t = 1;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13(t++);
    }
    return 0;
}