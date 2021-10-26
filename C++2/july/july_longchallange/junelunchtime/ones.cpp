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
    //   int arr[n];
    int num;
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        if (n & 1)
        {
            /* code */
            v1.push_back(num);
        }
        else
        {
            v2.push_back(num);
            /* code */
        }
    }
if (n==2)
{
    cout << v2[0] << " " << v1[0];
    /* code */
}else
{
    


    for (int i = 0; i < min(v1.size(), v2.size()); ++i)
    {
        cout << v1[i] << " " << v2[i] << " ";
    }
    for (int i = min(v1.size(), v2.size()); i < max(v1.size(), v2.size()); ++i)
    {
        if (v1.size() > v2.size())
        {
            cout << v1[i] << " ";
            /* code */
        }
        else if (v1.size() < v2.size())
        {
            cout << v2[i] << " ";
        }
    }

}
    cout << "\n";
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