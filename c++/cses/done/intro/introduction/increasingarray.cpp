#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long long i;
    cin >> i;
    long long a[i];
    for (long long j = 0; j < i; j++)
    {
        cin >> a[j];
    }
    long long c = 0;
    for (long long j = 0; j < i; j++)
    {long long z=j+1;
        if (a[j] > a[z])
        {

            while (a[z] != a[j])
            {
                a[z]++;
                c++;
            }
        }
        /* code */
    }
    cout<<c;
    

    return 0;
}
