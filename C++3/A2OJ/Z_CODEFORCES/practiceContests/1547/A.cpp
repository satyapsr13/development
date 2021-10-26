//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"   
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"

using namespace std;
 void solved_by_satyapsr13()
{
    int a1, a2;
    cin >> a1 >> a2;
    int b1, b2;
    cin >> b1 >> b2;
    int f1, f2;
    cin >> f1 >> f2;
    int dis = sqrt(pow((b1 - a1), 2) + pow((b2 - a2), 2));
    cout << dis;
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