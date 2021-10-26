// https://codeforces.com/problemset/problem/233/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    if(n<2){
        cout<<-1;
        return 0;
    }
    for ( long long int i = 1; i < n - 1; ++i)
    {
        cout << i + 1 << " ";
    }
    cout << n << " ";
    cout << 1 << " ";
    return 0;
}
