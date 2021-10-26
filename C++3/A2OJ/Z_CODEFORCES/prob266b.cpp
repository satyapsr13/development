// https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        /* code */

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                ++i;
            }

            /* code */
        }
        // cout << s<<endl;
    }
    cout << s;

    return 0;
}