#include <bits/stdc++.h>
using namespace std;
int max(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    else
    {

        return y;
    }
}
int main(int argc, char const *argv[])
{
    int a[8], sum = 0, best = 0;
    cout << "enter ";
    for (int i = 0; i < 8; ++i)
    {
        cout << "\nenter " << i + 1 << "\t";
        cin >> a[i];
    }
    for (int j = 0; j < 8; ++j)
    {
        sum = max(a[j], sum + a[j]);
        best = max(best, sum );
    }
    cout << best;
    return 0;
}
