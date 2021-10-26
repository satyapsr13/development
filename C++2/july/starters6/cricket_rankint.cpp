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
    int n1, k1, l1, n2, k2, l2, ans = 0, count = 0, sum = 0;
    cin >> n1 >> k1 >> l1;
    cin >> n2 >> k2 >> l2;
    int score1 = 0;
    int score2 = 0;
    if (n1 < n2)
    {
        score2++;
        /* code */
    }
    else
    {
        if (n1 > n2)
        {
            score1++;
            /* code */
        }
    }
    if (k1 > k2)
    {
        score1++;
        /* code */
    }
    else if (k1 < k2)
    {
        score2++;
        /* code */
    }
    if (l1 > l2)
    {
        score1++;
        /* code */
    }
    else if (l1 < l2)
    {
        score2++;
        /* code */
    }
    if (score1 < score2)
    {
        cout << "B" << endl;
        return;
        /* code */
    }
    else
    {
        cout << "A" << endl;
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