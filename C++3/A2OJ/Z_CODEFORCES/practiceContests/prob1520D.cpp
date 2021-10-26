// https://codeforces.com/contest/1520/problem/D
#include <bits/stdc++.h>
// const double pi = 3.1415926535897932384626433832795;
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, count = 0;
        cin >> n;
        vector<int> arr = {0};
        fl(i, n)
        {
            cin >> x;
            arr[x - i]++;
        }
        for (int i = 0; i <= n; i++)
        {
            if (arr[i] > 1)
            {
                count++;
                /* code */                                                                                                                      
            }

            /* code */
        }
        cout << count << "\n";
    }

    return 0;
}
