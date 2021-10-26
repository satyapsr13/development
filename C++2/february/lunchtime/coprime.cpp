//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
vector<int> prim;
long long prime[11000000] = {0};
void primep()
{
    long long z = 0;
    // bitset<n> prime;
    int n = 10000001;
    for (long long i = 2; i <= n; i++)
    {
        for (long long f = i * i; f <= n; f += i)
        {
            prime[f] = 1;
        }
    }
    // for (long long i = 2; i < n; i++)
    // {
    //     if (prime[i] != 1)
    //     {

    //         // cout << "\n"
    //         //      << ++z << "  " << i << "\n   ";
    //         prim.push_back(i);
    //     }

    //     /* code */
    // }
    // int o = 1;
    // for (auto s : prim)
    // {
    //     cout << o++ << "->" << s << "\n";
    // }
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    cout << 1000003;cout <<"\n" ;
    return;
    // for (int i = 1000000; i < i + 1; ++i)
    // {
    //     if (!prime[i])
    //     {
    //         cout << i;
    //         cout << "\n";
    //         return;
    //         /* code */
    //     }
    // }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // primep();
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        // db(Test_Cases);
        solved_by_satyapsr13();
    }
    return 0;
}