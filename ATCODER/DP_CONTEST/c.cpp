//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int a[n], b[n], c[n];
    // bool a1 = true, b1 = true, c1 = true;
    int position = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    int mx;
    for (int i = 0; i < n; ++i)
    {
        mx = max(a[i], max(b[i], c[i]));
        if (mx==a[i] and postion!=1)
        {
            ans += a[i];
            position = 1;
            continue;
            /* code */
        }else if()
        {
            
        }
        
        

    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}