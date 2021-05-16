#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int b;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[b-1]-arr[0];
        /* code */
    }

    return 0;
}

// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string n;
//     cin >> n;
//     int len = n.size();
//     int t;
//     for (int i = 0; i <= len / 2; i++)
//     {

// if(i==len/2){
//         t = n[i];
//         n[i] = n[len  - i];
//         n[len  - i] = t;
//         brearrk;

// }

//         t = n[i];
//         n[i] = n[len - 1 - i];
//         n[len - 1 - i] = t;
//         //  arr[i]=a[i]^a[n-i-1], a[n-1-i]=a[i]^a[n-i-1] ,a[i]=a[i]^a[n-i-1];

//         /* code */
//     }
//    cout<<n;
//     return 0;
// }
