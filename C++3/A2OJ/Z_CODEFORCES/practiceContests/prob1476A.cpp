//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl 'n'
1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int possible = int(n / k) + 1;
    if (n == 1)
    {
        cout << k << "\n";
        /* code */
    }
    else if (n < k)
    {
        cout << int(k / n) + 1 << "\n";
    }
    else if (n == k)
    {
        cout << 1 << "\n";
        /* code */
    }
    else
    {
        if (n % k == 0)
        {
            cout << 1 << "\n";
            // if (k == 1)
            // {

            //     /* code */
            // }
            // else
            // {

            //     cout << int(n / k) << "\n";
            // }

            /* code */
        }
        else
        {
            k = n + (k - (n % k));

            // cout << int(n / k) + 1 << "\n";
            cout << int(k / n) + 1 << "\n";
        }

        // cout <<  1 << "\n";
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