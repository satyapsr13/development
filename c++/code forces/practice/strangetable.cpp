#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        int z;
        z=((m*(x%m))+(int(x/n))+1 );
       cout<<"ans"<<z<<endl;
    }
    return 0;
}
