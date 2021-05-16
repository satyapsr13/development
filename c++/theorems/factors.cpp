#include <bits/stdc++.h>
using namespace std;

void facto(int n)
{
    vector<int> f;
    for (int x = 2; x * x <= n; x++)
    {
        while (n % x == 0)
        {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 1)
        f.push_back(n);
    // for (int i = 0; i < f.size(); i++)
    // {
    //     cout<<i+1<<"->\t" << f[i] << "\n";
    // }
    for(auto s : f){
        cout<<s;
    }
    // return f;
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
     facto(t);

    return 0;
}