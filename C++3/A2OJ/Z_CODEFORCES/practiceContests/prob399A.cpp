// https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    if(s.length()==1) {
        cout<<s;
        return 0;
    }
    vector<int> v;
    for (int i = 0; i < s.length(); ++i)
    {
        if (isdigit(s[i]))
        {
            v.push_back(stoi(s.substr(i, 1)));
        }
        else
        {
            v.push_back(4);
        }

        /* code */
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < (s.length()); ++i)
    {
        if (v[i] == 4)
            break;

        cout << v[i];
        if (v[i+1]!=4)
            cout << "+";
        /* code */
    }
    return 0;
}