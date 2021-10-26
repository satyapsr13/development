
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout < < < < #x < < < < x <<
using namespace std;
void solve()
{
    int n;
    read1(n);
    vector<string> s;
    string p;

    for (int i = 0; i < n; ++i)
    {
        cin >> p;
        s.push_back(p);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << s[i]<<" \n";
    }

    // bool b = 0;
    // for (int i = 0; i < n; ++i)
    // {
    //      b = 0;

    //     for (int j = 0; j < s[i].size(); ++j)
    //     {
    //         if (((s[i][j]) >= 'a' || (s[i][j]) <='o') || ((s[i][j]) >= 'N' || (s[i][j]) <= 'Z'))
    //         {
                
    //         }
    //         else
    //         {
    //             b = 1;
    //             cout << "NO"
    //                  << "\n";
    //             break;
    //         }
            
        
        
              
    //     }
    //     if (b==1)
    //     {
    //         break;
    //         /* code */
    //     }
    // }

    // if (!b)
    // {

    //     cout << "YES"
    //          << "\n";
    //     /* code */
    // }
}
signed main()
{

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}