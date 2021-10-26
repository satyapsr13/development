
#include <bits/stdc++.h>
#define int long long int
                   
using namespace std;
void solved_by_()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    // int arr[n];
    int x;
    int odd = 0;
    for (int i = 0; cin >> x; ++i)
    {
        
        if (x & 1)
        {
            odd++;
        }
    }
    int even = n - odd;
    if (even > n / 2)
    {
        ans += (n / 2) + (odd) + (n & 1);
        /* code */
    }
    else
    {
        ans += (n / 2) + (even);
    }

    cout << ans;
    cout << "\n";
}
signed main()
{

   
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_();
    }
    return 0;
}