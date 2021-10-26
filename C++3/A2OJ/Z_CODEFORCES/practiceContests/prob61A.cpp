// https://codeforces.com/problemset/problem/61/A
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a,b;
    cin>>a>>b;
    // cout<<(stoi^b);
    for(int t=0;t<a.length();++t){
        cout<<(stoi(a.substr(t,1))^stoi(b.substr(t,1)));
    }
    return 0;
}
