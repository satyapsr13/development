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
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int arr1[n][m];
    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr1[i][j];
            if (arr1[i][j] == 0)
            {

                for (int k = 0; k < m; ++k)
                {
                    arr[i][k] = 0;
                }
                for (int k = 0; k < n; ++k)
                {
                    arr[k][j] = 0;
                }
                if (arr1[i][j]==-1)
                {
                    arr[i][j] *= (-1);
                    /* code */
                }
                
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] != 0)
            {
                cout << -1 * arr[i][j] << " ";
                /* code */
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
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