#include <bits/stdc++.h>
#define db(x) cout << "\n" \
                   << #x << "\t" << x << "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        int ap = 3, p = 1;
        if (n < 3)
        {
            cout << n << " ";
            for (int i = n; i >=1; i--)
            {
                cout << i << " ";
                /* code */
            }
            cout << "\n";
        }
        else
        {

            while (!(n < (ap + (p - 1) * 4)))
            {
                p++;
                // db(p);
            }
            p--;
            int ans = n - (ap + ((p - 1) * 4));
            cout << ans << " ";
            for (int i =(ap + ((p - 1) * 4))+ans; i >= (ap + ((p - 1) * 4))+1; i--)
            {
            cout<<i<<" ";
            }
            cout<<"\n";
            
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}