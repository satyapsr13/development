#include <bits/stdc++.h>
#define  int long long int
#define  mod 1e9 + 7
#define  read1(a) cin >> a
#define  read2(a, b) cin >> a >> b
#define  read3(a, b, c) cin >> a >> b >> c
#define  db(x) cout < < < < #x < < < < x <<
using namespace std;
void solve()
{
    int n;
    char ch;
    string s;
    // int arr[n];
}
signed main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int count=0;
    for (int i = 1; i <= n; ++i)
    {
        if (k % i == 0 and k <= n * i)
        {
            count++;
            /* code */
        }
    }

    cout << count;
    return 0;
}



























