//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl '\n'

using namespace std;
void solved_by_satyapsr13()
{
    int a, b, c, ans1,ans2 , count = 0, sum = 0;
    cin >> a >> b >> c;
    int m1 = pow(10, a-1);
    int m2 = pow(10, b-1);
    int n1 = pow(10, a ) - 1;
    int n2 = pow(10, b ) - 1;
    int m3 = pow(10, c -1) ;
    int n3 = pow(10, c) - 1;
    

    for (int i = m1; i <= n1; ++i)
    {

        for (int j = m2; j <= n2; ++j)
        {
            if (__gcd(i, j) >= m3 and __gcd(i, j) <= n3)
            {
                ans1 = i;
                ans2 = j;
                break;

                /* code */
            }
        }
        break;
    }
    cout << ans1 << " " << ans2 << endl;
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