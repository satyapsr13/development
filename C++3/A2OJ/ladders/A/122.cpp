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
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(44);
    v.push_back(47);
    v.push_back(74);
    v.push_back(77);

    v.push_back(444);
    v.push_back(744);
    v.push_back(447);
    v.push_back(747);
    v.push_back(474);
    v.push_back(774);
    v.push_back(477);
    v.push_back(777);

    cin >> n;

    for (int i = 0; i < v.size(); ++i)
    {
        if (n % v[i] == 0)
        {
            cout << "YES"
                 << "\n";
            return;
            /* code */
        }
    }
    cout << "NO" << endl;
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