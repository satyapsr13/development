#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int m, h;
        cin >> m >> h;
        int b;
        b = m / (pow(h, 2));
        if (b <= 18)
        {
            cout << 1<<"h\n";
        }
        if (b >= 19 and b<=24)
        {
            cout << 2<<"h\n";
        }
        if (b >= 25 and b<=29)
        {
            cout << 3<<"h\n";
        }
         if (b >= 30)
        {
            cout << 4<<"h\n";
        }

    }
    return 0;
}
