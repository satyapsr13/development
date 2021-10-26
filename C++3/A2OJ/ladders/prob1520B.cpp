// // // https://codeforces.com/contest/1520/problem/B

#include <bits/stdc++.h>
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

int main()
{
    int t;
      
    
    
    
    
    
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for (int &x : a)
            scanf("%d", &x);
        int ans = 2;
        if (is_sorted(a.begin(), a.end()))
            ans = 0;
        else if (a[0] == 1 || a[n - 1] == n)
            ans = 1;
        else if (a[0] == n && a[n - 1] == 1)
            ans = 3;
        printf("%d\n", ans);
    }
}