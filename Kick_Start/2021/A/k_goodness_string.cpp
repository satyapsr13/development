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
        string s;
        int n, k, count = 0;
        cin >> n >> k;
        cin >> s;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - 1 - i])
            {
                count++;
                /* code */
            }
        }
        int ans = 0;
        if (k = count)
        {
            // ans = k - count;
            /* code */
        }
        else if (k > count)
        {
            ans = k - count;
            /* code */
        }
        else
        {
            ans = count - k;
            /* code */
        }

        cout << ans << "\n";
    }

    return 0;
}
