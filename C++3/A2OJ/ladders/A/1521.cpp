//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    if (k == 2)
    {

        cout << "YES"
             << "\n";
        cout << n << " " << k * n << " " << n + (k * n);
        cout << "\n";

        return;
        /* code */
    }
    if (k == 1)
    {

        cout << "YES"
             << "\n";
        cout << n << " " << 2 * n << " " << 3 * n;
        cout << "\n";

        return;
        /* code */
    }

    int tt = n * k;

    cout << "YES"
         << "\n";
    cout << n << " " << (k - 1) * n << " " << tt;
    cout << "\n";

    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solved_by_satyapsr13();
    }

    return 0;
}