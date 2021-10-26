//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
// template <size_t r, size_t c>
class graph
{
public:
    char dfs(int (&arr)[r][c], int n, int m)
    {
        for (int i = 0; i < n + 2; ++i)
        {
            for (int j = 0; j < m + 2; ++j)
            {
                cout << arr[i][j] << " ";
                // cin >> arr[i][j];
            }
            cout << "\n";

            // cout << "\n";
        }
    }
};

signed main()
{
    graph g1;

    int n, m;
    cin >> n >> m;
    char arr[n + 2][m + 2];
    memset(arr, '$', sizeof(arr));

    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < m + 1; ++j)
        {
            // cout << arr[i][j] << " ";
            cin >> arr[i][j];
        }
        // cout << "\n";
    }
    vector<int> v;
    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < m + 1; ++j)
        {
            // cout << arr[i][j] << " ";
            if (arr[i][j] == 'A')
            {
                // v.push_back(int(g1.dfs(arr, i, j) - 'A'));

                /* code */
            }
        }
        // cout << "\n";
    }

    // for (int i = 0; i < n + 2; ++i)
    // {
    //     for (int j = 0; j < m + 2; ++j)
    //     {
    //         cout << arr[i][j] << " ";
    //         // cin >> arr[i][j];
    //     }cout <<"\n" ;

    //     // cout << "\n";
    // }

    return 0;
}
 