// https://codeforces.com/contest/1519/problem/B
#include <bits/stdc++.h>
using namespace std;
// bool solve(int a, int b, int c)
// {

//     int count = 0, x = 1, y = 1
//     if (x==a && y==b && c==count)
//     {

//     }
//     if (x<y)
//     {solve(x+1,y,count+)
//         /* code */
//     }

// }
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c, x = 1, y = 1, count = 0;

        cin >> a >> b >> c;
        while (!(x == a && y == b))
        {
            if (x > y)
            {
                y++;
                count += x;
                /* code */
            }
            else
            {
                x++;
                count += y;
            }
        }
        if (count < c)
        {
            cout << "NO\n";
            /* code */
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
