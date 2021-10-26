 
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9+7
#define read1(a) cin>>a
#define read2(a,b) cin>>a>>b
#define read3(a,b,c) cin>>a>>b>>c
#define db(x) cout <<  << #x <<   << x << 
using namespace std;
 void solve()
{  int n;
   char ch;
   string s;
// int arr[n];
 
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=8;
    int a[] = {1, 0, 0, 1, 0, 0,0,0},b[]={0};
    for (int i = 0; i < n; ++i)
    {

        if (a[i] == 1 || a[i - 1] == 0)
        {
            // b[i] == 10;
            // cout << b[i] << " ";
            // b[i] = 0;
            i++;

            while (a[i] == 0 || a[i] == 2)
            {
                if (a[i] == 2)
                {
                    // cout << b[i] << " ";
                    // b[i] == 0;
                    i++;
                }

                if (a[i] == 0)
                {
                    b[i] = b[i - 1] + 1;
                    // cout << b[i] << " ";
                    i++;
                }
            }
            // b[i] = i;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << b[i] << " ";
    }
    return 0;
}