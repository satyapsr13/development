// https://www.codechef.com/problems/TSORT
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + t);
    for (int i = 0; i < t; ++i)
    {
        cout << a[i] << "\n";
    }
    return 0;
}
