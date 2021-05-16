// https://www.codechef.com/APRIL21C/problems/SSCRIPT
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        // char a = '*';
        int k, size, n, count = 0;
        // bool check = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                count++;
                if (count >= k)
                {
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (count >= k)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}