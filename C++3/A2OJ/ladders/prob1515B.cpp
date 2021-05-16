// https://codeforces.com/contest/1515/problem/B
#include <bits/stdc++.h>
// const double pi = 3.1415926535897932384626433832795;
using namespace std;
// long long r = 1e9;
int arr[30];
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int z = 2;
    for (int i = 0; i < 30; i++)
    {
        if (z >= 1e9 + 1)
        {
            break;
            /* code */
        }
        arr[i] = z;
        z *= 2;

        /* code */
    }
    // for (int i = 0; i < 40; i++)
    // {
    //     cout <<i<<"\t"<< arr[i] << "\n";
    //     /* code */
    // }

    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        for ( int i = 0; i < 30; i++)
        {
            if (n == arr[i])
            {
                cout << "YES\n";
                break;
                /* code */
            }
            if (n < arr[i])
            {
                cout << "NO\n";
                break;
                /* code */
            }
        }
    }

    return 0;
}
