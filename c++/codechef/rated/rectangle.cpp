#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        bool l = 0;
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i][j] == 1 and a[i + 1][j] == 1 and a[i][j + 1] == 1 and a[i + 1][j + 1] == 1)
                {
                    l = 1;
                    cout << "YES\n";
                    break;
                }
            }
            if (l == 1)
            {
                break;
            }
        }
        if (l == 0)
        {
            cout << "NO\n";
        }
    }
    return 0;
}
