// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, p = 0;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) > 1)
        {
            p++;
        }
    }
    cout << p;
    return 0;
}
