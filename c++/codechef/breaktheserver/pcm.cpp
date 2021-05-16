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
        map<int, string> m;
        m[0] = "start";
        m[1] = "restart";
        m[2] = "stop";
        string s[n];

        switch (n)
        {
        case 1:
            (s[0] == m[0] || s[0] == m[1]) ? cout << 200 : cout << 404;

            break;
        case 2:
            ((s[0] == m[0] || s[0] == m[1]) || (s[0] == m[1] || s[0] == m[2]) || (s[0] == m[0] || s[0] == m[2])) ? cout << 200 : cout << 404;

            break;
        case 3:
            (s[0] == m[0] and s[1] == m[1] and s[2] == m[2]) ? cout << 200 : cout << 404;

            break;

        default:
            break;
        }

        // if (n == 1 and (s[0] == m[0] || s[0] == m[1]))
        // {
        //     cout << 200;
        // }
        // else
        // {
        //     if (n == 2 and (s[0] == m[0] || s[0] == m[1]))
        //     {
        //         cout << 200;
        //     }
        // }
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
//         map<int, string> m;
//         m[0] = "start";
//         m[1] = "restart";
//         m[2] = "stop";
//         string s[n];

//         switch (n)
//         {
//         case 1:
//             (s[0] == m[0] || s[0] == m[1]) ? cout << 200 : cout << 404;

//             break;
//         case 2:
//             ((s[0] == m[0] || s[0] == m[1]) || (s[0] == m[1] || s[0] == m[2]) || (s[0] == m[0] || s[0] == m[2])) ? cout << 200 : cout << 404;

//             break;
//         case 3:
//             (s[0] == m[0] and s[1] == m[1] and s[2] == m[2]) ? cout << 200 : cout << 404;

//             break;

//         default:
//             break;
//         }

//         // if (n == 1 and (s[0] == m[0] || s[0] == m[1]))
//         // {
//         //     cout << 200;
//         // }
//         // else
//         // {
//         //     if (n == 2 and (s[0] == m[0] || s[0] == m[1]))
//         //     {
//         //         cout << 200;
//         //     }
//         // }
//     }

//     return 0;
// }

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
//         /* code */

//         string s;
//         cin >> s;
//         if (s[0] == s[1] || s[0] == s[2] || s[2] == s[1])
//         {
//             cout << "NO\n";
//         }
//         else
//         {
//             cout << "YES\n";
//         }
//     }

//     return 0;
// }
