#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, n;
        cin >> n >> k;
        if (k >= n)
        {
            if (k % n == 0)
            {
                cout << k / n;
            }
            else
            {
                cout << k / n + 1;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (n < k * j)
                {
                    cout << j;
                    break;
                }
            }
        }
    }

    return 0;
}
