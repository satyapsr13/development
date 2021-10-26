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
int solve_question(int t1, int t2, int arr[], int arr1[])
{

    int even = arr1[t2] - arr1[t1-1];
    int diff = t2 - t1;
    int odd = diff - even;
    return even;
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;

    int arr[n];
    int arr1[n] = {0};
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
      
    }
    if (!(arr[0] & 1))
    {
        arr1[0] = 1;
        /* code */
    }

    for (int i = 1; i < n; ++i)
    {
        // cin >> arr[i];
        if (arr[i] & 1)
        {

            arr1[i] = arr1[i-1];
            /* code */
        }
        else
        {
            arr1[i] = arr1[i-1] + 1;
        }
    }
    int t1, t2;
    while (k--)
    {
        cin >> t1 >> t2;
        t1--;
        t2--;
        cout << solve_question(t1, t2, arr,arr1);
        cout << "\n";
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