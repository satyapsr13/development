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
    int size1 = s.size();
    string t;
    cin >> t; //s.find('^');//! int num = stoll(s);
    int size2 = t.size();
    int arr[26]={0};
    for (int i = 0; i < size1; ++i)
    {
        arr[s[i]-'a'] = i;
    }
    for (int i = 0; i < size2; ++i)
    {
        if(arr[t[i] - 'a'] ==0)
        {
            cout << "need tree";cout <<"\n" ;
            return;
        }
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