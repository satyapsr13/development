////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define pb push_back
#define fi first
#define sc second
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    string s;
    string p;
    cin >> s;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            count++;
        }
        else
        {
            p.push_back(s[i]);
        }
    }
    // cout << p;
    if (count == s.size())
    {
        cout << 0;
        cout << "\n";
        return;
    }

    int counto = 0;
    for (int i = count; i < n; ++i)
    {
        if (s[i] == '0')
        {
            counto++;
            /* code */
        }
    }
    // ans += counto;
    for (int i = 0; i < p.size(); ++i)
    {
        ans += p[i] - '0';
        // db(ans);

        // ans++;
    }
    ans += p.size() - 1;
    if (s[n-1]=='0')
    {
        ans++;
        /* code */
    }
    

    cout << ans;
    cout <<"\n" ;
    
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
        solved_by_satyapsr13();
    }
    return 0;
}