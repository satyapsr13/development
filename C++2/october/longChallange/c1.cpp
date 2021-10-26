//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;

bool isPresent(int n, int digit)
{
    // int count = 0;
    while (n > 0)
    {
        if ((n % 10) == digit)
        {

            // return;
            return true;
        }
        n /= 10;
    }
    return false;
}

void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n >> k;
    if (isPresent(n, k) == 0)
    {
        cout << "0"
             << "\n";
        return;
        /* code */
    }

    for (int i = n; i < n * 100; ++i)
    {
        if (isPresent(i, k) == 0)
        {
            cout << i - n;
            cout << "\n";
            return;
            /* code */
        }
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}