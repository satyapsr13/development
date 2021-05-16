#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int j = 0;
void find_permutation(string s1, int l, int r)
{
    if (l == r)
    {
        cout << ++j << "\t" << s1 << "\n";
        Sleep(500);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s1[l], s1[i]);
            // cout<<"\t" <<j<<"\t"<< s1<<"\n";
            find_permutation(s1, l + 1, r);
            swap(s1[l], s1[i]);
            // cout<<"\t" <<j<<"\t"<< s1<<"\n";
        }
    }
}
int main()
{
    string s;
    cin >> s;
    find_permutation(s, 0, (s.size()) - 1);
    return 0;
}

// VECTOR IMPLEMENTATION
// double cp(int a1, int a2, int b1, int b2, int c1, int c2)
// {
//     return (((c2 - b2) * (b1 - a1)) - ((c1 - b1) * (b2 - a2)));
// }

//          __             __        ____                          __
//    _____/ /_____ ______/ /_      / __/________  ____ ___       / /_  ___  ________
//   / ___/ __/ __ `/ ___/ __/     / /_/ ___/ __ \/ __ `__ \     / __ \/ _ \/ ___/ _ \
//  (__  ) /_/ /_/ / /  / /_      / __/ /  / /_/ / / / / / /    / / / /  __/ /  /  __/
// /____/\__/\__,_/_/   \__/     /_/ /_/   \____/_/ /_/ /_/    /_/ /_/\___/_/   \___/
