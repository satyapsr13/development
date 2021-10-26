// https://codeforces.com/contest/1515/problem/A
#include <bits/stdc++.h>
// const double pi = 3.1415926535897932384626433832795;
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum == x)
        {
            cout << "NO\n";

            /* code */
        }
        else
        {    
            sort(arr, arr + n);
            sum = arr[n - 1];
            for (int i = n - 2; i >= 0; i--)
            {
                if (sum == x)
                {
                    swap(arr[i], arr[i + 1]);
                    sum += arr[i];
                }
                else
                {
                    sum += arr[i];
                    /* code */
                }

                /* code */
            }
            cout << "YES\n";
            for (int i = n-1; i >= 0; i--)
            {
                cout << arr[i] << " ";
                /* code */
            }
            cout << endl;
        }
    }

    return 0;
}
