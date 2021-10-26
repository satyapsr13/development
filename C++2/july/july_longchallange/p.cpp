//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
#include <bits/stdc++.h>
// #define int long long int
#define mod 1e9 + 7
#define space ' '
#define endl "\n"
#define db(x) cout << #x << "\t" << x << "\t\n"

using namespace std;
bool checkpalindromenumber(int num)

{
    int n, digit, rev = 0;
    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    if (n == rev)
    {
        return true;
    }
    // cout << " The number is a palindrome.";
    else
    {
        return false;
    }
    // cout << " The number is not a palindrome.";
}
// int power(int x, int y)
// {
//     int res = 1;
//     while (y)
//     {
//         if (y % 2 == 1)
//         {
//             res = (res % 1000000007) * (x % 1000000007);
//         }
//         y = y >> 1;
//         x *= x;
//     }
//     return res % 1000000007;
// }
int power(int a, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans % 1000000007) * (a % 1000000007);
        }
        a = (a % 1000000007) * (a % 1000000007);
        if (a > mod)
        {
            db(a);
            db(ans);
            /* code */
        }

        n = n >> 1;
    }
    return ans;
}

void solved_by_satyapsr13(vector<int> v)
{
    int l, r, ans = 0, count = 0, sum = 0;
    cin >> l >> r;
    int prod = 1;
    for (int i = l + 1; i <= r; ++i)
    {
        sum += v[i - 1];
        // prod = ((prod % 1000000007) % 1000000007) * ((power(l, v[i - 1])) % 1000000007);
        // db(v[i - 1]);
        db(sum);
    }
    cout << power(l, sum);
    // cout << prod % 1000000007 << endl;
}
// 1000000007
// 541416750
// 1682063360
// 682063353
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> v;
    for (int i = 1; i < 100001; ++i)
    {

        if (!(int(log10(i)) & 1))
        {
            if (checkpalindromenumber(i))
            {
                // cout << i << endl;
                v.push_back(i);
                /* code */
            }
        }
    }
    // cout << power(2, 4);
    // cout << v[10-1];
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13(v);
    }
    // cout << pow(9, v[10]) * pow(9, v[11]);

    // for (int i = 0; i < 100; ++i)
    // {
    //     cout << i << "\t" << power(9, i) << endl;
    // }
    // 3486784401
    // 1000000007
    // -808182895;
    return 0;
}