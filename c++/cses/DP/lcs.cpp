

#include <bits/stdc++.h>
using namespace std;
int i = 0;
int t[100][100];
string ans; 
int main()
{
    
    string s;
    cin >> s;
    string s1;
    cin >> s1;
    // cout << findLcs(s, s1, s.size() - 1, s1.size() - 1);
    int n = s.size();
    int m = s1.size();
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (s[i] == s1[j])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
                /* code */
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    cout <<  t[n][m];
    // reverse(ans.begin(), ans.end());
    // cout << ans;
    return 0;
}