//----------- Recursive -----------------------
//      Time Complexity: O(2^N)
//      Space Complexity: O(N)

// #include <iostream>
// using namespace std;
// // arr: input array
// // i: ith index of input array
// // n: size of arr
// // subset: array to store the subset
// // j: current size of subset
// void PrintAllSubsets(int *arr, int i, int n, int *subset, int j)
// {
//     // checking if all elements of the array are traverse or not
//     if (i == n)
//     {
//         // print the subset array
//         int idx = 0;
//         while (idx < j)
//         {
//             cout << subset[idx] << ' ';
//             ++idx;
//         }
//         cout << endl;
//         return;
//     }
//     // for each index i, we have 2 options
//     // case 1: i is not included in the subset
//     // in this case simply increment i and move ahead
//     PrintAllSubsets(arr, i + 1, n, subset, j);
//     // case 2: i is included in the subset
//     // insert arr[i] at the end of subset
//     // increment i and j
//     subset[j] = arr[i];
//     PrintAllSubsets(arr, i + 1, n, subset, j + 1);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4}; // input array
//     int subset[100];          // temporary array to store subset
//     int n = 4;
//     PrintAllSubsets(arr, 0, n, subset, 0);
// }


// -------- Iterative ----------------
//    Time Complexity: O(2^N)
//    Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
// arr: input array
// n: size of arr
void PrintAllSubsets(int *arr, int n){    
    int snum = 0;
    while(snum<pow(2,n)){
        for(int i=0;i<n;++i){
            // the following condition checks
            // if the ith bit of snum in binary form
            // is 1 or not
            if((snum&(1<<i))!=0){
                cout<<arr[i]<<' ';
            }
        }
        cout<<endl;
        ++snum;
    }
            
}
int main()
{
    int arr[] = {1,2,3}; // input array
    int n = 3;
    PrintAllSubsets(arr,n);   
}