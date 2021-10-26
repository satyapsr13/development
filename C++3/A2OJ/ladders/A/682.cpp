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
    cin >> n >> k;
    int arr[5] = {n / 5,
                  n / 5,
                  n / 5,
                  n / 5,
                  n / 5};

    for (int i = 0; i < n % 5; ++i)
    {
        arr[i + 1]++;
    }
    int arr1[5] = {k / 5,
                   k / 5,
                   k / 5,
                   k / 5,
                   k / 5};

    for (int i = 0; i < k % 5; ++i)
    {
        arr1[i + 1]++;
    }
    ans += (arr[0] * arr1[0]);
   

    for (int i = 1; i < 5; ++i)
    {
 
        ans += (arr[i] * arr1[5 - i]);
    }
    cout << ans;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}