#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, score = 0;
        cin >> n >> k;
        int a[k];
        string s[n];

        for (int i = 0; i < k; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < k; ++j)
            {
                if (stoi(s[i].substr(j,  1)) == 1)
                {
                    score += a[j];
                }
            }
            cout << score<<"\n";
            score = 0;
        }
    }
    return 0;
}
