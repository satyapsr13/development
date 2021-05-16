// https://codeforces.com/problemset/problem/1506/G
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1;
        s2[0] = s1[0];

        for (int i = 0; s1[i]; i++)
        {
            while (s2.size())
            {

                s2[i] = s1[i];
            }

            /* code */
        }
    }
    return 0;
}
