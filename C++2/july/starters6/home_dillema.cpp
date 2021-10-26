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
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int arr[n];
    int arr1[1001] = {0};
    // k++;

    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        arr1[arr[i]] = i;
    }
    int s;
    int s1;
    n -= (n % k);
    // db(n);
    s = *min_element(arr, arr + k);
    db(s);
    sum += s;
    for (int i = 0; i < n; i += arr1[s])
    {
        arr1[s];
        s = *min_element(arr + arr1[s]  , arr + arr1[s] + k);
        db(arr1[s] + 1);
        db(arr1[s] + k);
        db(s);
        sum += s;
        db(i);

        // s1 = min_element(arr + i, arr + i + k);
        // db(s1);
    }
    cout << sum << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";

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