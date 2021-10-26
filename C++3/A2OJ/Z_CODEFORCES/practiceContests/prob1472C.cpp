
#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define db(x) cout << "\n" \
                      << #x << " = " << x << "\n"
// void solve()
// {
//     int n;
//     cin >> n;
//     // vector<int> arr;
//     int mx = 0, score;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }

//     for (int j = 0; j < n; ++j)
//     {
//         cout << j;

//         // mx = max(mx, score);
//     }
//     cout << mx << "\n";
// }
signed main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        int mx = 0, score = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        

        for (int j = 0; j < n; ++j)
        {
            // db(j);
            int i = 0;
            while (score <= n)
            {
                db(i);

                score = arr[i] + i ;
                db(score);
                i += arr[i];
            }

            mx = max(mx, score);
        }
        cout << mx << "\n";
    }
    return 0;
}