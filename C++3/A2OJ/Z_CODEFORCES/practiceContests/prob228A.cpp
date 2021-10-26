// https://codeforces.com/problemset/problem/228/A
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    set<int>s;
    int a;

    for (int i = 0; i < 4; i++)
    {cin>>a;
        s.insert(a);
    }
    cout<<4-s.size();
    return 0;
}
