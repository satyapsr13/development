// https: //www.codechef.com/IARCSJUD/problems/BOOKLIST
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
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int t=log10(5),p;

    cin >> t;
    while (t--)
    {
        cin >> p;
        cout << arr[p - 1+count]<<"\n";
        count++;
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases=1;
    // cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}