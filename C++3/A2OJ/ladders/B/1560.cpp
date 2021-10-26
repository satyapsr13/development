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
    int a , b , c;
    cin >> a >> b >> c;
    int total = abs(b - a) * 2;
    if (c > total | b > total | a > total | abs(b - a) == 1)
    {
        cout << -1;
        cout << "\n";
        return;
        /* code */
    }

    if (c <= total / 2)
    {
        ans = total/2 + c;
        cout << ans;
        cout << "\n";
        return;
        /* code */
    }
    else
    {
        ans = c - (total / 2);
        cout << ans;
        cout << "\n";
        return;
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