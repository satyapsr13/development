//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl 'n'

using namespace std;
void solved_by_satyapsr13()
{
    int n, q, ans = 0, count = 0, sum = 0;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int tt;
    while (q--)
    {
        cin >> tt;
        if (tt == 1)
        {
            int a, b, c;
            cin >> a >> b >> c;

            for (int i = a - 1; i <= b - 1; ++i)
            {
                arr[i] += ((c + i + 1 - a) * (c + i + 1 - a));
            }
            /* code */
        }
        else
        {
            int a;
            cin >> a;
            cout << arr[a - 1] << "\n";
        }
    }

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << arr[i];
    // }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl 'n'

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;

    
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