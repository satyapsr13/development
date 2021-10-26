//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    int arr[n][k];
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n; i += 2)
    {
        arr[i][0] = 1;
    }

    for (int i = 0; i < n; i += 2)
    {
        arr[i][k - 1] = 1;
    }
    for (int j = 2; j < k - 2; j += 2)
    {

        arr[0][j] = 1;
    }
    for (int j = 2; j < k - 2; j += 2)
    {

        arr[n-1][j] = 1;
    }
    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < k; ++j)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
     
    cout <<"\n" ;
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