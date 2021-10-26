//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl 'n'

using namespace std;
void solved_by_satyapsr13()
{
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    int pp;

    for (int i = 0;i<3*n; ++i)
    {
        cin >> s;
        cin >> pp;

        mp[s] += pp;
    }
    vector<int> v;

    for (auto it : mp)
    {
        v.push_back(it.second);
    }

    sort(v.begin(), v.end());
    for (auto it : v)
    {
        // v.push_back(it.second());
        cout << it << " ";
    }
    cout << "\n";
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