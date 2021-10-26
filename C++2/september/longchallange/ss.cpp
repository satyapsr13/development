////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int

using namespace std;
void solved_by_saty()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int p;
    cin >> n;
    cin >> p;
    int pp = 1;
    int target = 1;
    for (int i = 1; i <= n;)
    {

        for (int j = 0; j < 3; ++j)
        {
            p += (target)*pp;
            if (i == n)
            {
                cout << p;
                return;
            }
            i++;
        }

        target++;
        pp *= -1;
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solved_by_saty();

    return 0;
}