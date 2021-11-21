//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
signed main()
{
    int i = 8 >> 2;
    int j = 1 << 5;
    db(~i);
    db(~j);
    cout << bitset<70>(~8);
    cout <<"\n" ;
    
    cout << bitset<30>(8);

    return 0;
}