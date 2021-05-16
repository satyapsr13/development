// https://codeforces.com/problemset/problem/32/B
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string s, s1;
//     cin >> s;
//     for (int t = 0; t < s.length(); ++t)
//     {
//         if (s[t] == '.')
//         {
//             // s1[t] = '2';
//             s1.push_back('0');
//             cout << "\t" << t << "\t";
//             t++;
//         }
//         if (s[t] == '-' && s[t + 1] == '-')
//         {
//             // s1[t] = '2';
//             s1.push_back('2');
//             cout << "\t" << t << "\t";
//             t += 2;
//         }
//         if (s[t] == '-' && s[t + 1] == '.')
//         {
//             // s1[t] = '2';
//             s1.push_back('1');
//             cout << "\t" << t << "\t";
//             t += 2;
//         }
//     }
//     cout << s1;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (char c; cin >> c; cout << (c == '.' ? 0 : (cin >> c, c == '.' ? 1 : 2)))
        ;
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (char c;   cin >> c;   cout << c<<endl);
// // return 0;
// }