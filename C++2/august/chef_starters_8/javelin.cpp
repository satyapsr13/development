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
    // cin >> n;
    int ans1 = 0;
    int ans2 = 0;
    int x;
    for (int i = 0; i < 10; ++i)
    {
        cin >> x;
        if (i & 1)
        {
            x & 1 ? ans2++ :count++;
            continue;
            /* code */
        }
        x & 1 ? ans1++ : count++;
        // ans1++;
    }
    if (ans1 == ans2)
    {
        cout << 0;
        cout << "\n";
        return;
        /* code */
    }
    else if (ans1 > ans2)
    {
        cout << 1;
        cout << "\n";
        return;
    }
    cout << 2;
    cout << "\n";
    return;
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