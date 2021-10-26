//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k,m, ans = 0, count = 0, sum = 0;
    cin >> n>>k>>m;
    int distance = n * ((m / 2) + (m & 1));
    // db(distance);
    if (distance>=k*60)
    {cout << "YES"<<endl; 
        /* code */
        return;
    }else
    {
        cout << "NO"<<endl;
        return;
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