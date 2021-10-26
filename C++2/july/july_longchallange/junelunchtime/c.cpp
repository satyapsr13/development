#include <bits/stdc++.h>

using namespace std;
void solv()
{
    string s, ans;
    cin >> s;
    int size = s.size();
    if (((s[0] == '<' and s[1] == '/') and s[size - 1] == '>')and s.size()>3)
    {
        for (int i = 2; i < size - 1; ++i)
        {
            if ((!islower(s[i])) and !isdigit(s[i]))
            {
                // cout <<s[i]<<i<<" ";
                ans = "Error\n";
                break;
            }
            else
            {
                ans = "Success\n";
                // break;
            }
        }
    }
    else
    {
        ans = "Error\n";
    }
    // if ((s[0] == '<' and s[1] == '/') and s[size - 1] == '>')
    // {

    //     for (int i = 2; i < size - 1; ++i)
    //     {
    //         if ((!islower(s[i])) and  !isdigit(s[i]))
    //         {
    //             cout <<s[i]<<i<<" ";
    //             ans = "SUCCESS\n";
    //             break;
    //         }
    //         else
    //         {
    //             ans = "Error\n";
    //             break;
    //         }

    //     }
    // }
    // else
    // {
    //     ans = "Error\n";
    // }
    cout << ans;
}
signed main()
{

    int T;
    cin >> T;
    while (T--)
    {
        solv();
    }
    return 0;
}