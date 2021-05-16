// https://codeforces.com/contest/1520/problem/A

#include <bits/stdc++.h>
// const double pi = 3.1415926535897932384626433832795;
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        // cout<<int('A');
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[65 + 26] = {0}, y = 0;
        for (int i = 0; i < s.length(); i++)
        {
            a[int(s[i])] = 1;
            if (s[i] != s[i + 1] and a[s[i + 1]] == 1)
            {
                y = 1;
                /* code */
            cout << "NO\n";
            }
        }
        if (y == 0)
        {
            cout << "YES\n";
            /* code */
        }
    }

    return 0;
}
