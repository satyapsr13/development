//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, a, b, k, ans = 0, count = 0, sum = 0;
    cin >> n >> a >> b;
    if (n == 1)
    {
        cout << "Yes" << endl;
        
    }
    else
    {

        if (n % a == 0)
        {
            cout << "Yes" << endl;
            /* code */
        }
        else
        {
            if (n % b == 1 | n % b == a)
            {
                cout << "Yes" << endl;
            }else
            {
                // db(n % a);
                // db(n % b);
                cout << "No"<<endl;
            }
            
        }
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