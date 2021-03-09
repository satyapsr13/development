#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,z;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, l, n, m = 0, p;
        cin >> n;
        p = n - 3;
        int b[p], a[n];
        for (int z = 0; z < n; z++)
        {
            cin >> a[z];
        }
        for (int j = 0, k = j + 1, l = j + 2; j < n - 2; k++, l++, j++)
        {
            b[m] = abs(a[j] - a[k]) + abs(a[k] - a[l]) + abs(a[j] - a[l]);
            ++m;
            if (j != 0)
            {
                int large = b[0];
                {
                    if (b[m-1] > b[m])
                    {
                        large = b[m-1];
                    }
                    if(b[m-1] > b[m])
                    {
                        large = b[m-1];
                    }
                }z=large;
            }
                      
        }
        cout << z;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int la(int x, int y)
// {
//     if (x > y)
//     {
//         return (x - y);
//     }
//     else
//         return (y - x);
// }

// int main()
// {
//     int t;
//     cout << "enter\n\t";
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         int n, m = 0, p;
//         cin >> n;
//         p = ((n * (n + 1)) / 2);
//         int b[p];

//         int a[n];
//         for (int z = 0; z < n; z++)
//         {
//             cin >> a[n];
//         }
//         for (int j = 0; j < n - 2; j++)
//         {
//             for (int k = j + 1; k < n - 1; k++)
//             {
//                 for (int l = j + 2; l < n; l++)
//                 {
//                     b[m] = la(a[j] , a[k]) + la(a[k] , a[l]) + la(a[j] , a[l]);
//                     ++m;
//                 }
//             }
//         }
//         int large=b[0];
//         for (int o = 0; o < p; o++)
//         {
//             if(b[o]>b[o+1])
//             {
//                 large=b[o];
//             }
//         }
//         cout<<large;
//     }
//     return 0;
// }
