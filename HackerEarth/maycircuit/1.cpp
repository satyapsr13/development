// https://www.hackerearth.com/challenges/competitive/may-circuits-21/algorithm/binary-inversions-cf645357/
#include <bits/stdc++.h>
#define db(x) cout << "\n" \
                   << #x << "\t" << x << "\n"
#define int long long int
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, k, lzero, fone;
    cin >> n >> x >> k;
    int arr[n] = {0};
    lzero = x - 1;
    fone = x;
    int l = n - x;
    if (k > l * x || x == n || x == 0)
    {
        cout << "-1";
        return 0;
        /* code */
    }

    for (int i = n - 1; i >= x; i--)
    {
        arr[i] = 1;
    }
    // db(arr[lzero]);

    // db(arr[fone]);
    for (int i = 0; i < k / l; i++)
    {
        swap(arr[lzero], arr[n - 1 - i]);
        lzero--;
        fone--;
        cout << "\n"
             << "loop"
             << "\n";
    }
    k = k - ((k / l) * l);
    // db(k);
    swap(arr[lzero], arr[k + lzero]);
    // db(lzero);

    // db(fone);

    // swap(arr[x-1],arr[x+k-1]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}