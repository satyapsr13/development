#include <bits/stdc++.h>
using namespace std;
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = (int)(s.size());

        int count[26] = {};

        for (int i = 0; i < (int)s.size(); i++)
        {
            count[s[i] - 'a']++;
        }
 for (auto it:count)
    {
        cout << it;
    }
        int odd = 0;

        for (int i = 0; i < 26; i++)
        {
            if (count[i] % 2 != 0)
            {
                odd++;
            }
        }
        db(odd);
        int total = n - odd;
        total /= 2;

        if (total < odd)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }

    return 0;
}