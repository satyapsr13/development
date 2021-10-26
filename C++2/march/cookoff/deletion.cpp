//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int arr[n+1], prefix[n+1] = {0};
    //memset(arr, 0, sizeof(arr));
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }
    
    if (k == 1)
    {
        cout << prefix[n];
        cout << "\n";
        return;
    }

    int minimum=n;

    for (int i = k; i <= n; ++i)
    {
        minimum = min(minimum, prefix[i] - prefix[i-k]);
    }
    ans = ((minimum * (minimum + 1)) / 2) + prefix[n] - minimum;
    cout << ans << endl;
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