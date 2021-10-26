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
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int arr[n];
    //memset(arr, 0, sizeof(arr));
    if (n < 4)
    {
        cout << "no" << endl;
        /* code */
    }
    else
    {

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < n-3; ++j)
        {
            int p1 = min(arr[j], arr[j+1]);
            int p2 = max(arr[j], arr[j+1]);

            for (int i = 2; i < n - 1; ++i)
            {

                int p3 = min(arr[i], arr[i + 1]);
                int p4 = max(arr[i], arr[i + 1]);

                if ((p1 < p3 and (p3 < p2 and p2 < p4)) || ((p3 < p1 and p1 < p4) and p4 < p2))
                {
                    cout << "yes" << endl;
                    return;
                    /* code */
                }
            }
        }
        cout << "no" << endl;
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