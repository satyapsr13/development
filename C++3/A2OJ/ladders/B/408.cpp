//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define float double
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    string s, p;
    cin >> s >> p;
    int arr1[26] = {0};
    int arr2[26] = {0};
    // set<char> sp;
    for (int i = 0; i < s.size(); ++i)
    {
        arr1[s[i] - 'a']++;
    }
    for (int i = 0; i < p.size(); ++i)
    {
        arr2[p[i] - 'a']++;
        // sp.insert(s[i]);
    }
    int sum = 0;

    for (int i = 0; i < 26; ++i)
    {if (arr1[i]==0 and arr2[i]>0)
    {
        /* code */
        cout << -1;
        return;
    }
    
        sum += min(arr1[i], arr2[i]);
    }
    if (sum==0)
    {
        cout << -1;
        return;
        /* code */
    }
    
    cout << sum;
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