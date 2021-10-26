// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; s2[i]; i++)
    {
        /* code */

        if (isupper(s2[i]))
        {
            s2[i] += 32;
            /* code */
        }
        if (isupper(s1[i]))
        {
            s1[i] += 32;
            /* code */
        }
    }
    if (s1==s2)
    {cout<<"0";
        /* code */
    }
    
    if (s1 > s2)
    {
        cout << "1";
    }
    if (s2 > s1)
    {
        cout << "-1";
    }

    return 0;
}
