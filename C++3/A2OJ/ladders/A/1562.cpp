////Coding-challange (c) Copyright 2021 Satyapsr
//// /*Hii i am flutter developer please contact me for any type of programming problem satyapsr13@semikolan.co */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define pb push_back
#define fi first
#define sc second
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{

    string s;
    cin >> s;
    int len = s.size();
    set<char> st;
    for (int i = 0; i < len; ++i)
    {
        st.insert(s[i]);
    }

    bool arr[10] = {0};
    arr[2] = true;
    arr[3] = true;
    arr[5] = true;
    arr[7] = true;
    char target = '$';
    for (auto it : st)
    {
        if (arr[it - '0'] == false)
        {
            target = it;
            /* code */
        }
    }
    if (target != '$')
    {

        cout << st.size() - 1;
        cout << "\n";
        bool stop = true;
        for (int i = 0; i < len; ++i)
        {
            if (s[i] == target and stop)
            {
                continue;
                stop = false; 
            }
            cout << s[i];
        }
    }

  
  cout <<"\n" ;
  
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