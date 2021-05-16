#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];

    if (n > 3 || n == 1)
    {
        for (int i = 0; i < n; ++i)
        {
            a[i] = i + 1;
            // cout << i << " " << i + floor(n / 2) << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                cout << a[i] << " ";
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << a[i] << " ";
            }

            /* code */
        }

        /* code */
    }
    else
    {
        cout << "NO SOLUTION";
    }
    return 0;
}
