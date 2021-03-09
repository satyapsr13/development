#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    unsigned long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum=sum+a[i];
    }
    int q;
    cin>>q;
    int b[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
        /* code */
    }
    for (int i = 0; i < q; i++)
    {
        if (b[i] == 1)
            
        {cout<<sum;
        }
        if(b[i] != 1)
        {
            
        }
        /* code */
    }

    return 0;
}

// You are given a sequence of positive integers A1,A2,…,AN. You should answer Q 
// queries. In each query:

// You are given a positive integer M.
// Consider all non-empty subsequences of A with length ≤M. Recall that a
//  subsequence is any sequence that can be created by deleting zero or more
//   elements without changing the order of the remaining elements.
// For each of these subsequences, compute the bitwise XOR of its elements. 
// Your task is to determine the sum of these values. Since this sum can be 
// very large, compute it modulo 998,244,353.

// Input
// The first line of the input contains a single integer N.
// The second line contains N space-separated integers A1,A2,…,AN.
// The third line contains a single integer Q.
// Q lines follow. Each of these lines contains a single integer M describing a query.
// Output
// For each query, print a single line containing one integer ― the sum 
// of bitwise XORs for all subsequences of A with length ≤M, modulo 998,244,353.


// Constraints
// 1≤N,Q≤2⋅10^5
// 1≤Ai<2^30 for each valid i
// 1≤M≤N
// Example Input
// 4 n
// 1 3 5 2 ai
// 2 q
// 1m
// 2 
// Example Output
// 11
// 34
// Explanation
// In the first query, the answer is just the sum of elements of A
//  (modulo 998,244,353), which is 1+3+5+2=11.

// In the second query, the answer is the sum of bitwise XORs for all
//  subsequences with length 1 or 2, which is 1+3+5+2+(1⊕3)+(1⊕5)+(1⊕2)+(3⊕5)+(3⊕2)+(5⊕2)=34.

