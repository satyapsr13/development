//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
// #include<touple>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"   
#define google(n) cout << "Case #1: "<<n
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"

using namespace std;
struct tuple
{
    int a = 0;
    int b = 0; /* data */
    int c = 0;
};

 void solved_by_satyapsr13()
{
    vector<tuple> tp;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
         tp[i].a;
        cin >> tp[i].b;
        cin >> tp[i].c;
    }
    for (int i = 0; i < n; ++i)
    {
        cout<< tp[i].a;
        cout<< tp[i].b;
        cout<< tp[i].c;
        cout <<"\n" ;
        
    }
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