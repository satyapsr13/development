//---------  @ copywrite !!!   All rights reserved  ---------------
/*this code is contributed by satyapsr -> www.semikolan.co  */
#include <bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
using namespace std;
void solved_by_satyapsr13()
{
    int n, k, x, ans = 0, count = 0, sum = 0;
    cin >> n >> k >> x;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
     
    sort(arr,arr+n);
        
    for (int i = 0; i < n; ++i)
    {
        if (arr[i + 1]-arr[i]>x)
        {
            count++;
            /* code */
        }
    }
    cout << count - k + 1;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases=1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}