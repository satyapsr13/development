// https://www.hackerearth.com/challenges/competitive/may-circuits-21/algorithm/binary-inversions-cf645357/
#include <bits/stdc++.h>
// #define db(x) cout << "\n" \
//                    << #x << "\t" << x << "\n"
#define int long long int
#define fl(i, a, n) for (int i = a; i < n; ++i)
int cnt;
    bool b=0;
int solve(int arr[], int n)
{    
    int m = 0, o = 0;
    for (int i = 0; i <n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            m = i;
        }
        if (arr[n - 1 - i] < arr[n - i - 2])
        {
            o = n - i - 2;
            reverse(arr+m,arr+o);
            cnt++;
        }
        solve(arr,n);
    }
    return cnt;
}
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {b=0;
        // cnt = 0;
        int n;
        cin >> n;
        int arr[n];
        // fl(i, 0, n)
        for (int i = 0; i <n; i++)
        {
            cin >> arr[i];
        }
        int ans =solve(arr,n);
        cout<<ans<<"\n";
        // reverse(arr+3,arr+8);
        // fl(i, 0, n)
        // for (int i = 0; i <n; i++)
        // {
        //     cout<<arr[i];
        // }
    }

    return 0;
}