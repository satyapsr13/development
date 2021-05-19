// https://codeforces.com/contest/1525/problem/A
#include <bits/stdc++.h>
#define db(x) cout << "\n" \
                   << #x << "\t" << x << "\n"
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
        int n;
        cin >> n;
        // cout<<(float(100)/n*2)<<(100/n*2);
       cout<<100/(__gcd(100,n))<<"\n";
    }

    return 0;
}
