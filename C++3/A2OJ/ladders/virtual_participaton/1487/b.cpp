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
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 1;
        cout << "\n";
        return;
        /* code */
    }
    else if (!(n & 1))
    {
        k == n ? cout << n : cout << k % n;

        // db(k);
        cout << "\n";
        return;
    }
    else
    {
        cout << k % (n - 2);
        cout << "\n";
        return;
    }
}
cout <<"YES"<<endl;  
return;


// cout <<"\n" ;
% 1000000007 signed main()
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
cout << "NO"<<endl;
return;