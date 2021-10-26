
#include <bits/stdc++.h>
#define int long long int

using namespace std;
void solved()
{
    int n, k, ans = 0, l, count = 0;
    int a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)

    {
        if (s[i] == '1')
        {
            ans += b;
            /* code */
            continue;
        }
        ans += a;
    }
    cout << ans;
    cout << "\n";
}
signed main()
{

   
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved();
    }
    return 0;
}