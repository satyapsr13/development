// https://codeforces.com/problemset/problem/263/A
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int ans, m[5][5];

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; i < 5; j++)
//         {
//             cin >> m[i][j];
//             if (m[i][j] == 1)
//             {
//                 ans = abs(3 - i) + abs(3 - j);
//             }
//         }

//         /* code */
//     }
//     cout << ans;

//     return 0;
// }

#include <bits/stdc++.h>
int x, i = -1;
int main()
{
    do
    {
        std::cin >> x;
        ++i;
    } while (!x);
    std::cout << abs(2 - i % 5) + abs(2 - i / 5);
}