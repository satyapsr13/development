//     Extended Euclid’s Algorithm Euclid’s algorithm can also be extended so that it
//     gives integers x and y for which
//     ax + by = gcd(a, b).
//     For example, when a = 30 and b = 12,
//     30 · 1 + 12 · (−2) = 6

//      1. Bezouts lemma

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

// int gcd(int a, int b)
// {
//     i( b == 0) return b;
//     gcd(a, a % b);
// }

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||

#include <bits/stdc++.h>
#include<tuple>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int x, y, g;
    tie(x, y, g) = gcd(a, b);
    cout << x << " " << y << " " << g << "\n"; // 1 -2 6
    return 0;
}
int gcd(int p,int q){
    if(q==0) return p;
    return( gcd(q,p%q));
}
