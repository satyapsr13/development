
// https://www.codechef.com/MAY21C/problems/LKDNGOLF
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
        // bool l = 0;
        long long int n, x, k;
        cin >> n >> x >> k;
        if (x % k == 0 || (x % k == ((n + 1) % k)))
        {
            cout << "YES\n";
        }
        else
        {

            cout << "NO\n";
            /* code */
        }
    }

    return 0;
}