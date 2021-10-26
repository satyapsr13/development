#include <bits/stdc++.h>

using namespace std;
#define db(x, y) cerr << #x << "  " << x << "   " \
                      << #y << "  " << y << "\n"

#define db1(  y) cerr<< #y << "  " << y << "\n"
 void solve()
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    a.push_back('0');
    b.push_back('0');
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += (a[i] == '1') - (a[i] == '0');
        // cerr << cnt << "\n";
        // db1(i);
        // db();
        db(cnt, (a[i] == '1') - (a[i] == '0'));
        if ((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    cerr << "\n";
    cerr << "\n";
    cerr << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int te;
    cin >> te;
    while (te--)
    {
        solve();
    }
}