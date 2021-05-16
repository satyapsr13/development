// https://www.codechef.com/MAY21C/problems/SOLBLTY
#include <bits/stdc++.h>
// const double pi = 3.1415926535897932384626433832795;
// #define fl(i, n) for (int i = 0; i < n; i++)
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
        int x, a, b;
        cin >> x >> a >> b;
        cout << (a + ((100 - x)*b)) * 10 << "\n";
    }

    return 0;
}
