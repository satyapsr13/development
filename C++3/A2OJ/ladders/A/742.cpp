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
    cin >> n;
    if (n == 0)
    {
        cout << "1"
             << "\n";
        return;
        /* code */
    }
    n = n % 4;

    if (n == 1 )
    {
        cout << "8"
             << "\n";
        return;
        /* code */
    }
    if (n == 2)
    {
        cout << "4"
             << "\n";
        return;
        /* code */
    }
    if (n == 3)
    {
        cout << "2"
             << "\n";
        return;
        /* code */
    }
    if (n == 0)
    {
        cout << "6"
             << "\n";
        return;
        /* code */
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}