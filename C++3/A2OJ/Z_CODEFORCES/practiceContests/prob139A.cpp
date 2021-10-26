// https://codeforces.com/problemset/problem/139/A
#include <bits/stdc++.h>
#define debug(x) cout << "\n" \
                      << #x << " = " << x << "\n"
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
int main()
{

    //          __             __     ____                        __
    //    _____/ /_____ ______/ /_   / __/________  ____ ___     / /_  ___  ________
    //   / ___/ __/ __ `/ ___/ __/  / /_/ ___/ __ \/ __ `__ \   / __ \/ _ \/ ___/ _ \
    //  (__  ) /_/ /_/ / /  / /_   / __/ /  / /_/ / / / / / /  / / / /  __/ /  /  __/
    // /____/\__/\__,_/_/   \__/  /_/ /_/   \____/_/ /_/ /_/  /_/ /_/\___/_/   \___/
    ios;
    int n, m;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] == 1)
            m = i;
        if (sum >= n)
        {
            cout << i + 1;
            return 0;
            /* code */
        }
        if ((sum == 1 and i == 6))
        {
            cout << i + 1;
            return 0;

            /* code */
        }
    }
    n %= sum;
    //debug(sum);
    //debug(n);
    int sum1 = 0;
    for (int i = 0; i < 7; i++)
    {
        // //debug(i);
        sum1 += arr[i];
        //debug(sum1);
        if (sum1 >= n)
        {
            cout << i + 1;
            return 0;
            /* code */
        }
        if (i == 6 && sum1 < n)
            i = 0;
    }
    return 0;
}