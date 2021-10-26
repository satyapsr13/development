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
    int n, sumtime, k, ans = 0, count = 0, sum = 0;
    int iamindian[n], iamrussian[n];
    cin >> n >> sumtime;

    for (int i = 0; i < n; ++i)
    {
        cin >> iamindian[i] >> iamrussian[i];
        sum += iamrussian[i];
    }
    if (sum >= sumtime)
    {
         
        for (int i = 0; i < n; ++i)
        { 
            
        }
        // cout << "YES" << endl;
        // // return;
        // for (int i = 0; i < n; ++i)

        // {
        //     // if (sumtime <= iamrussian[i])
        //     // {
        //     //     cout << sumtime;
        //     //     return;
        //     //     /* code */
        //     // }

        //     // cout << iamrussian[i] << " ";
        //     // sumtime -= iamrussian[i];
        // }

        /* code */
    }
    // else
    // {
    //     cout << "NO";
    //     return;
    // }
    cout << "YES" << endl;
    // return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solved_by_satyapsr13();

    return 0;
}