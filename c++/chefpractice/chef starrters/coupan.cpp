#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int d, c, a[3], b[3], sum1 = 0, sum2 = 0;
        cin >> d >> c;
        for (int i = 0; i < 3; ++i)
        {
            cin >> a[i];
            sum1 += a[i];
        }

        for (int i = 0; i < 3; ++i)
        {
            cin >> b[i];
            sum2 += b[i];
        }
        if (sum1 >= 150)
        {
        }

        if (sum1 + c > sum2 + (2 * d))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
