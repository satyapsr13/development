
#include <bits/stdc++.h>

#define db(x) cout << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int dp[1000001];
int find(string s, int n, int ans)
{
    if (n == 0)
        return ans;
    if (s[n] == '(' || s[n] == ')' || s[n] == '+')
    {
        // n--;
        return find(s, n-1, ans);
    }
    // return max()
    if (s[n-1]=='+'and s[n]=='?')
    {return max()
    }
}
signed main()
{
    memset(arr, 0, sizeof(arr));
    int n;
    cin >> n;
    memset(dp, 0, sizeof(dp));
    string s;
    cin >> s;

    cout << find(s, n, 0);
    return 0;
}