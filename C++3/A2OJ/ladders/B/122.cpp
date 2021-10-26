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
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    //    cin>>n;
    string s;
    cin >> s;
    int arr[8] = {0};
    for (int i = 0; i < s.size(); ++i)
    {
        arr[s[i] - '1']++;
    }
    if (arr[3] == 0 and arr[6] == 0)
    {
        cout << "-1" << endl;
        return;
        /* code */
    }
    else
    {
        if (arr[3] >= arr[6])
        {
            cout << "4" << endl;
            return;
            /* code */
        }
        else
        {
            cout << "7";
        }
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}