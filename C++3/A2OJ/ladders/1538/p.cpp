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
    string s = "abbcccd";
    vector<int> v(s.size()) ;

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *it;
    // }
    for (int i = 0; i < s.size(); ++i)
    {
        ++v[s[i] - 'a'];
    }
     
    // for ( auto i =0; i <7;i++)
    // {
    //     cout << v[i];
    // }
   
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