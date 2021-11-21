//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
bool l = false;
bool isvalid(int i,int j){
    return (i >= 0 and i < 3 and j >= 0 and j < 3);
}
int p;
bool find(vector<vector<int>> v, int i, int j)
{

    if (i == 2 and j == 2)
    {
        return true;
    }
    bool a, b, c, d;
    return  (isvalid(i + 1, j) ? find(v, i + 1, j) : 0) || (isvalid(i -1, j) ? find(v, i -1, j) : 0)||;
}

signed main()
{

    vector<vector<int>> v(3, vector<int> v(3));
    int n = 3;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> v[i][j];
        }
    }
    cout << find(v, 0, 0);

    return 0;
}