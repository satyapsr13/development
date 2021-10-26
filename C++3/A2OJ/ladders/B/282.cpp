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
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    int a, b;

    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        vp.push_back(make_pair(a, b));
    }
    int ff = 0, ss = 0;
    string s = "";

    for (int i = 0; i < n; ++i)
    {
        ff += vp[i].first;
        if (ff - ss > 500)
        {
            ss += vp[i].second;
            /* code */
            s += 'G';
        ff -= vp[i].first;
        }else
        {
        s += 'A';
        }
    }
    // if (abs(ff-ss)>500)
    // {
    //     cout << -1;
    //     return;
    //     /* code */
    // }
    
    cout << s;
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