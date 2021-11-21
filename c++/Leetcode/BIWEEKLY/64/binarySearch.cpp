//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
signed main()
{

    vector<vector<int>> v;
    v.push_back({1, 2, 3});//0
    v.push_back({11, 21, 31});//1
    v.push_back({11, 21, 231});//2
    v.push_back({211, 221, 231});//3
// _ _ _
 
    vector<int> v1;
    v1.push_back(11);
    v1.push_back(22);
    v1.push_back(32);
    int nex = upper_bound(v.begin(), v.end(), v1) - v.begin();
    cout << nex;cout <<"\n" ;
    
    for (auto it : v1)
    {
        cout << it << " ";
    }
    return 0;
}