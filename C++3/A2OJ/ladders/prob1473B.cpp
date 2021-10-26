/*this code is contributed by satyapsr -> www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
using namespace std;

auto mul = [](string s, int k) ->string
{
    string res = "";
    while (k--)
    {
        res += s;
        /* code */
    }
    return res;
};

void solved_by_satyapsr13()

{
    string s, p;
    cin >> s >> p;
    int n = s.size();
    int m = p.size();
    int nm = __gcd(n, m);
    if (mul(s,m/nm)==mul(p,n/nm))
    {
        cout << mul(s, nm) << "\n";
        /* code */
    }else
    {
        cout << -1 << "\n";
    }
    
    



}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}