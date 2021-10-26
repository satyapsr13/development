////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

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
    cin >> n >> k;
    int x = 0;
    int target = n % 4;
    if (target == 1)
    {
        x = n-1;
        /* code */
    }
    else if (target == 0)
    {
        x = 0;
    }
    else if (target = 2)
    {
        x = 1;
    }
    else
    {
        x = n;
    }
    db(x);
    db(k);
    if (x == k)
    {
        cout << n;
        cout << "\n";
        return;
        /* code */
    }
    else if ((x ^ k) != n)
    {
        db((x ^ k));
        cout << n + 1;
        cout << "\n";
        return;
        /* code */
    }
    else
    {
        cout << n + 2;
        cout << "\n";
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