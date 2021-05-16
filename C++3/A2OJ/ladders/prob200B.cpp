// https://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    float arr[n], ans;
    for (int i = 0; i < n; ++i)
    {

        cin >> arr[i];
        ans += (arr[i] / 100);
    }
    cout<<(ans/n)*100;

    return 0;
}
