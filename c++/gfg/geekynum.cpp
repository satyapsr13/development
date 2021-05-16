// https://practice.geeksforgeeks.org/problems/geek-onacci-number/0/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int sum1=a,sum2=b,sum3=c,sum4=0;
        // cout<< " ans"<<;
        for(int i=0;i<n-3;++i){
            sum4=sum3+sum1+sum2;
            sum1=sum2;
            sum2=sum3;
            sum3=sum4;
        }
      cout<<sum3<<endl;

    }
    return 0;
}
