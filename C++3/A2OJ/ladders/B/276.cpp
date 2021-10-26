//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    string s;
    cin >> s; //s.find('^');//! int num = stoll(s);
    int size = s.size();
    int arr[26] = {0};
    int odd = 0;
    for (int i = 0; i < size; ++i)
    {
        arr[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (arr[i] & 1)
        {
            odd++;
            /* code */
        }
    }
    // cout <<odd<<endl;  
    if (odd&1|odd==0)
    {cout <<"First"<<endl;  
    return;
        /* code */
    }
    cout << "Second"<<endl;
    return;
    return;
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