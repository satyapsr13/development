//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>

#define db(x) cout<<__LINE__<<"->"<<" "<<#x<<"\t"<<x<<"\t\n"
using namespace std;
int findGcd(int a,int b){
   
    if (a==0)
    {
        return b;
    }
    return findGcd(b%a,  a);
}
 signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << findGcd( 1980, 1617);
    return 0;
}