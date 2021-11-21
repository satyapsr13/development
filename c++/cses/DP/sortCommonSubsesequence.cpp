//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int find(string s, string p, int n, int m)
{
    if (n == -1 and m == -1)
    {
        return 0;
    }

    if (n == -1  )
    {
        return m+1;
    }

    if (  m == -1)
    {
        return n+1;
    }

    if (s[n] == p[m])
    {
        return 1 + find(s, p, n - 1, m - 1);
    }
    else
    {
        return min(find(s, p, n - 1, m), find(s, p, n, m - 1));
    }
}
signed main()
{
    string s;
    cin >> s;
    string p;
    cin >> p;
    cout << find(s, p, s.size() - 1, p.size() - 1);
    return 0;
}