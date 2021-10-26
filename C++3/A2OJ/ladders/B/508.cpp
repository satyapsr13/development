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
int swapme(String s, int d)
{
}
int maxevenno(string s)
{
    vector<string> sp;
    // string ss;
    for (int i = 0; i < s.size(); ++i)
    {
        if (!(stoi(s.substr(i, 1)) & 1))
        {
            sp.push_back(s[i]);
        }
    }

    sort(sp.begin(), sp.end());
    return stoi(sp.substr(sp.end() - 1, 1));
}
void solved_by_satyapsr13()
{
    string s;
    cin >> s; //s.find('^');//! int num = stoll(s);
    int size = s.size();
    // int ans = swapme(s,maxevenno(s));
    int index = -1;
    string j = s;

    sort(j.begin(), j.end());

    for (int i = int(j.end()) - 1; i >=0; --i)
    {
        if (!(stoi(j.substr(i, 1)) & 1))
        {
            index = i;
            break;
            /* code */
        }
    }
    if (index == -1)
    {
        cout << "-1" << endl;
        return;
        /* code */
    }else
    {
         
        for (int i = 0; i < s.size(); ++i)
        {
         if (j[index]==s[i])
         {
             index = i;
             break;
             /* code */
         }
            
        }
        swap(s[index], s[s.size() - 1]);
    }
    cout << s;cout <<"\n" ;
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