//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl '\n'
#define db(x) cout << "\n" \
                   << #x << "  " << x << "\n"
using namespace std;
void solved_by_satyapsr13()
{
    string s, k,ans="NO";
    cin >> s >> k;
    bool l = 1;
    for (int i = 0; i < k.size()-s.size(); ++i)
    {
        if (k[i] == s[0])
        {

            for (int j = 0; j < s.size(); ++j)
            {
                if (s[j] != k[j + i])
                {
                    cout << j << i;
                    break;

                    /* code */
                }
                if (j==s.size()-1)
                {
                    ans = "YES";
                    break;
                    l = 0;
                    /* code */
                }
                
            }
        }
        if (l==0)
        {
            break;
            /* cbreode */
        }
        
    }
    cout << ans<<"\n";
    // l == 0 ? cout << "YES\n" : cout << "NO\n";
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