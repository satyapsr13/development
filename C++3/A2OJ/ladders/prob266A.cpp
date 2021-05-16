// https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, count = 0;
    cin >> n;
    string s;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        s.push_back(c);

        /* code */
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            count++;
        }
        /* code */
    }
    cout << count;

    return 0;
}
