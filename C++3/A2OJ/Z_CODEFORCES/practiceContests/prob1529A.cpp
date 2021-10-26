// https: //meet.google.com/ris-zziy-yxt

#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout < < < < #x < < < < x <<
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int avg = sum / n, mid, high;
    sort(arr, arr + n);
    high = n - 1;
    int first = 0;
    int ans = 0;
    for (int first = 0; first <= high; ++first)
    {
        if (arr[first]<=avg  && arr[first+1]>avg)
        {
            ans = first + 1;
        }
        
        
    }
    cout << n-ans << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}