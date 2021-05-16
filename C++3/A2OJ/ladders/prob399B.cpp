// https://codeforces.com/problemset/problem/339/B
#include <bits/stdc++.h>
const double pi = 3.1415926535897932384626433832795;
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
    long long int n, m;
    cin >> n >> m;
    long long int arr[m], index = 0, count = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    count = arr[0] - 1;
    for ( long long int i = 0; i < m - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count += arr[i + 1] - arr[i];
            /* code */
        }
        if(arr[i] > arr[i + 1])
        {
            count += n-(arr[i] - arr[i + 1]);
        }
    }
    cout << count;
    return 0;
}
