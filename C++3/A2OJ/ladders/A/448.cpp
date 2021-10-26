//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;

bool check(int n)
{
    int s = log10(n)+1;
    // n = n / 10;
    while (s--)
    {
        int digit = n % 10;
        if (digit == 8)
        {
            return true;
            /* code */
        }
        n /= 10;
    }
    return false;
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    if (n >= 0)
    {
        /* code */

        for (int i = 1; i < 11; ++i)
        {
            if (check((n + i)))
            {
                cout << i;
                break;
                /* code */
            }
        }
    }else
    {
        for (int i = 1; i < 11; ++i)
        {
            if (check(-(n + i)))
            {
                cout << i;
                break;
                /* code */
            }
        }
    }

    cout << endl;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}