// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, ans = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
        {
            ans++;
        }
        if (s[1] == '-')
        {
            ans--;
        }
    }
    cout << ans;
    return 0;
}
