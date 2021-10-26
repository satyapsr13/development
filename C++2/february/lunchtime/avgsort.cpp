//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
bool isdecreasing(vector<int> v)
{
    // bool t;

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] < v[i + 1])
        {
            // t = false;
            return false;
            /* code */
        }
    }
    return true;
}
bool isequalf(vector<int> v)
{
    // bool t;
 for (auto it:v)
    {
        cout << it;
    }
    for (int i = 0; i < v.size(); ++i)
    {
        // db(i);
        if (v[i]!=  v[i + 1] )
        {
            // t = false;
            return false;
            /* code */
        }
    }
    return true;
}

void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;

    vector<int> v;
    int t;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        v.push_back(t);
    }
    
    if (isequalf(v) | isdecreasing(v))
    {
        cout << "NO" << endl;

        /* code */
         return;
    }else
    {
        
    cout << "YES" << endl;
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









