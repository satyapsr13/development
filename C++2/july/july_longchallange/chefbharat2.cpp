//Coding-challange (c) Copyright 2021 Satyapsr
 /*this code is contributed by satyapsr SDE @ www.semikolan.co  */


#include <bits/stdc++.h>
//#define int long long int
#define endl "\n"   
#define db(x) cout<<"\t\n"<<#x<<"\t"<<x<<"\t\n"

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
// int recursion(int n,)
// {
//     if ()
//     {
//         return ;
//         /* code */
//     }

//     return ;
// }
// int power(int x, int y)
// {
//     int res = 1;
//     while (y)
//     {
//         if (y % 2 == 1)
//         {
//             res *= x;
            
//         }
//         y=y>>1;
//         x*=x;
//     }
//     return res;
// }

 void solved_by_satyapsr13(vector<int>  v)
{  int n,k,ans=0,count=0,sum=0;
   cin>>n>>k;
   if (n==1)
   {
       cout << 1 << endl;
       /* code */
   }else
   {
        
       for (int i = n; i <= k; ++i)
       {
           sum += v[i-1];
       }
   }

   cout << power(n, sum) %  1000000007 << endl;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> v;
    for (int i = 1; i < 100001; ++i)
    {
        int z = (log10(i));

        if (!(z & 1))
        {
            if (checkpalindromenumber(i))
            {
                // cout << i << endl;
                v.push_back(i);
                /* code */
            }
        }
    }
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13(v);
    }
    return 0;
}