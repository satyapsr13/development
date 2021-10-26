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
int req[1000001] = {0};
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    int arr[n];
    // cout <<"YES"<<endl;
    // return;
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        req[arr[i]]++;
    }

    for (int i = 0; i < n; ++i)
    {
            sum+=(n- req[arr[i]]);
            // req[arr[i]] = n;
            // if (req[arr[i]] != 1)
            // {
            //     /* code */
            // }
            // db(req[arr[i]]);
            // db(sum);
    }
    cout <<  sum << endl;
    // return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    { memset(req, 0, sizeof(req));
        solved_by_satyapsr13();
    }
    return 0;
}