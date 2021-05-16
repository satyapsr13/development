// https://codeforces.com/problemset/problem/258/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s,s2;
    cin >> s;
    bool l=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='0' and l==0){
            l=1;
        }
        else
        {
            s2.push_back(s[i]);
        }
        
        /* code */
    }
    
    // // cout << s[s.length() - 2];
    // // cout<<"\t";

    // if (s[s.length() - 2] == '0')
    // {
    //     // cout << s << "\t";

    //     s.pop_back();
    //     // cout << s << "\t";

    //     s.pop_back();
    //     // cout << s << "\t";

    //     s.push_back('1');
    //     // cout << s << "\t";
    // }
    // else
    // {
    //     cout << s << "\t";

    //     s.pop_back();
    // }
    cout << s2 << "\t";

    return 0;
}
