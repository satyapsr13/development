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
                      << #x << " = " << x << "\n"

using namespace std;
int main(int argc, char const *argv[])
{
    testcase(t)
    {
        long long int r, b, x, mn, mx;
        cin >> r >> b >> x;
        mx = max(r, b);
        mn = min(r, b);
        if (abs(1+x)*mn>=mx)
        {
            cout << "yes"
                 << "\n";

            /* code */
        }
        else
        {
            cout << "no"
                 << "\n";
        }
    }
    return 0;
}
