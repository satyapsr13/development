#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x = 1000, ans = 0;
        string s;
        cin >> a >> b >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ans += min(a, b * x);
                x = 0;
            }
            else
                x++;
        }

        cout << ans << endl;
    }
}
