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
    int w1, w2, x1, x2, m;
    cin >> w1 >> w2 >> x1 >> x2 >> m;
    int weid = w2 - w1;
    if (weid<x1 * m | weid> x2 * m)
    {
        cout << "0" << endl;
        return;
        /* code */
    }
    else
    {
        cout << "1" << endl;
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
