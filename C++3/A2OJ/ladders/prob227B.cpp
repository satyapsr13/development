// https://codeforces.com/contest/227/problem/B
#include <bits/stdc++.h>
// by leo
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
#define debug(x) cout << #x << " = " << x << "\n"

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n;
    long long  x, arr3[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr3[x] = i;
    }
    cin >> m;
    long long c1 = 0, c2 = 0;
    long long  y;
    fl(i, m)
    {
        cin >> y;
        c1 += arr3[y] + 1;
        c2 += (n - arr3[y]);
    }
    cout << c1 << " " << c2;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// long long n, d, x, q, w;
// int a[100001];
// main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         a[x] = i;
//     }
//     cin >> d;
//     while (d--)
//     {
//         cin >> x;
//         w += a[x] + 1;
//         q += n - a[x];
//     }
//     cout << w << " " << q;
// }
