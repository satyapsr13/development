//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
// https : //codeforces.com/problemset/problem/361/A
#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

        using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < n; ++j)
        {
            if (i == j)
            {
                cout << k << " ";
                /* code */
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout <<endl; 
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}