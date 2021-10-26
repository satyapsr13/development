
#include <bits/stdc++.h>
using namespace std;
void solv()
{
    int n, k;
    cin >> n >> k;
    if (n >= k)
    {

        cout << k;
        cout << "\n";
        return;
    }
    else
    {
        cout << (2 * n) - k;
        cout << "\n";
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solv();
    }
    return 0;
}