// https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    set<int> s;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        s.insert(a[i]);
    }
    if(s.size() & 1){
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    
    return 0;
}
