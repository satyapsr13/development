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

    int x;
    map<int, int> mp;
    for (int i = 0; i <= 8; ++i)
    {
        cin >> x;
        mp[x] = i + 1;
        
    }
    int mn = INT_MAX;
    for (auto it : mp)
    {
        if (it.first <= mn)
        {
            mn = it.first;
        
        }

        // cout << it << " ";
    }
     
    if (mn>n)
    {cout <<"-1"<<"\n";  
    return;
        /* code */
    }
    
    // db(mn);
    for (int i = 1; i <= n / mn; ++i)
    {
        cout << mp[mn];
    }
    cout << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}