//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007LL
#define space ' '
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    n %= 1000000007;
    int odd = (n - (n / 2));
    int even = ((n / 2));
    cout
        << (even * 3) % 1000000007 + (odd * 2) % 1000000007 << endl;
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
    // cout << lcm(21, 10);
    return 0;
}