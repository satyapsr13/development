// https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    int c = 0;
    cin >> s;
    if (!s.length() == 4 || !s.length() == 7)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (stoi(s.substr(i,1)) == 4 || stoi(s.substr(i,1)) == 7)
            {
                c++;
            }
        }
        if (c == 4 || c == 7)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}
