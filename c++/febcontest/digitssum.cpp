#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, l = 5, m = 10, n;
    cin >> t;
    while (l--)
    {
        n = t % 10;
        cout << n << "\n";
        t =t- n ;
        t*=10;
        // m = m * 10;
    }
    return 0;
}
