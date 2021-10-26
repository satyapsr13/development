// https://codeforces.com/contest/227/status/C

#include <iostream>
#define dg(n) cout << #n << "\t" << n << "\n"
using namespace std;
int N, M;
long long lpow(long long b, int e)
{
    if (!e)
        return 1;
    if (e & 1)
    {
        //  cout<<
        return (b * lpow((b * b) % M, e / 2)) % M;
    }

    return lpow((b * b) % M, e / 2) % M;
}
int main()
{
    // dg(3LL);
    // cin >> N >> M;
    // cout << (lpow(3LL, N) + M - 1) % M;
    return 0;
}

#include <iostream>
using namespace std;

int n, m;

int pow(int p, int k)
{
    int q = p, ret = 1;
    for (; k;)
    {
        if (k & 1)
            ret = (1ll * ret % m * q % m) % m;
        q = (1ll * q % m * q % m) % m;
        k >>= 1;
    }
    return ret % m;
}

int main()
{
    cin >> n >> m;
    cout << (pow(3, n) % m + m - 1) % m;
}