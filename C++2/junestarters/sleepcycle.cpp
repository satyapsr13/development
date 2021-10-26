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
    int n, k, ans = 0, sum = 0;
    cin >> n >> k;
    int req = k, count = 0;

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
        {
            if (req <= 0)
            {
                break;
                /* code */
            }

            count++;
        }
        else
        {
            if (req <= 0)
            {
                break;
                /* code */
            }

            // req -= count;
            req = 2 * (k - count);
            count = 0;
        }
    }
    if (req <= 0)
    {
        cout <<req << "YES\n";
        /* code */
    }
    else
    {
        cout << req << "NO\n";
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