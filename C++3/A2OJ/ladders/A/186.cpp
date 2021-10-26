//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
    {
        /* code */
        cout << "NO" << endl;
        return;
    }
    else
    {
        int arr1[26], arr2[26];
        memset(arr1, 0, sizeof(arr1));
        memset(arr2, 0, sizeof(arr2));
        for (int i = 0; i < s1.size(); ++i)
        {
            arr1[s1[i] - 'a']++;
            arr2[s2[i] - 'a']++;
        }
        // for (auto it : arr1)
        // {
        //     cout << it;
        // }
        // cout << "\n";
        // for (auto it : arr2)
        // {
        //     cout << it;
        // }
        // cout <<"\n" ;

        for (int i = 0; i < 26; ++i)
        {
            if (arr1[i] != arr2[i])
            {
                cout << "NO" << endl;
                return;
                /* code */
            }
        }
        int count = 0;
        for (int i = 0; i < s1.size(); ++i)
        {
            if (s1[i] != s2[i])
            {
                count++;
                /* code */
            }
            if (count > 2)
            {
                cout << "NO" << endl;
                return;
                /* code */
            }
        }
        cout << "YES" << endl;
    }
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