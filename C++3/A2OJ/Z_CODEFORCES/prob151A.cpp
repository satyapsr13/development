// https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, k, l, c, d, p, nl, np;
//     cin >> n >> k >> l >> c >> d >> p >> nl >> np;
//     int ans = min(((k * l) / nl), (c * d), (p / np));
//     cout << ans;
//     // cout << ((k = k * l / m) < (p /= q, c *= d) ? k < p ? k : p : c < p ? c
//     //                                                                          : p) /
//     //                  n;

// return 0;
// }
#include <iostream>
int c, d, k, l, m, n, p, q;
main()
{
    std::cin >> n >> k >> l >> c >> d >> p >> m >> q;
    std::cout << ((k = k * l / m) < (p /= q, c *= d) ? k < p ? k : p : c < p ? c
                                                                             : p) /
                     n;
}