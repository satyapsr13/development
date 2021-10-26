//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
#define int long long int
#define endl "\n"   
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"

using namespace std;
int mod_mul(int a, int b, int m)
{
    return (a % m * b % m + m) % m;
}

int mod_expo(int a, int b, int m)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

 void solved_by_satyapsr13()
{
    cout << mod_expo(2, 4, 100);
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