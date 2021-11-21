//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int find(vector<int> v, int n, int sum, int l)
{

    if (sum == 0)
    {
        cout << l;cout <<"\n" ;
        
        return l;
    }
    if (n == 0)
    {
        return INT_MAX;
    }
    if (v[n] <= sum)
    {
        return min(find(v, n, sum - v[n], l + 1), find(v, n - 1, sum, 0));
    }
    else
    {
        return find(v, n - 1, sum, 0);
    }
}
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);

    for (int i = 1, x; i <= n; ++i)
    {
        cin >> v[i];
    }
    cout << find(v, n, 5, 0);
    return 0;
}