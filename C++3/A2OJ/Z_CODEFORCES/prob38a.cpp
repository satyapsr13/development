// https://codeforces.com/problemset/problem/38/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n - 1], a, b, sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> arr[i];
    }
    cin >> a >> b;
    for (int i = a - 1; i < b-1; ++i)
    {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}
