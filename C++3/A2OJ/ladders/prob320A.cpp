// https://codeforces.com/problemset/problem/320/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    long long i = s.size();
    long long p = i;
    for (int t = 0; t < i; ++t)
    {
        if (s[t] == '1' && s[t + 1] == '4' && s[t + 2] == '4')
        {
            t += 3;
            p -= 3;
        }
        if (s[t] == '1' && s[t + 2] == '4')
        {
            i += 2;
            p -= 2;
        }
        if (s[t] == '1')
        {
            t += 1;
            p -= 1;
        }
    }
    if (p==0)
    {cout<<"yes";
        /* code */
    }else
    {
        cout<<"no";
    }
    
    
    return 0;
}
