#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int t, x;

        if (t == 1)
        { a[x]=1-a[x];
        }
        if (t == 2)
        {
        }
    }

    return 0;
}
