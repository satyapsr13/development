// https://www.codechef.com/SPYB21C/problems/SAVWATER
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x,  c, sum;
        float y;
        cin >> h >> x >> y >> c;
        // cout<< ceil(y / 2) ;
        sum = x + ((y / 2) );
        if (sum * h <= c)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no"<< endl;
        }
    }
    return 0;
}
