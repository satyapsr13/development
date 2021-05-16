#include <bits/stdc++.h>
using namespace std;
int pow(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y % 2 == 1)
        {
            res *= x;
            /* code */
        }
        y=y>>1;
        x*=x;


        /* code */
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int x, y;
    cin >> x >> y;
    cout << pow(x, y);
    return 0;
}
