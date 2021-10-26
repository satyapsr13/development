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

    int arr[100001];
    int arr2[100001];
    int arr3[100001] = {0};
    int arr1[n];
    if (n == 1)
    {
        cin >> k;
        cout << "1" << endl;
        // return;
        cout << k << " " << 0;
        return;
        /* code */
    }
    else
    {

        memset(arr, -1, sizeof(arr));
        for (int i = 0; i < n; ++i)
        {
            cin >> arr1[i];
            if (arr[arr1[i]] == -1)
            {
                arr3[arr1[i]]++;
                arr2[arr1[i]] = i;
                arr[arr1[i]] = i;
            }
            else if (arr[arr1[i]] == arr2[arr1[i]])
            {
                arr[arr1[i]] = i - arr[arr1[i]];
            }
        }

        // for (int i = 0; i < n; ++i)
        // {
        //     cout << arr1[i] << " " << arr[arr1[i]];
        //     cout << "\n";
        // }
        set<pair<int, int>> st;

        for (int i = 0; i < n; ++i)
        {
            if (arr3[arr1[i]] == 1)
            {
                /* code */
                st.insert(make_pair(arr1[i], 0));
                continue;
            }

            st.insert(make_pair(arr1[i], arr[arr1[i]]));
        }
        cout << st.size();cout <<"\n" ;
        
        for (auto it : st)
        {
            cout << it.first << " " << it.second;
            cout << "\n";
        }
    }
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
