// https://www.spoj.com/problems/CHOCOLA/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, s1 = 0, s2 = 0;
        cin >> m >> n;
        int a[m], b[n];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            s1 += a[i];
            /* code */
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            s1 += b[i];
            /* code */
        }
        // int temp=max(s1,s2);
        if (s1 > s2)
        {
            cout << max(s1, s2) + (n * min(s2, s1)) << endl;
        }
        else
        {
            cout << max(s1, s2) + (m * min(s2, s1)) << endl;
        }

        /* code */
    }
    return 0;
}