// https://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int x[n], max = 0, index;

    // queue<int> v;
    for (int t = 0; t < n; ++t)
    {
        cin >> x[t];
        if (x[t] % m == 0)
            x[t] -= 1;
        x[t] /= 3;
        if (x[t] >= max)
        {
            max = x[t];
            index = t + 1;
            /* code */
        }
    }
    cout << index;

    return 0;
}
