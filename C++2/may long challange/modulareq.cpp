// https://www.codechef.com/MAY21C/problems/MODEQ
#include <bits/stdc++.h>
// const double pi = 3.1415926535897932384626433832795;
// #define fl(i, n) for (int i = 0; i < n; i++)
// #define mod %
// #define debug(x) cout << "\n" \
//                       << #x << " = " << x << "\n"
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
        long long n, m, ans = 0;;
        cin >> n >> m;

        vector<long long> mod(n + 1, 1);
        for (long long i = 2; i <= n; i++)
        {
            long long a = m % i;
            ans += mod[a];
            for (long long j = a; j <= n; j += i)
            {
                mod[j]++;
            }

            /* code */
        }
        cout << ans << "\n";
    }

    return 0;
}
