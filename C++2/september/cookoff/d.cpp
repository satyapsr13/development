// ////Coding-challange (c) Copyright 2021 Satyapsr
// //// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

// #include <bits/stdc++.h>
// #define int long long int
// #define count_1 __builtin_popcountll
// #define pii pair<int, int>
// #define pb push_back
// #define fi first
// #define sc second
// #define vpii vector<pair<int, int>>
// #define endl "\n"
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
//     cin >> n >> k;
//     string s;
//     cin >> s;

//     bool stop = 0;
//     int index = -1;
//     int j = -1;
//     for (int i = 0; i < n; ++i)
//     {
//         if (s[i] == '1')
//         {
//             j = i;
//             break;
//             /* code */
//         }
//     }
//     if (j == -1)
//     {
//         cout << "-1"
//              << "\n";
//         return;
//         /* code */
//     }
//     db(j);
//     for (int i = j; i < n; ++i)
//     {
//         if (stop == s[i] - '0')
//         {
//             index = i;
//             count++;
//             stop == 0 ? stop = 1 : stop = 0;
//         }
//     }
//     db(count);
//     if (k > count || index == -1)
//     {
//         cout << "-1"
//              << "\n";
//         return;
//         /* code */
//     }
//     count = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         if (stop == s[i] - '0')
//         {
//             // index = i;
//             count++;
//             stop == 0 ? stop = 1 : stop = 0;
//         }
//         if (count==k)
//         {
//             cout << i + 1;cout <<"\n" ;
//             return;
//             /* code */
//         }

//     }
//     cout << index + 1;
//     cout << "\n";

//     // cout << count;
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

////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define pii pair<int, int>
#define pb push_back
#define fi first
#define sc second 

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n >> k;
    string s;
    string p;
    // s.push_back(0);
    cin >> p;
    s = '0' + p;
    // cout << s;
    vector<pair<int, int>> vp;
    // vp.push_back(make_pair(0, -1));

    for (int i = 0; i < n; ++i)
    {
        
        if (s[i]!=s[1+1])
        {
        db(i);
            // continue;
        vp.push_back(make_pair(s[i+1] - '0', i ));
        }
    }
    for (auto it : vp)
    {
        cout << it.first << " ";
        cout << it.second << " ";
        cout << "\n";
    }

    if (vp.size() < k)
    {
        cout << "-1"
             << "\n";
        return; 
    }
    if (vp.size() >= 3 and k>=2 )
    {

        for (int i = vp.size()-1; i >= 0; --i)
        {
            if (vp[i].first==1)
            {
                cout << vp[i].second;cout <<"\n" ;
                return;
            }
            
        }
    }
    if (vp.size() >= 2 and k==1)
    {
        for (int i = vp.size() - 1; i >= 0; --i)
        {
            if (vp[i].first == 0)
            {
                cout << vp[i].second;
                cout << "\n";
                return;
            }
        }
        /* code */
    }

    // cout << vp[k + 1].second;
    // cout << "\n";
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



////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */


#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int ,int >
#define pb push_back
#define fi first
#define sc second
#define vpii vector<pair<int ,int >>
#define endl "\n"   
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"
