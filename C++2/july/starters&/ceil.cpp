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
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
//     int mx = INT_MIN;
//     for (int i = min(n, k); i <= max(n, k); ++i)
//     {
//         ans = ceil((k - i) * 1.0 / 2) + ceil((i - n) * 1.0 / 2);
//         mx = max(mx, ans);
//     // db(i);
//         cout << i<<"\t" << ans;
//     cout << "\n";
//     }
// cout <<"\n" ;
// cout <<"\n" ;
    if (n < k)
    {
        cout << n + k / 2;
        cout << "\n";
        return;
        /* code */
    }
    else if (n == k)
    {
        // cout << "-" << abs(n - k) / 2;
        cout << 0;
        cout << "\n";
        return;

        /* code */
    }
    int i = min(n, k) + 1;
    cout << ceil((k - i) * 1.0 / 2) + ceil((i - n) * 1.0 / 2);
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