////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long
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
const int N = 1e18 + 1;

int isvalid(int n)
{
    int t = n;
    // db(1);
    while (t > 0)
    {
        if (t % 10==0)
        {
            /* code */
        }
        else
        {

            if (n % (t % 10) != 0)
            {

                return 0;
            }
        }

        t /= 10;
    }
    return 1;
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;

    for (int i = n; i <= N; ++i)
    {
       

        if (isvalid(i) == 1)
        {
            cout << i;
            cout << "\n";
            return;
        }
    }
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