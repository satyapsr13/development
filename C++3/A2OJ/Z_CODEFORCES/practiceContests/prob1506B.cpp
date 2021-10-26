//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl '\n'

using namespace std;
int count = 0;
int recrusion(string s, int f, int l, int k)
{

    for (int i = f; i < l; ++i)
    {
        if (s[i] == '.')
        {
            f = i;
            break;
            /* code */
        }
    }
    for (int i = l-1; i >f; ++i)
    {
        if (s[i] == '*')
        {
            l = i;
            break;
            /* code */
        }
    }

    if (l - f <= k)
    {
        return count;
    }
    else
    {
        recrusion(s, f, l, k);
    }
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    

    cout << recursion(s, 0, s.size(), k) << endl;
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
        count = 0;
        solved_by_satyapsr13();
    }
    return 0;
}