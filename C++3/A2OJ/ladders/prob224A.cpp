// https://codeforces.com/problemset/problem/224/A
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = pow((pow(((a*b)/c),2)+(pow(((a*b)/c),2))+(pow(((a*b)/c),2))+(2*(a+b+c))), 1 / 2)));
    cout<< pow(ans,1/2);
    return 0;
}
