#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int z = 0, b = 0, n;
        cout << "enter no of integers";
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cout << "enter  integers -> " << i + 1 << "\t";
            // cin >> a [ i ];
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] < a[i - 1])
            {
                z = i - 1;
                break;
            }
        }
        for (int i = 0; i < z; ++i)
        {
            if (a[i] > a[i + 1])
            {
                b = i+1 ;
                break;
            }
        }
        int large = a[b];
        for (int i = b; i < z + 1; i++)
        {
            if (a[b] < a[b + 1])
            {
                large = a[b + 1];
            }
            /* code */
        }

        for (int i = z; i < n; i++)
        {
            if (large > a[z + 1])
            {z=i;
            }
        }
        cout << b-1 << "\t" << z;
    // sort(a[b-1],a[z]);
    // for (int i = 0; i < n; ++i)
    //     {
    //         cout << "enter  integers -> " << i + 1 << "\t"<<a [ i ];
    //         // cin >> a[i];
    //     }
    // }
    return 0;
}
