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
void solved_by_satyapsr13()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    char b, c, a = s[0];
    if (n == 1)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            cout << a;
        }
        cout << "\n";
        return;
        /* code */
    }
    else
    {
        int i = 0;
        for (; i < s.size(); ++i)
        {
            if (a != s[i])
            {
                b = s[i];
                cout << b;
                break;
                /* code */
            }
            else
            {
                cout << a;
            }
        }
        // cout <<"YES"<<endl;
        // return;
        if (b > a and i < s.size())
        {
            for (; i < s.size(); ++i)
            {
                cout << a;
            }
            /* code */
        }
        else if (i < s.size())
        {
            for (; i < s.size() ; ++i)
            {
                cout << b;
            }
        }
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