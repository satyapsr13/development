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
    int xo, yo;
    cin >> n>>xo>>yo;
    set<float> slopes;
    int a, b;
    float m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        cin >> b;
        if (a==xo)
        {
            /* code */
        slopes.insert(0.334333333333);
        continue;
        }
        
        m = ((b - yo)*1.0) / (1.0*(a - xo));
        slopes.insert(m);
    }
    cout << slopes.size();
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}

