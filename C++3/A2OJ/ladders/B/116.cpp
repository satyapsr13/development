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
    int m;
    cin >> n >> m;
    char chutiya[n+1][m+1];
    memset(chutiya, 0, sizeof(chutiya));
    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < m + 1; ++j)
        {
            cin >> chutiya[i][j];
        }
    }

    for (int i = 1; i < n+1; ++i)
    {
        for (int j = 1; j < m+1; ++j)
        {
            if (chutiya[i][j] == 'W')
            {
                // cout << "|||||||||||||";
                // db(i);
                // db(j);
                // db(ans);
                if (chutiya[i][j + 1] == 'P')
                {
                    // db(chutiya[i][j - 1]);
                    // // ans++;
                    // db(i);
                    // db(j);
                    chutiya[i][j + 1] = '.';
                    ans++;
                   continue;
                    /* code */
                }
                if (chutiya[i][j - 1] == 'P')
                {
                    chutiya[i][j - 1] = '.';
                    ans++;
                // cout << "-------------\n";
                //     db(ans);
                    continue;
                    /* code */
                }
                if (chutiya[i- 1][j ] == 'P')
                {
                    chutiya[i- 1][j ] = '.';
                    ans++;
                   

                    continue;
                    /* code */
                }
                if (chutiya[i + 1][j] == 'P')
                {
                   
                    chutiya[i + 1][j] = '.';
                    ans++;
                   continue;
                }
            }
        }
                // db(ans);
    }
        cout << ans;
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