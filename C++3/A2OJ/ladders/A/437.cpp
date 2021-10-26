//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    vector<string> s;
    int size[4];
    string sp;
    for (int i = 0; i < 4; ++i)
    {
        cin >> sp;
        s.push_back(sp);
        size[i] = s[i].size() - 2;
    }

    sort(size, size + 4);
    if (2 * size[0] <= size[1] and 2 * size[2] > size[3])
    {
        for (int i = 0; i < 4; ++i)
        {
            // db(s[i].size());
            if (s[i].size() == size[0] + 2)
            {
                // cout << "YES" << endl;
                cout << s[i][0];
                cout << "\n";
            }
        }
    }
    else if (2 * size[2] <= size[3] and 2 * size[0] > size[1])
    {
        /* code */
        for (int i = 0; i < 4; ++i)
        {
            if (s[i].size() == size[3] + 2)
            {
                cout << s[i][0];
                cout << "\n";
            }
        }
    }
    else
    {
        cout << 'C';
        cout << "\n";
    }

    // string s = 'C';
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}