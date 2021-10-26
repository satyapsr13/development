//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int arr[n];
    int neg = 0;
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            neg++;
            /* code */
        }
        else
        {
            sum += arr[i];
        }
    }
    // db(n - neg);
    // db(ceil(n / 2));
    if (n - neg < ceil((n*1.0) / 2))
    {
        cout << "Rejected\n";
        /* code */
    }
    else if (*max_element(arr, arr + n) > k)
    {
        cout << "Too Slow\n";
        /* code */
    }
    else if (*max_element(arr, arr + n) <= 1 and neg==0)
    {
        cout << "Bot\n";
    }
    else
    {
        cout << "Accepted\n";
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