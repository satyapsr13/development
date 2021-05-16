// https://codeforces.com/contest/1520/problem/B
#include <bits/stdc++.h>
const double pi = 3.1415926535897932384626433832795;
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
        long long int t = 11, n, count = 0;
        cin >> n;
        // count = n;
        if (n < 11)
        {
            count = n;
            /* code */
        }
        else
        {
            while (t <= n)
            {
                count++;
                t += t;
                /* code */
            }
            count+=9;
        }
        cout << count << "\n";
    }

    return 0;
}