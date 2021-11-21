#include <bits/stdc++.h>
int sum() { return 0; }
template <typename... Args>
int sum(int a, Args... args) { return a + sum(args...); }
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << sum(4 + 5 + 8);
    return 0;
} 
int lsb(int n)
{
    return log2(n&(-n)) + 1;
}
