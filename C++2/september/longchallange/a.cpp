
#include <bits/stdc++.h>

using namespace std;
void so()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a + b <= d and c <= e)
    {
        cout << "YES"
             << "\n";
        return;
        /* code */
    }
    else if (a + c <= d and b <= e)
    {
        cout << "YES"
             << "\n";
        return;
    }
    else if (b + c <= d and a <= e)
    {
        cout << "YES"
             << "\n";
        return;
    }

    cout << "NO" << endl;
    return;
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
        so();
    }
    return 0;
}



