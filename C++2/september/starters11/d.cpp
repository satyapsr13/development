
#include <bits/stdc++.h>

using namespace std;
void iamleo()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    if (n == 2)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
              
                    cout << -1 << " ";
                
            }
            cout << "\n";
        }
        /* code */
    }
    else
    {

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                {
                    cout << -1 << " ";
                    /* code */
                }
                else
                {
                    cout << 1 << " ";
                }
            }
            cout << "\n";
        }
    }
    cout << "\n";
}
signed main()
{

    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        iamleo();
    }
    return 0;
}