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
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int arr[1003]={0};
    int j = 0;
    for (int i = 1; j < 1001; ++i)
    {
        if (i % 10 == 3 | i % 3 == 0)
        {
            continue;
            /* code */
        }
        else
        {
            arr[++j] = i;
        }
    }
     
    // for (int i = 1; i < 1001; ++i)
    // {
    //     cout << arr[i];cout <<"\n" ;
        
    // }
    // cout <<"\n" ;
    // cout <<"\n" ;
    // cout <<"\n" ;
    
    // cout << arr[999];
    int Test_Cases;
    cin >> Test_Cases;
    int a;
    while (Test_Cases--)
    {
        cin >> a;
        // solved_by_satyapsr13();
        cout << arr[a];
        cout << "\n";
    }
    return 0;
}