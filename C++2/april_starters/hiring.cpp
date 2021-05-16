// https://www.codechef.com/START3C/problems/HIRETEST
#include <bits/stdc++.h>
#define ent(n) \
    int n;     \
    cin >> n
#define show(n) cout << n
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortarr(a) sort(a, a)
#define sortv(a) sort(a.begin(), a.end())
#define testcase(t) \
    int t;          \
    cin >> t;       \
    while (t--)
#define debug(x) cout << "\n" \
                      << #x << " = " << x
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
int main(int argc, char const *argv[])
{
    ios;
    testcase(t)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<string> s;
        string a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s.push_back(a);
        }
        fl(i, n)
        {
            int p1 = 0, f1 = 0;
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'F')
                    f1++;
                if (s[i][j] == 'P')
                    p1++;
            }
            if (f1 >= x || p1 >= (x-1+y))
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout<<endl;
    }
    return 0;
}
