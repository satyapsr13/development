// https://www.codechef.com/APRIL21C/problems/SOCKS1
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b||a==c||c==b){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}
