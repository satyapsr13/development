//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    string s;
    cin >> s;
    int size = s.size();
    int j = 0;
    for (; s[j] > 'a'; ++j)
    {
        if (s[j] < s[j + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    j++;
    for (; j < size-1; ++j)
    {
        if (s[j] > s[j + 1])
        {
            // db(s[j]);
            cout << "NO" << endl;
            return;
        }
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); ++i)
    {
        if ('a' + i != s[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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