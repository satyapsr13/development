//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;

    map<int,int> mp;
    int gd = 0;
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        mp[x] = 1;
        gd = __gcd(gd, x);
    }
    if(mp[gd]==1){
        cout<<gd;
        return;
    }
    cout <<"-1"<<"\n";  
    return;

}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}