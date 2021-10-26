// https://codeforces.com/problemset/problem/34/A
#include <bits/stdc++.h>
#define debug(x) cout<<"\n"<<#x<<"\t"<<x<<"\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int a;
    vector<pair<int, int>> p;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        p.push_back(make_pair(a, i + 1));
    }
    sort(p.begin(), p.end());
    int diff = p[1].first - p[0].first, index=0;
    for (int i = 1; i < t - 1; i++)
    {
        if (p[i + 1].first - p[i].first < diff)
        {     debug(p[i + 1].first - p[i].first);
            diff = p[i + 1].first - p[i].first;
            index = i;
        }
    }
    cout << p[index + 1].second << " " << p[index].second;
    return 0;
}
