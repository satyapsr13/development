//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9+7
#define space ' '
#define endl 'n'   

using namespace std;
 void solved_by_satyapsr13()
{
     double a, b, x;
    // cout << 2.0 / 3;
    cin >> a >> b;
    x = a / b;
    if (x*b==a)
    {
        cout << "YES\n";
        /* code */
    }else
    {
        cout << "NO\n";
        
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