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
    string s, k;
    cin >> s >> k;
    int size_s = s.size();
    int size_k = k.size();
    int pos = 1;
    int j = 0;
    for (int i = 0; i < k.size  (); ++i)
    {
        if (s[j++] == k[i])
        {
            pos++;
            /* code */
        }else
        {
            j--;
        }
        
    }
    cout << pos << endl;
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