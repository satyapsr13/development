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
    int n, m;
    cin >> n >> m;

    vector<string> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; ++i)
    {

        for (int j = 1; j <= n; ++j)
        {
            if (v[i - 1][j - 1] == '-')
            {
                // cout << "B";
                cout << "-";
            }
            else  if (((i + j) & 1) and v[i - 1][j - 1] == '.')
            {
                cout << "B";
                /* code */
            }
            else
            {
                cout << "W";
            }
        }
        cout <<endl; 
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solved_by_satyapsr13();

    return 0;
}