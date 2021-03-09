#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cout << "ienter\n";
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cout << "ienter\tstring\n";
        string s;
        cin >> s;
        int l = s.size(); //length of string
        int p = l, count = 0, flag1 = 0, flag2 = 0;
        for (int j = 0; j < l; ++j)
        {
            if (s[j] == s[--p])
            {
                flag1 = 1;
                if (j == p || s[j] == s[p + 1])
                {
                    if (flag2 == 1)
                    {
                        ++count;
                    }
                    l = j;
                }
            }
            else
            {
                flag2 = 1;
                p = l;
                if (flag1 == 1)
                {
                    j--;
                }
                flag1 = 0;
                if (l != 0)
                {
                    if (j == (l - 2))
                    {
                        j = 0;
                        l--;
                        ++count;
                    }
                }
            }
        }
        cout << "no. of times=" << count << "\n";
    }

    return 0;
}