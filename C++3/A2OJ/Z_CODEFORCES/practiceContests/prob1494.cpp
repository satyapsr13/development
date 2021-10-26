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
    string s, t, p;
    string ans = "YES";

    cin >> s >> t >> p;
    s = s + p;
    vector<int> arrp = {0};
    vector<int> arrs = {0};
    // cout << p[p[0] - 'a'];
    // cout << p[0] - 'a';
    // cout << p[0];
    // cout << endl;

    for (int i = 0; i < t.size(); ++i)
    {
        ++arrp[t[i] - 'a'];
    }
    for (int i = 0; i < 27; ++i)
    {
        cout<<arrp[t[i] - 'a'];
        // cout<<arrp[i]<<"  ";
    }
    // for (int i = 0; i < s.size(); ++i)
    // {
    //     ++arrs[s[i] - 'a'];
    // }
    // for (int i = 0; i < t.size(); ++i)
    // {
    //     if (arrs[s[i] - 'a'] < arrp[t[i] - 'a'])
    //     {
    //         cout <<i<< s[i];
    //         ans = "NO";
    //         break;
    //     }
    // }

    // for (int i = 0; i < p.size(); ++i)
    // {
    //     cout << arrs[p[i] - 'a'] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < p.size(); ++i)
    // {
    //     cout << arrp[p[i] - 'a'] << " ";
    // }
    cout << endl;

    // for (int i = 0; i < n; ++i)
    // {
    //  cout<<   
    // }
    // cout << ans << "\n";
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