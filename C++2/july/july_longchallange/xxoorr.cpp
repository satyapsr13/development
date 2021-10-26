//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl "\n"
// #define db(x) cout << #x << "\t" << x << "\t\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, sum = 0;
    cin >> n >> k;
    int arr[n];
    //    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // sort(arr, arr + n);

    vector<int> v;
    int mx = *max_element(arr, arr + n);
    // cout << mx << endl;
    int t = log2(mx) + 1;
    // cout << t;
    for (int i = 0; i < t+1; ++i)
    {
        int count = 0;
                // cout << "\n||||||||||||||||||||\n";
        for (int j = 0; j < n; ++j)
        {
            if ((arr[j] & (1 << i)) == (1 << i))
            {
                count++;
                // cout << arr[i]
                // db(i);
                // db(arr[j]);
                // db(count);
                // db(count);
                // db(arr[i]);
                /* code */
            }
        }
        v.push_back(count);
    }

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *it;
    // }
    for (auto it = v.begin(); it < v.end(); it++)
    {
        if (*it >= k)
        {
            // sum += ((*it % k == 0) ? (*it / k) : (*it / k) + 1);
            if (*it % k == 0)
            {
                sum += (*it / k);
                /* code */
            }
            else
            {

                sum += ((*it / k) + 1);
            }

            // db(ceil(*it / k));
            /* code */
        }
        else
        {
            // *it!=0?(sum++):int z ;
            if ((*it == 0))
            {
                /* code */
            }
            else
            {
                sum++;
            }
        }
        // cout << *it << space;
    }
    cout << sum << endl;
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
