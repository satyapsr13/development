#include <bits/stdc++.h>
using namespace std;
#define a(i, n) for (int i = 0; i < n; i++)
#define ra(i, n) for (int i = n - 1; i >= 0; i--)
#define ll long long int
#define lim 1000000000
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    a(i, n) cin >> arr[i];
    ll ans = 0;
    ll i = 1;
    while (i < lim)
    {
        ll sum = 0;
        a(j, n)
        {
            if (arr[j] & i)
                sum++;
        }
        sum = (sum * (sum - 1)) / 2;
        ans += sum * i;
        i *= 2;
    }
    cout << ans << endl;
    return 0;
}