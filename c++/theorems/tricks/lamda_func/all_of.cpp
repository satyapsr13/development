/*this code is contributed by satyapsr13 SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
using namespace std;
void solve()
{
    // int n, k, ans = 0, count = 0, sum = 0;
    // cin >> n;
    vector<int> v = {1, 2, 3};
    cout << all_of(v.begin(), v.end(), [](int x )
                   { return x > 10; });
    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 10; });
    cout << none_of(v.begin(), v.end(), [](int x)
                   { return x > 10; });
    //   vector<int>::iterator it;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solve();
    }
    return 0;
}