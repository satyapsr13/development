// https://codeforces.com/contest/580/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, c = 0, b = 0;
    cin >> t;
    int a[t];

    for (int i = 0; i < t; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < t - 1; ++i)
    {
        if (a[i] <= a[i + 1])
        {
            b++;
            if (i == t - 2)
                c = b;
        }
        else
        {
            if (c < b)
            {
                c = b;
            }
            b = 0;
        }
    }
    cout << c + 1;
    return 0;
}
