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
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 1; i < n - 1; ++i)
    {
        if (arr[i - 1] + arr[i] > arr[i + 1] and arr[i] + arr[i + 1] > arr[i - 1] and arr[i - 1] + arr[i + 1] > arr[i])
        {
         cout <<"YES"<<"\n";  
         return;   /* code */
        }
    }

    cout << "NO" << endl;
    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}