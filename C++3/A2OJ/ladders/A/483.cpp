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
    cin >> n >> k;
    if (k - n < 2)
    {
        cout << "-1"
             << "\n";
        return;
        /* code */
    }

    // for (int i = (n + 2) & 1 ? n + 2 : n + 3; i <= k; i += 2)
    // {
    //     // db(i);

    //     for (int j = 3; j < sqrt(i) + 1; j += 2)
    //     {
    //         // db(j);
    //         if (i % j == 0)
    //         {
    //             continue;
    //             /* code */
    //         }
    //         if (j+1 >= sqrt(i))
    //         {
    //             cout << n << " " << n + 1 << " " << i;
    //             cout << "\n";
    //             return;
    //         }
    //     }
    // }
    // if (ans == 0)
    // {
    //     cout << "-1"
    //          << "\n";
    //     return;
    //     /* code */
    // }

    if (n & 1 and k-n==2 )
    {
        if (n + n <= k)
        {

            for (int i = 3; i < k; i+=2)
            {
                if (n % i == 0)
                {
                    cout << n << " " << n + 1 << " " << n + 3;
                    cout << "\n";
                    return;
                    /* code */
                }
            }
            cout <<"-1"<<"\n";  
            return;
            // cout << n << " " << n + 1 << " " << n + n;
            // cout << "\n";
        }
        else
        {
            cout << "-1"
                 << "\n";
            return;
        }
    }
    else
    { if (n&1)
    {
        cout << n + 1 << " " << n + 2 << " " << n+3;
        cout << "\n";
        return;
    }
    
        cout << n << " " << n + 1 << " " << n + 2;
        cout << "\n";
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}