// https://www.codechef.com/problems/FLOW006
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {int sum=0;
        string s;
        cin>>s;
        for(int i=0;s[i];++i){
            sum+=stoi(s.substr(i,1));
        }
        cout<<sum<<endl;
    }
    return 0;
}
