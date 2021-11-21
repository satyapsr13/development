#include <bits/stdc++.h>
using namespace std;
#define db(x,y) cout<<#x<<" "<<x<<"\t"<<#y<<" "<<y<<"\n"
int solve(string s, int n, int x, int leading_zeros, int tight)
{
    if (n == 0 and x != -1)
    {
        // cout << n << "\t";
        // cout << x;
        // cout << "\n";

        return x;
    }

    int lb = 0;
    int ub = tight ? s[s.length() - n] - '0' : 9;
    int ans = 0;
    db(lb, ub);

    for (int i = lb; i <= ub; ++i)
    {
        // cout << i;
        // cout << "\n";

        ans += solve(s, n - 1, i, leading_zeros and (i == 0), tight and (i == ub));
    }
    return ans;
}
int main()
{

    int a, b;
    cin >> a >> b;
    string A = to_string(a - 1);
    string B = to_string(b);

    int ans1 = solve(A, A.length(), -1, 1, 1);
    cout << ans1;
    return 0;
}