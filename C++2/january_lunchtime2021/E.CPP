#include <bits/stdc++.h>
using namespace std;
int pre[100005], suf[100005];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + (s[i - 1] == '1');
        suf[n] = 0;
        for (int i = n - 1; i >= 0; i--)
            suf[i] = suf[i + 1] + (s[i] == '0');
        int ans = n;
        for (int i = 0; i <= n; i++)
            ans = min(ans, pre[i] + suf[i]);
        printf("%d\n", ans);
    }
}
//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"   
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"
using namespace std;
 void solved_by_satyapsr13()
{  int n,k,ans=0,count=0,sum=0;
   cin>>n;
 
 
 
 
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}