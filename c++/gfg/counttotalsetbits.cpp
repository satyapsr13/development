#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= t+1; i = i * 2)
        {
            if (i & t+1)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
