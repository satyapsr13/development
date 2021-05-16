// https://codeforces.com/contest/1515/problem/D
#include <bits/stdc++.h>
const double pi = 3.1415926535897932384626433832795;
#define debug(x) cout << #x << "\t" << x << "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;cin>>t;while (t--)
    // {
    //     /* code */
    // }
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        int a, b, c;
        cin >> a >> b >> c;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        int mx = max(b, c);
        int count = (mx - (a / 2));
        for (int i = 0; i < a / 2; i++)
        {
            if (arr[i] == arr[i + (a / 2)])
            {
            }
            else
            {
                count += 1;
                // cout<<i<<"\t";
                // debug(count);
            }
        }
        cout << count << "\n";
    }
    return 0;
}