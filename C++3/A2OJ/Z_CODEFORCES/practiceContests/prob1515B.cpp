//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl 'n'

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, count = 0, sum = 0;
    string ans;
    cin >> n;
    if (n & 1)
    {
        ans = "NO";
        /* code */
    }
    else if(n/2 & 1 and n!=2)
    {
        ans = "NO";
    }else
    {
        ans = "YES";
    }
     cout << ans <<"\n";
    
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