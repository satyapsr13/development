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
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    vector<string> s;
    map<string, string> mp;
    string sp1;
    string sp2;
    for (int i = 0; i < k; ++i)
    {
        cin >> sp1;
        cin >> sp2;
        if (sp1.size() <= sp2.size())
        {
            mp[sp2] = sp1;
            mp[sp1] = sp1;
            /* code */
        }
        else
        {
            mp[sp1] = sp2;
            mp[sp2] = sp2;

            /* code */
        }
    }
    vector<string> s2;

    for (int i = 0; i < n; ++i)
    {
        cin >> sp1;
        s2.push_back(sp1);
    }

    for (int i = 0; i < n; ++i)
    {
        s2[i] = mp[s2[i]];
    }
    for (auto it : s2)
    {
        cout << it << " ";
    }
    cout << "\n";
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