#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n / 2; ++i)
    {
        sum1 += arr[i];
        cout<<i<<"   sum1=\t"<<sum1<<"\t\t";
        if ( i == (n / 2) - 1 and (n%2 !=0) )
        {
            sum2 += arr[i + (n / 2)]+ arr[n - 1];
            cout<<i<<" 44  sum2=\t"<<sum2<<"\n";
        }
        else
        {
            sum2 += arr[i + (n / 2)];
            cout<<i<<"  sum2=\t"<<sum2<<"\n";
        }
    }
    int diff,small;
    for (int j = n / 2; j < n; ++j)
    {
        if (sum2 > sum1)
        {
             
            diff = sum2 - sum1;
            sum1 += arr[j];
            sum2 -= arr[j];
            if(sum2<sum1){
                diff = sum2 - sum1;
                break;
            }

        }
        else
            break;
    }
    cout << abs(diff);

    return 0;
}














// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     int sum1 = 0, sum2 = 0;
//     for (int i = 0; i < n / 2; ++i)
//     {
//         sum1 += arr[i];
//         cout<<i<<"   sum1=\t"<<sum2<<"\t\t";
//         if ( i == (n / 2) - 1 and (n%2 !=0) )
//         {
//             sum2 += arr[i + (n / 2)]+ arr[n - 1];
//             cout<<i<<" 44  sum2=\t"<<sum2<<"\n";
//         }
//         else
//         {
//             sum2 += arr[i + (n / 2)];
//             cout<<i<<"  sum2=\t"<<sum2<<"\n";
//         }
//     }
//     int diff;
//     for (int j = n / 2; j < n; ++j)
//     {
//         if (sum2 > sum1)
//         {

//             sum1 += arr[j];
//             sum2 -= arr[j];
//             diff = sum2 - sum1;
//         }
//         else
//             break;
//     }
//     cout << abs(diff);

//     return 0;
// }
