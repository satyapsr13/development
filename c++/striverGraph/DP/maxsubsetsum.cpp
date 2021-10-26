// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cerr << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
int n;

vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
int findMax(int n)
{
    if (n == -1)
    {
        return 0;
    }

    // db(findMax(sum + v[n - 1], n - 1));

    return max(v[n] + findMax(n - 1), findMax(n - 1));
    // return sum+ findMax(sum + v[n - 1], n - 1) ;
}
signed main()
{

    cout << findMax(8);
    cout << "\n";

    cout << accumulate(v.begin(), v.end(), 0);
    return 0;
}