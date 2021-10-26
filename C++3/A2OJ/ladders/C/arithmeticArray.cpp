// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, count = 0, sum = 0;
//     cin >> n;
//     int mx = INT_MIN;
//     vector<int> v(n);
//     v.push_back(INT_MIN);
//     for (int i = 0, x; i < n; ++i)
//     {
//         cin >> v[i];
//     }

//     // int m = 0, n = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         count = 0;

//         for (int j = i; j < n; j++)
//         {
//             if (v[j + 1] - v[j] == v[j + 2] - v[j + 1] and (v[i] - v[i - 1] != v[j + 1] - v[j]))
//             {
//                 count += 3;
//             }
//             else if (v[j + 1] - v[j] == v[j + 2] - v[j + 1])
//             {
//                 count++;
//             }
//             else
//             {

//                 i = j;
//                 // i--;
//                 break;
//             }
//         }
//         mx = max(mx, count);
//     }
//     cout << mx-2;
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     solved_by_satyapsr13();
//     return 0;
// }

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"



using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0, mx = INT_MIN;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    vector<int> v;

    for (int i = 1; i < n; ++i)
    {
        v.push_back(arr[i] - arr[i - 1]);
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
    vector<int> v1;

    v1.push_back(INT_MAX);
    for (int i = 0; i < n; ++i)
    {
        count = 0;

        for (int j = i; j < n; ++j)
        {
            if (v[j] == v[j + 1])
            {
                count++;
                db(count);
            }
            else
            {
                i = j;
                break;
            }
        }
        cout << "\n";
        cout << "\n";
        cout << "\n";
        mx = max(mx, count);
        db(mx);

        // v1.clear();
    }
    cout << "\n";

    cout << mx + 2;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}



























