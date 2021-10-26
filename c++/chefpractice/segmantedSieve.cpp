////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define pb push_back
#define fi first
#define sc second
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void loadPrimes(vector<int> &v)
{
    int highNumber = 50 ;
    vector<bool> isPrime(highNumber , 1);
    // int k = 5;
    for (int i = 2; i < highNumber ; ++i)
    {
        if (isPrime[i])
        {

            for (int j = i * i; j < highNumber ; j += i)
            {
                isPrime[j] = 0;
            }
        }
    
    }

    for (int i = 10; i < highNumber ; ++i)
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
    int n, k, ans = 0;
    cin >> n;
    vector<int> v;
    loadPrimes(v);
    // v.push_back(11);
    for (auto it : v)
    {
        cout << it << " ";
        cout << "\n";
    }
}
signed main()
{

    solved_by_satyapsr13();

    return 0;
}
