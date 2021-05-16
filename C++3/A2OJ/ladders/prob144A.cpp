// https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, lg = 0, sm = 0;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (a[lg] < a[i])
        {
            lg = i;
        }
        if (a[sm] >= a[i])
        {
            sm = i;
        }
    }
    sm > lg ? cout << (t - 1 - sm) + lg << "\t" : cout << (t - 2 - sm) + lg;
    // if (sm > lg)
    // {
    //     cout << (t - 1 - sm) + lg << "\t";
    // }
    // else
    // {
    //     // cout << lg << "\t";
    //     // cout << sm << "\t";
    //     // cout << (t - 2 - sm) << "\t";
    //     cout << (t - 2 - sm) + lg;
    // }

    // cout<<sm<<lg;

    return 0;
}
