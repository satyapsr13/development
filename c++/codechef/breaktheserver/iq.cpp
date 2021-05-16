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
        int n;
        cin >> n;
        int a[n], f[n], c = 1, l = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> f[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] < a[i + 1]and f[i] > f[i + 1])
            {
                
                    c++;
            }
            else{
                c=1;
            }
            if (c > l)
            {
                l = c;
            }
        }
        cout<<l<<"\n";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n], j[n], c = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             /* code */
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> j[i];
//             /* code */
//         }
//         bool r = 0;
//         int la = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if ((a[i] > a[i + 1]) and (j[i] < j[i + 1]))
//             {
//                 c++;
//                 r = 1;
//             }
//             if (r == 0)
//             {
//                 if (c > la)
//                 {
//                     la = c;
//                 }
//             }
//         }
//         cout<<la;

//     }

//     return 0;
// }
