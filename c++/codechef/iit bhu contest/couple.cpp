// https://www.codechef.com/SPYB21C/problems/VCOUPLE
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        int b[n], g[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> g[i];
        }
        sort(b, b + n);
        sort(g, g + n);
        // ans = min(b[n - 1]+ g[0],g[n - 1]+ b[0]);
        // ans=
        if (b[n - 1] > g[n - 1])
        {
            ans = b[n - 1] + g[0];
        }
        else
        {
            ans = g[n - 1] + b[0];
        }
        cout << ans << endl;
    }
    return 0;
}

