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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    int index = sqrt(n);
    if (index * index == n)
    {
        cout << index << " " << 1;
        cout << "\n";
        return;
        /* code */
    }
    else
    {
        int mainaxis = index + 1;

        for (int i = 1; i < mainaxis; ++i)
        {
            if ((index * index) + i == n)
            {
                cout << i << " " << index + 1;
                cout << "\n";
                return;
                /* code */
            }
        }
        for (int i = 1; i < mainaxis; ++i)
        {
            if (((index + 1) * (index + 1)) - i == n)
            {
                cout << index + 1 << " " << i+1;
                cout << "\n";
                return;
                /* code */
            }
        }
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