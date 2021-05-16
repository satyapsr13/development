// https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int s1 = 0, s2 = 0, s3 = 0, x[n], y[n], z[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i] >> z[i];
        s1 += x[i];
        s2 += y[i];
        s3 += z[i];
    }
    // cout << s1 << "\t" << s2 << "\t" << s3 << "\n";
    if (s1 == 0 && s2 == 0 && s3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
// #include <iostream>
// int n, a, b, c, d, e, f;
// main()
// {
//     std::cin >> n;
//     while (n--)
//     {
//         std::cin >> a >> b >> c, d += a, e += b, f += c;
//     }
//     std::cout << (d | e | f ? "NO" : "YES");
// }