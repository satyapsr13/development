
#include <bits/stdc++.h>

using namespace std;
void so()
{
    int n, k;
    cin >> n;
    n = n % 4;
    if (n == 0)
    {
        cout << "North"
             << "\n";
        return;
        /* code */
    }
    if (n == 1)
    {
        cout << "East"
             << "\n";
        return;
        /* code */
    }
    if (n == 3)
    {
        cout << "West"
             << "\n";
        return;
        /* code */
    }
    if (n == 2)
    {
        cout << "South"
             << "\n";
        return;
        /* code */
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
        so();
    }
    return 0;
}