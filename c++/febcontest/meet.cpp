#include <bits/stdc++.h>
using namespace std;
int cmp(string s1, string s2)
{
    int a = s1.substr(5, 1) == "A" ? (stoi(s1.substr(0, 2)) * 60) + stoi(s1.substr(3, 2)) : ((stoi(s1.substr(0, 2)) * 60) + 720 + stoi(s1.substr(3, 2)));

    int b = s2.substr(5, 1) == "A" ? (stoi(s2.substr(0, 2)) * 60) + stoi(s2.substr(3, 2)) : ((stoi(s2.substr(0, 2)) * 60) + 720 + stoi(s2.substr(3, 2)));
    return (b > a ? 1 : 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cout << "enter num";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s1 += s2;
        int n;
        cin >> n;
        string s[2 * n];
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> s[i];
            if (i != 0)
            {
                s[i - 1] += s[i];
            }
        }
        // cin >> s21 >> s22 >> s23 >> s24;
        // s1 += s22;
        // s23 += s24;
        // if (cmp(s21, s1) && cmp(s1, s24))
        // {

        //     cout << 1;
        // }
        // else
        // {
        //     cout << 0;
        // }
    }
    return 0;
}
//                                         6      89    14
// A time is a string in the format "HH:MM AM" or "HH:MM PM"
// (without quotes), where HH and MM are alth of these lines contains two
// space-separated times Li and Ri.

// Example Input
// 2
// 12:01 AM
// 4
// 12:00 AM 11:42 PM
// 12:01 AM 11:59 AM
// 12:30 AM 12:00 PM
// 11:59 AM 11:59 PM
// 04:12 PM
// 5
// 12:00 AM 11:59 PM
// 01:00 PM 04:12 PM
// 04:12 PM 04:12 PM
// 04:12 AM 04:12 AM
// 12:00 PM 11:59 PM
// Example Output
// 1100
// 11101