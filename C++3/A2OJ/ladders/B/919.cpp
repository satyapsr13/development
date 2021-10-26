//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
int digitsum(int n)
{
    if (n == 0)
    {
        return 0;
        /* code */
    }

    return (n % 10) + digitsum(n / 10);
}

void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int p;
    int i = 1;
    while (i)
    {
        /* code */
  
  
        if (sum == n)
        {
            cout << i-1;
            
            return;
            /* code */
        }
        // db(digitsum(i));
        p = digitsum(i);
        if (p==10)
        {
            sum++;
            /* code */
        }

        i++;
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