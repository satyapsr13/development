//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl "\n"
#define db(x) cout << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;

    int arr[2*n];
    //  memset(arr, 0, sizeof(arr));

    int even = 0;
    int odd = 0;
    for (int i = 0; i < 2*n; ++i)
    {
        cin >> arr[i];
        if (arr[i] & 1)
        {
            odd++;

            /* code */
        }
        else
        {
            even++;
        }
    }
    if (odd == even)
    {
        cout << "Yes" << endl;
        /* code */
    }
    else
    {
        cout << "No" << endl;
    }
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