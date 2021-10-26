// https://codeforces.com/problemset/problem/41/A
//          __             __        ____                          __
//    _____/ /_____ ______/ /_      / __/________  ____ ___       / /_  ___  ________
//   / ___/ __/ __ `/ ___/ __/     / /_/ ___/ __ \/ __ `__ \     / __ \/ _ \/ ___/ _ \
//  (__  ) /_/ /_/ / /  / /_      / __/ /  / /_/ / / / / / /    / / / /  __/ /  /  __/
// /____/\__/\__,_/_/   \__/     /_/ /_/   \____/_/ /_/ /_/    /_/ /_/\___/_/   \___/
#include <bits/stdc++.h>
const double pi = 3.1415926535897932384626433832795;
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;cin>>t;while (t--)
    // {
    //     /* code */
    // }
    string s1, s2, s3;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[s1.size() - 1 - i])
        {
            if (i == s1.size() - 1)
            {
                cout << "YES\n";
                /* code */
            }

            /* code */
        }
        else
        {
            cout << "NO";
            break;
        }

        /* code */
    }

    return 0;
}
