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
    int arr[n + 1] = {0};
    int arr1[k * 3];

    for (int i = 0; i < k * 3; ++i)
    {
        cin >> arr1[i];
    }
    arr[arr1[0]] = 1;
    arr[arr1[1]] = 2;
    arr[arr1[2]] = 3;

    for (int i = 3; i < k * 3; i += 3)
    {
        if (arr[arr1[i]] != 0)
        {
            if (arr[arr1[i]] == 1)
            {
                arr[arr1[i+1]] == 2;
                arr[arr1[i+2]] == 3;
                /* code */
            }
            else if (arr[arr1[i]] == 2)
            {
                arr[arr1[i + 1]] == 1;
                arr[arr1[i + 2]] == 3;
                /* code */
            }
            else if (arr[arr1[i]] == 3)
            {
                arr[arr1[i + 1]] == 2;
                arr[arr1[i + 2]] == 1;
                /* code */
            }
        
            /* code */
        }else
        {
            arr[arr1[i + 1]] == 2;
            arr[arr1[i + 2]] == 3;
            arr[arr1[i ]] == 1;
        }
    }
     
    for (int i = 1; i < n+1; ++i)
    {
        cout << arr[i] << " ";
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}