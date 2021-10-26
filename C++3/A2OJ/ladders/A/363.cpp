//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"   
#define google(n) cout << "Case #1: "<<n
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"

using namespace std;
void printdigit(int n){
switch (n)
{
case 0:
    cout << "O-|-OOOO\n";
    /* code */
    break;
case 1:
    cout << "O-|O-OOO\n";
    /* code */
    break;
case 2:
    cout << "O-|OO-OO\n";
    /* code */
    break;

default:
    break;
}
}
void solved_by_satyapsr13()
{  int n,k,ans=0,count=0,sum=0;
   cin>>n;

   printdigit(n);
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases=1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}