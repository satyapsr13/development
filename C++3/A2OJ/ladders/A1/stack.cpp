// #include <iostream>
// using namespace std;

// int basearch(int *arr, int start, int end, int key)
// {
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key)
//             return mid;
//         if (arr[mid] < key)
//             start = mid + 1;
//         else if (arr[mid] > key)

//             end = mid - 1;
//     }
//     return -1;
// }
// int main()
// {
//     int *arr, n, key;
//     cout << " enter size of array ";
//     cin >> n >> key;
//     cout << " enter array ";
//     for (int i = 0; i <= n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << basearch(arr, 0, n - 1,key);
//     return 0;
// }

//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int **arr;

    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[0][i];
    }
    cout << arr[0][1] + arr[0][2];
    return 0;
}