// https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; ++i)

    {
        cin >> arr[i]; 
        /* code */
    }
    int sm = arr[0], lg = arr[0];
    for (int i = 0; i < n; ++i)
    {if (arr[i] > lg || arr[i] < sm)
            count++;
        if (lg <= arr[i])

        {
            lg = arr[i];

            /* code */
        }
        if (sm > arr[i])
        {
            sm = arr[i];
            /* code */
        }
        {

        }
        
        /* code */
    }
    // for (int i = 0; i < n; ++i)
    // {
        
    //     /* code */
    // }
    cout << count;
    return 0;
}
