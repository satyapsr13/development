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
    int n, k, ans = 0, count = 1, sum = 0;
    cin >> n;

    vector<string> v(n);
    string s;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 1; i < n; ++i)
    {
        if (v[0] == v[i])
        {
            // db(i);
            count++;
            continue;
            /* code */
        }
        s = v[i];
    }
    // db(count);
    // db(n/2);
    if (count>n/2)
    {
        cout << v[0];
        /* code */
    }else
    {
        cout << s;
    }
    
    
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}