//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int find(vector<int> len, vector<int> p, int n, int ans, int rem)
{
    if (n == 0 || rem == 0)
    {
        return ans;
    }
    if (len[n] <= rem)
    {
        return max(find(len, p, n, ans + p[n], rem - len[n]), find(len, p, n - 1, ans, rem));
    }
    else
    {
        return find(len, p, n - 1, ans, rem);
    }
}

signed main()
{
    vector<int> length;
    int n;
    cin >> n;
    length.push_back(0);
    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        length.push_back(x);
    }
    vector<int> price;
    price.push_back(0);

    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        price.push_back(x);
    }
    cout << find(length, price, n, 0, 10);

    return 0;
}