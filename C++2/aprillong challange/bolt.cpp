// https://www.codechef.com/APRIL21C/problems/BOLT
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float k1, k2, k3, v, s;
        cin >> k1 >> k2 >> k3 >> v;
        s = (k1 * k2 * k3 * v);
        s = 10000 / s;
        // cout << "\nssssssssssssss\t\t" << s;
        s = round(s) / 100;
        // cout << "ssssssssssssss\t\t" << s;

        if (float(9.58+0.00000000000000000001) > s)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
