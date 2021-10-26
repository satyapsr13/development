//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, m, ans = 0, count = 0, sum = 0;
    cin >> n >> m;
    vector<string> s;
    string sp;
    for (int i = 0; i < n; ++i)
    {
        cin >> sp;
        s.push_back(sp);
    }

    if (s[0][0] == '.')
    {
        // cout << "1YES" << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (((i + j) & 1) and s[i][j] == '.')
                {
                    ans++;

                    /* code */
                }
                if (!((i + j) & 1) and s[i][j] == '*')
                {
                    ans++;

                    /* code */
                }
            }
        }
    }else
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (!((i + j) & 1) and s[i][j] == '.')
                {
                    ans++;

                    /* code */
                }
                if (((i + j) & 1) and s[i][j] == '*')
                {
                    ans++;

                    /* code */
                }
            }
        }
    }

    cout << ans;
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