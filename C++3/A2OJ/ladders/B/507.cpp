//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
using namespace std;
void solved_by_satyapsr13()
{
    int n, k1, k2, k3, k4, ans = 0, count = 0, sum = 0;
    int r, x, y, xx, yy;
    cin >> r >> x >> y >> xx >> yy;
    int d = (x - xx) * (x - xx) + (y - yy) * (y - yy);
    int dd = sqrt(1.0L * d);
    // cout<<ceil(d/)
    db(dd);
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
