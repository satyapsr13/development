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
    int n;
    cin >> n;
    string s;
    cin >> s; //s.find('^');//! int num = stoll(s);
    // int n = s.n();
    if (n==1 and s[0]=='R')
    {
        cout << "R";cout <<"\n" ;
        return;
        /* code */
    }if (n==1)
    {
        cout << "B";
        cout << "\n";
        return;
        /* code */
    }
    
    
    if (s[0] == 'B')
    {
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == '?')
            {
                if (i & 1)
                {
                    cout << "B";
                }
                else
                {
                    cout << "R";
                }

                /* code */
            }
            else
            {
                cout << s[i];
            }
        }
        cout << "\n";

        return;
        /* code */
    }
    else if (s[0] == 'R')
    {
        /* code */ for (int i = 1; i < n; ++i)
        {
            if (s[i] == '?')
            {
                if (i & 1)
                {
                    cout << "R";
                }
                else
                {
                    cout << "B";
                }

                /* code */
            }
            else
            {
                cout << s[i];
            }
        }
        cout << "\n";

        return;
        /* code */
    }
    else
    { /* code */
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '?')
            {
                if (i & 1)
                {
                    cout << "R";
                }
                else
                {
                    cout << "B";
                }

                /* code */
            }else
            {
                cout << s[i];
            }
            
        }
        cout << "\n";

        return;
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