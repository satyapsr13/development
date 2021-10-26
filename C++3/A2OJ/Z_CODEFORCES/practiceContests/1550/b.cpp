//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, a, b, k, ans = 0, count = 0, sum = 0;
    cin >> n >> a >> b;
    // int arr[n];
    string s;
    cin >> s; //s.find('^');
    int size = s.size();
    //memset(arr, 0, sizeof(arr));

    if (a <= 0||(a>0 and b>=0))
    {
        cout << size * (b + a);

        cout <<"\n" ;
    }
    else
    {
       
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