#include <iostream>
#include <math.h>
using namespace std;
int rp(int a[], int n, int g, bool c)
{
    if (n == -1)
        return g;
    int val;
    if (c)
        val = max(rp(a, n - 1, __gcd(g, a[n]), true), rp(a, n - 1, g, false));
    else
        val = rp(a, n - 1, __gcd(g, a[n]), false);
    return val;
}

int main()
{
    cout << __gcd(0, 2);
    return 0;
}
int maisn()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int v = rp(a, n - 1, 0, true);
        bool check = true;
        int m = 0;
        long long notes = 0;
        //cout<<v<<endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % v != 0)
            {
                check = false;
                notes++;
            }
            else
            {
                int d = a[i] / v;
                if (d > m)
                    m = d;
                notes += d;
            }
        }
        if (check)
            notes = notes - m + 1;
        cout << notes << endl;
    }
    return 0;
}
