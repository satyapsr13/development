// https://www.codechef.com/COOK128C/problems/CM164364

//          __             __        ____                          __
//    _____/ /_____ ______/ /_      / __/________  ____ ___       / /_  ___  ________
//   / ___/ __/ __ `/ ___/ __/     / /_/ ___/ __ \/ __ `__ \     / __ \/ _ \/ ___/ _ \
//  (__  ) /_/ /_/ / /  / /_      / __/ /  / /_/ / / / / / /    / / / /  __/ /  /  __/
// /____/\__/\__,_/_/   \__/     /_/ /_/   \____/_/ /_/ /_/    /_/ /_/\___/_/   \___/
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
#define debug(x) cout<<"\n"<< #x << " = " << x<<"\n"
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
        ent(n);
        ent(x);
        long long int a[n];
        set<int> s;
        fl(i, n)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        if (n - s.size() >= x)
        {
            // debug(s.size());
            cout << s.size()<<"\n";
        }
        else
        {
            // debug(s.size());
            cout << s.size() - n + x <<"\n";
        }
    }
    return 0;
}
