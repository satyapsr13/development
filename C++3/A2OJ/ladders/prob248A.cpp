// https://codeforces.com/problemset/problem/248/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, ans = 0;
    cin >> n;
    int l, r, a = 0, b = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> l >> r;
        if (l)
        {
            a++;
            /* code */
        }
        if (r)
        {
            b++;
            /* code */
        }

        /* code */
    }

    /* code */

    ans = min(a, n - a) + min(b, n - b);
    cout<<ans;

    return 0;
}
