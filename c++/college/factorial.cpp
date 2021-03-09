#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, b = 1;
    cout << "\nenter to calculate factorial\t";
    cin >> i;
    if (i == 0)
    {
        cout << "factorial of your number is\t" << 1;
    }
    else
    {

        for (int j = 1; j <= i; j++)
        {
            b *= j;
        }

        cout << "factorial of your number is\t" << b;
    }

    return 0;
}
