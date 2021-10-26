

#include <bits/stdc++.h>
#define int long long int

using namespace std;
void iamleo()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n >> k;
    sum = (n * (n + 1)) / 2;
    int tt = sum - k;
    if (tt > 0 and tt<=n)
    {
        cout << tt;
        cout << "\n";
        // cout << "\n";
        return;
    }

    cout << "-1" << endl;
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
        iamleo();
    }
    return 0;
}