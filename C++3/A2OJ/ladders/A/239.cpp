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
    int n, k, ans = 0, y, count = 0, sum = 0;
    cin >> y >> k >> n;
    int p = y + k;
    p -= (p % k);
    if (p > n)
    {
        cout << -1;
        /* code */
    }
    else
    {

        // cout << p;

        for (int i = p; i < n + 1; i += k)
        {
            cout << i - y << " ";
        }
    }
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