// https://codeforces.com/contest/227/problem/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
double cp(int a1, int a2, int b1, int b2, int c1, int c2)
{
    return (((c2 - b2) * (b1 - a1)) - ((c1 - b1) * (b2 - a2)));
}
int main()
{
    double a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    double ans = (((c2 - b2) * (b1 - a1)) - ((c1 - b1) * (b2 - a2)));
    if (ans == 0)
        cout << "TOWARDS";
    if (ans > 0)
    {
        cout << "LEFT";
        /* code */
    }
    if (ans < 0)
    {
        cout << "RIGHT";
        /* code */
    }

    return 0;
}