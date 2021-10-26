//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */
///iterative approach

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int end = 0, start = 0;
    for (int i = 0; i < n; ++i)
    {
        start = i;
        end = start;

        for (int k = 0; k < n; ++k)
        {
         
            for (int j = start; j <= end; ++j)
            {
                cout << arr[i] << " ";
                  end++;
            }
        }
        cout << "\n";
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