//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9+7
#define space ' '
#define endl "\n"   

using namespace std;
 void solved_by_satyapsr13()
{  int d,x,y,z,k,ans=0,count=0,sum=0;
   cin>>d>>x>>y>>z;
   cout << max(7 * x, ((d * y) + ((7 - d) * z)))<<endl;
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