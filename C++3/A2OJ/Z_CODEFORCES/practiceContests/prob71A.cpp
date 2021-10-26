// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
#define mod 1000000007
#define fl(n) for (int i = 0; i < n; i++)
#define sort(a1) sort(a1.begin(), a1.end())
#define ent(n) \
    int n;     \
    cin >> n
using namespace std;
int main(int argc, char const *argv[])
{
    ent(n);
    while (n--)
    {
        string s;
        cin>>s;
        int t=s.length();
        if(t>10){
            cout<<s[0]<<t-2<<s[t-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
        
        /* code */
    }
    

    return 0;
}
