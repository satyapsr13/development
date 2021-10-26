//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void binary(int n)
{
    int d = log2(n) + 1;

    for (int i = d - 1; i >= 0; --i)
    {
        int tt = pow(2, i);
        (n & tt) ? cout << 1 : cout << 0;
    }
}
void solved_by_satyapsr13()
{
    for (int i = 4; i < 8; ++i)
    {
        binary(i);
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    for (int i = 8; i < 16; ++i)
    {
        binary(i);
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    for (int i = 16; i < 32; ++i)
    {
        binary(i);
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