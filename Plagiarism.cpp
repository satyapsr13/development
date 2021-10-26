
#include <bits/stdc++.h>
//#define int long long int
// #define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
// #define db(x) cout < < < < #x < < < < x <<
using namespace std;
void solve()
{
    int x, y, n;
    read3(x, y, n);
    int arr[n];

    int arr1[n + 1] = {0};
    for (int i = 0; i < n; ++i)
    {
        read1(arr[i]);
        arr1[arr[i]]++;
    }

    //    for (int i = 0; i < n; ++i)
    //    {
    //        cout << arr1[i] << " ";
    //    }
    //    cout << endl;
    int count = 0;
    vector<int> q;
    for (int i = 0; i < x + 1; ++i)
    {
        if (arr1[i] > 1)
        {
            count++;
            q.push_back(i);
            /* code */
        }
    }
    cout << count << " ";
    for (int i = 0; i < q.size(); ++i)
    {
        cout << q[i] << " ";
        //    q.pop();
    }
    cout << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(NULL);
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