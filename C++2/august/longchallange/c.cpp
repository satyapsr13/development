//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
// const int N = 1e9-1000000000;
// int arr[N];
int finalshoot(int n, int p, int k)
{
    int ans = 0;
    while (1)
    {
        ans++;
        if (n == p)
        {
            return ans;
        }
        n += k;
        /* code */
    }
}
void solved_by_satyapsr13()
{
    int n, k, p, ans = 0, l, coun = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n >> p >> k;
    // n--;
    // if (p == 0)
    // {
    //     cout << 1;
    //     cout << "\n";
    //     return;
    //     /* code */
    // }
    // if (p == k)
    // {
    //     cout << 2;
    //     cout << "\n";
    //     return;
    //     /* code */
    // }
    int modd = p % k;

    int lastdigit = (n - 1) % k;
    if (modd == 0)
    {
        ans = finalshoot(0, p, k);
        cout << ans << endl;
        return;
        /* code */
    }

    if (modd <= lastdigit) // all is well
    {
        // cout << "YES" << endl;
        // return;
        ans = modd * (((n-1) / k) + 1) + finalshoot(modd, p, k);
    }
   

    if (modd > lastdigit)
    {
        ans = (lastdigit + 1) * ((n / k) + 1) + ((modd - lastdigit - 1) * (n / k)) + finalshoot(modd, p, k);
        // db((lastdigit + 1) * ((n / k) + 1));
        // db(((modd - lastdigit - 1) * (n / k)));
        // db(finalshoot(modd, p, k));
        // ans--;
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        // db(Test_Cases);
        solved_by_satyapsr13();
    }
    return 0;
}