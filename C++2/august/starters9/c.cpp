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
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    int m;
    cin >> n >> k >> m;
    char ch;
    int arr[n];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> ch;
        cin >> ans;
        // cin >> arr[i];
        if (ch=='+' and arr[ans]==0)
        {
            arr[ans] = ans;
            /* code */
        }
        if (ch == '-' and arr[ans] == 0)
        {
            // arr[ans] = ans;
            cout << "Inconsistent" << endl;
            return;
            /* code */
        }
    }
    cout << "Consistent" << endl;
    return;
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