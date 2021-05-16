// --------------------------# hashing--------------------------------
// https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
#define mod 1000000007
#define fl(n) for (int i = 0; i < n; i++)

#define sort(a1) sort(a1.begin(), a1.end())
using namespace std;
int main(int argc, char const *argv[])
{

    long long int a = 2, hash = 0, hash2 = 0;
    string a1, a2, both, c;
    cin >> a1 >> a2 >> c;
    a1 += a2;
    sort(a1);
    sort(c);
    int size = a1.length();
    if (size != c.length())
    {
        cout << "NO";

        return 0;
    }
    if (a1 == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // cout<<int(a1[0]);
    // for (int i = 0; both[i]; i++)
    // fl(both[i])
    // {
    //     // cout<<"\n"<<hash<<"\t";
    //     hash+=int(both[size-i-1])+pow(a,i);
    //     // cout<<hash2<<"\t";
    //     hash2+=int(c[size-i-1])+pow(a,i);

    //     /* code */
    // }
    // if(hash%mod==hash2%mod)
    // {
    //     cout<<"YES";

    // }
    // else
    // {
    //     cout<<"NO";
    // }

    return 0;
}

// #include<bits/stdc++.h>
// main(){std::string a,b,c;std::cin>>a>>b>>c;a+=b;sort(a.begin(),a.end());sort(c.begin(),c.end());(a==c)?puts("YES"):puts("NO");}