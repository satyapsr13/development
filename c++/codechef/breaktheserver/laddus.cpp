#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        k--;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int least = arr[0 + k] - arr[0];
        for (int i = 1; i + k < n; i++)
        {
            //cout<<arr[i+k]-arr[i];
            if (arr[i + k] - arr[i] < least)
                least = arr[i + k] - arr[i];
        }
        cout << least << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int f, k, m;
//         cin >> f >> k;
//         vector<int> a;
//         for (int i = 0; i < f; i++)
//         {
//             cin >> m;
//             a.push_back(m);
//         }
//         sort(a.begin(), a.end());
//         int sm = a[k - 1] - a[0];
//         int o;
//         for (int s = 1; s+k < a.size(); ++s)
//         {
//             o = a[k + s - 1] - a[s];
//             if (o < sm)
//             {
//                 sm = o;
//             }
//         }
//         cout << sm << "\n";
//     }

//     return 0;
// }
