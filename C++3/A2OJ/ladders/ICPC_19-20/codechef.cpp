//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1  __builtin_popcountll
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
                                       
    int arr[n];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int arr1[n];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
    }

    sort(arr, arr + n);
    sort(arr1, arr1 + n);
    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr1[i] >= arr[j])
        {
            j++;
            /* code */
        }
    }
    cout << j;cout <<"\n" ;
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
        solved_by_satyapsr();
    }
    return 0;
}