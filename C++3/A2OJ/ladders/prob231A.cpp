
// https://codeforces.com/problemset/problem/231/A
// 30	Effective Approach	Codeforces	
#include<bits/stdc++.h>
#define enter(n)  int n;cin>>n
#define show(n) cout<<n
#define fl(i,n) for (int i = 0; i < n; i++)
#define sortarr(a) sort(a,a)
#define sortv(a) sort(a.begin(),a.end())
#define testcase(t) int t;cin>>t;while(t--)
#define debug(x) cout<<#x<<" = "<<x

using namespace std;
int main(int argc, char const *argv[])
{
    enter(n);
    int count=0;
    while (n--)
    {  int a,sum=0;
        for (int  i = 0; i < 3; i++)
        { 
            cin>>a;
            sum+=a;
            
        }
        if(sum>1) count++;
        /* code */
    }
    cout<<count;
    
    return 0;
}
