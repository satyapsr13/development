// https://codeforces.com/problemset/problem/133/A
// #include <bits/stdc++.h>
// #define out(a) cout << a
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string s;
//     cin >> s;
//     // for(int i=0;s[i];++i)
//     // {
//     // if(s[i]=='H'){
//     //     cout<<"YES";
//     //     return 0;
//     // }
//     switch (s[0])
//     {
//     case 'H':
//     {
//         cout << "YES";
//         return 0;
//     }
//     case 'Q':
//     {
//         cout << "YES";
//         return 0;
//     }
//     case '9':
//     {
//         cout << "YES";
//         return 0;
//     }
//     case '+':
//     {
//         cout << "YES";
//         return 0;
//     }
//     default:
//     {
//         //   i==(s.length()-1)?cout<<"NO":;}
//         // if (i == (s.length() - 1))
//         // {
//         cout << "NO";
//         // }
//     }

//         //    }
//     }
//     return 0;
// }

#include <cstdio>
#define ent(n)  int n;cin>>n
#define show(n) cout<<n
#define fl(i,n) for (int i = 0; i < n; i++)
#define sortarr(a) sort(a,a)
#define sortv(a) sort(a.begin(),a.end())
#define testcase(t) int t;cin>>t;while(t--)
#define debug(x) cout<<#x<<" = "<<x

main()
{
    int a = 0;
    for (char c; c != '\n'; c = getchar())
    {
        if (c == 'H' || c == 'Q' || c == '9')
            a = 1;
    }
    puts(a == 1 ? "YES" : "NO");
}