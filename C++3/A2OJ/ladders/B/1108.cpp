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
int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

void solved_by_satyapsr13()
{
    int n, k, ans = 1, count = 0, sum = 0;
    cin >> n;
    int mx = INT_MIN;
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin >> k;
        mp[k]++;

        mx = max(mx, k);
    }
     for (auto it: mp  )
        {
            if (mx%it.first!=0|| it.second==2)
            {
                ans = lcm(ans, it.first);
                /* code */
            }
            
        }
        cout <<mx<<" "<< ans;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}