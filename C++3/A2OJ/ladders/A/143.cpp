//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int r1, r2;
    int c1, c2;
    int d1, d2;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    if (r1 > 18 || r2 > 18 || c2 > 18 || d2 > 18 || c1 > 18 || d1 > 18)
    {
        cout << -1;
        return;
        /* code */
    }
    else
    {

        for (int i = 1; i < 10; ++i)
        {

            for (int j = 1; j < 10; ++j)
            {

                for (int k = 1; k < 10; ++k)
                {

                    for (int l = 1; l < 10; ++l)
                    {
                        /* code */

                        if (i != j and i != k and i != l and j != k and j != l and k != l)
                        {
                            if (i+j==r1 and j+l==c2 and j+k==d2 and i+k==c1 and k+l ==r2 and i+l==d1)
                            {
                                cout << i << " " << j;cout <<"\n" ;
                                cout << k << " " << l;
                                return;
                                /* code */
                            }
                            
                        }
                    }
                }
            }
        }
        cout << -1;
        return;
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

// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// #define int long long int
// #define endl "\n"
// #define google(n) cout << "Case #1: " << n
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// void solved_by_satyapsr13()
// {
//     string s = "abc";
//     // string s = 'abcdefg';
//     do
//     {
//         cout << s;
//         cout << "\n";
//         /* code */
//     } while (next_permutation(s.begin(), s.end()));
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int Test_Cases = 1;
//     while (Test_Cases--)
//     {
//         solved_by_satyapsr13();
//     }
//     return 0;
// }