#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j = 0, g = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == s[i + 1])
        {
            ++j;
        }
        else
        {
            j = 0;
        }
        if (g < j)
        {
            g = j;
        }
    }
    cout << g+1;
    return 0;
}
