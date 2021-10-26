// https://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;
    int x[n], y[n], xx, yy;
    for (int i = 0; i < n; i++)
    {
        cin >> xx >> yy;
        v.push_back(make_pair(xx, yy));

        /* code */
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (s >= v[i].first)
        {
            s += v[i].second;
            if (i == n - 1)
                cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        /* code */
    }

    return 0;
}
