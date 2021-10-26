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

int solve(vector<int> &arr, int n)
{
    if (n==0)
    {
        return arr[n];
        /* code */
    }
    
     
    return arr[n] + solve(arr, n - 1);
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; ++i)
    {
        arr.push_back(i);
    }
   cout<< solve(arr, n);
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}