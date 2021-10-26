// https://codeforces.com/problemset/problem/352/A
#include <bits/stdc++.h>
const double pi = 3.1415926535897932384626433832795;
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, l;
    int x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 5)
        {
            x++;
            /* code */
        }
    }
    l = n - x;
    // cout<<x;
    if (x == n)
    {
        cout << -1;
        return 0;
        /* code */
    }

    x = x / 9;
    x = 9 * x;
    // while (x--)
    // {
    //     cout << "5";
    //     /* code */
    // }
    for (int i = 0; i < x; i++)
    {
        cout << "5";
    }
    if (x >= 1)
    {
        while (l--)
        {
            cout << 0;
            /* code */
        }

        /* code */
    }
    else
    {

        cout << 0; /* code */
    }

    return 0;
}
