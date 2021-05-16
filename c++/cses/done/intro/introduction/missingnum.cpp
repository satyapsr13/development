#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,ip;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> ip;
        v.push_back(ip);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n ; ++i)
    {
        if (i+1 != v[i])
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}
