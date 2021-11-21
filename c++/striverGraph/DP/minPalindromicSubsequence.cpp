//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>                                                  
                                                  
#define db(x) cout << __LINE__ << "->" \                                                  
                   << " " << #x << "\t" << x << "\t\n"                                                  
using namespace std;                                                 
                                                 
bool checkPalindrome(string s)                                                 
{                                                 
    string p = s;                                                 
    reverse(s.begin(), s.end());                                                 
    return s == p;                                                 
}                                                 
                                                 
signed main()

{
    string s;
    cin >> s;
    cout << checkPalindrome(s);

    return 0;
}