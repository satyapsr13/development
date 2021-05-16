#include <bits/stdc++.h>
using namespace std;
bool subsequence(string s1, string s2)
{
    if (s1.length() == 0)
    {
        return true;
    }
    int i, j;
    i = j = 0;
    while (i < s1.length() and j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            i++;
        }
        if (s1.length() == i)
        {
            return true;
        }
        j++;

        /* code */
    }
    return false;
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    cout<<subsequence(s1, s2);
    return 0;
}
