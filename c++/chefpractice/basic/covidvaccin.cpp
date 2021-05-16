#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, d;
    cin >> n >> d;
    int a[n], rsk = 0, nrsk = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 9 || a[i] >= 80)
        {
            rsk++;
        }
        else
            nrsk++;
        /* code */
    }
      if(nrsk%d!=0){
          nrsk++;
      }
      if(rsk%d!=0){
          rsk++;
      }
    cout << ((rsk) / d )+ ((nrsk) / d) << endl;
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
