//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, sum1 = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    int arr1[n];
    int arr2[n];
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    for (int i = 0; i < n; ++i)
    {

        cin >> arr2[i];
        sum += arr2[i];
    }
    if (sum != sum1)
    {
        cout << -1;
        cout << "\n";
        return;
        /* code */
    }

    int diff;
    for (int i = 0; i < n; ++i)
    {
        if (arr1[i] > arr2[i])
        {
            diff = arr1[i] - arr2[i];

            for (int j = 0; j < diff; ++j)
            {

                v1.push_back(i+1);
            }
            continue;
        }
        if (arr1[i] < arr2[i])
        {
            diff = arr2[i] - arr1[i];

            for (int j = 0; j < diff; ++j)
            {

                v2.push_back(i+1);
            }
            continue;
        }
    }
    if (v1.empty())
    {
        cout << 0;
        cout << "\n";
        return;
        /* code */
    }
    cout << v1.size();cout <<"\n" ;
    
    for (int i = 0; i < v1.size(); ++i)
    {
        cout << v1[i] << " " << v2[i];cout <<"\n" ;
        
    }
}
signed main()
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