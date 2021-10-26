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

void loadPrimes(vector<int> &v, int tt, vector<bool> &isPrime)
{

    for (int i = 2; i < tt; ++i)
    {
        if (isPrime[i])
        {

            for (int j = i * i; j < tt; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    for (int i = 2; i < tt; ++i)
    {
        if (isPrime[i])
        {
            v.push_back(i);
            /* code */
        }
    }
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;

    if (k == 0)
    {
        cout << "YES"
             << "\n";
        return;
        /* code */
    }

    vector<int> v;
    vector<bool> isPrime(1005, 1);
    loadPrimes(v, n + 1, isPrime);

    for (int i = 0; i < v.size() - 1; ++i)
    {

        if (isPrime[v[i] + v[i + 1] + 1] == 1 and v[i] + v[i + 1] + 1 <= n)
        {
            ans++;
          
            if (ans == k)
            {
                cout << "YES"
                     << "\n";
                return;
            }
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