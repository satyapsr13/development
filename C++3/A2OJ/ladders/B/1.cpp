//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(23);
    v.push_back(23);
    v.push_back(23);
    v.push_back(23);
    v.push_back(234);
    v.push_back(2345);
    v.push_back(23456);
    sort(v.begin(), v.end(), [&](int a, int b)
         { return a % 10 == 3; });

    for (auto it : v)
    {
        cout << it << " ";
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}