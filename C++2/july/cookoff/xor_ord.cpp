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
    int n, k, ans = 0, count = 0, p, sum = 0; 
    cin >> n;
    int arr[n];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        // cin >> arr[i];
        cin >> arr[i];
        if (i == 0)
            p = arr[0];
        else
            p = p & (arr[i]);
    }
    // int mx = *max_element(arr, arr + n);
    for (int i = 0; i < n; ++i)
    {

        count |= (arr[i] );
    }
    for (int j = 0; j < 10; ++j)
    {
    
      
    }
        cout <<( 10 |9)<< endl;
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