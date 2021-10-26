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
    int n, k, ans, count = 0, sum = 0;
    cin >> n >> k;
    int rr[n*k];
    int pp0 = 0;
    int pp1 = 1;
    int arr[2] = {0};
    for (int i = 0; i < n*k; ++i)
    {
        cin >> rr[i];
        // pp0 ^= rr;
        // pp1 ^= rr;
        // cout <<rr
        // << "<-r " << pp0 <<" "<<pp1<< " ";
        cout << rr[i];
        // ++arr[rr];
    }
    // if ((arr[1] & 1) == 0)
    // {
    //     cout << "NO\n";
    //     /* code */
    // }
    // else
    // {
    //     cout << "YES\n";
    // }
    if (pp1 == 1 or pp0 == 1)
    {
        cout << "     YES\n";
        /* code */
    }else
    {
        cout << "   NO\n";
        
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