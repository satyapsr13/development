// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */
// #include <bits/stdc++.h>
// //#define int long long int
// #define space ' '
// #define endl "\n"
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, count = 0, sum = 0;
//     cin >> n;
//     vector<int> v(n);
//     bool neg = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         cin >> v[i];
//         if (v[i] < 0)
//         {
//             neg = 1;
//             /* code */
//         }
//     }
//     if (neg)
//     {
//         cout << "No" << endl;
//         /* code */
//     }
//     cout << "Yes\n101\n"
//          << endl;

//     for (int i = 0; i < 101; ++i)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int Test_Cases;
//     cin >> Test_Cases;
//     while (Test_Cases--)
//     {
//         solved_by_satyapsr13();
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        bool am = 0;
        while (n--)
        {
            cin >> x;
            if (x < 0)
                am = 1;
        }
        if (!am)
        {
            cout << "YES\n";
            cout << "101\n";
            for (int i = 100; i > -1; i--)
                cout << i << " ";
            cout << "\n";
        }
        else
            cout << "NO\n";
    }
}