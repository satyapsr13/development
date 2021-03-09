#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, p = 0;
    cin >> a >> b;
    int c[a];
    for (int i = 0; i < a; ++i)
    {
        cin >> c[i];
    }
    for (int i = a; i > 0; --i)
    {
        if (b == c[i - 1])
        {
            p = 1;
            cout << i;
            break;
        }
    }
    if (p == 0)
    {
        cout<< -1;
    }

    return 0;
}
