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
    string s;
    cin >> s;
    int size = s.size();
    bool dp[4];
    memset(dp, 0, sizeof(dp));
    if (size < 10 || isdigit(s[0]) || isdigit(s[size - 1]))
    {
        cout << "NO" << endl;
    }
    else
    {

        for (int i = 0; i < size; ++i)
        {
            if (islower(s[i]))
            {
                dp[0] = true;
            }
            if (!dp[1])
            {
                if (isupper(s[i]) and (i > 0 and i < size - 1))
                {
                    dp[1] = true;
                }
            }
            if (isdigit(s[i]))
            {
                dp[2] = true;
            }
            if (!dp[3])
            {
                /* code */

                if ((s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?') and (i > 0 and i < size - 1))
                {
                    dp[3] = true;
                }
            }
        }

        for (int i = 0; i < 4; ++i)
        {
            if (dp[i] == 0)
            {
                cout << "NO" << endl;

                return;
            }
        }
        cout << "YES" << endl;
    }
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