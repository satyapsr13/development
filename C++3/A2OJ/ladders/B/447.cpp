//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define endl "\n"
// #define google(n) cout << "Case #"<< z<<": " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    string s;
    cin >> s; //s.find('^');//! int num = stoll(s);
    int size = s.size();
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> k;

    int arr[26];
    //memset(arr, 0, sizeof(arr));
    for (int i = 0; i < 26; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; ++i)
    {
        sum += (arr[s[i]-'a'] * (i + 1));
    }
    int pp = *max_element(arr, arr + 26);
    // db(pp);
    sum += pp*((k* (size + 1 + size + k)) / 2);
    // db((k * (((size + 1)) + size + k)) / 2);

    cout << sum;
    // cout << "\n";
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
