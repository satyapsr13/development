// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int i = 0;
int LCS(string s, string p, int n, int m)
{
    if (n<=0||m<=0)
    {
        return 0;
    }
    if (s[n - 1] == p[m - 1])
    {
        cerr << i++<<endl;
        return 1 + LCS(s, p, n - 1, m - 1);
         
    }
    else
    {
        return max(LCS(s, p, n - 1, m), LCS(s, p, n, m - 1));
    }
}
signed main()
{

    string s;
    string p;
    cin >> s;
    cin >> p;
    cout << LCS(s, p, s.length(), p.length());
    return 0;
}