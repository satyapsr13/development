#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int r=0;
    
    int m;
    if(a>b) m=a;
    else
    {
        m=b;
    }
    
    for(int i=1;i<=m;i=i*2)
    {
        if(i & (a^b)){
            // cout<<i<<"\t";
            r++;
        }
        else{

        }
    }
    cout<<r;
    return 0;
}
