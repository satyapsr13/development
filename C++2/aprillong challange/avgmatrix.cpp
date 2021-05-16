#include <bits/stdc++.h>
using namespace std;
int count = 0;
int matrixsolve(int *arr, int n,int row,int col)
{
  for (int  i = 0; i < row; i++)
  {
      for (int j = 0; j < col; j++)
      {
          if(i+n<=row && j+n<=col){
              int sum=0;
               for (int k = i; k < i+n; k++)
               {
                   for (int l = j; l < j+n; l++)
                   {
                       sum+=*(arr+l+k);
                   }
                   
               }
               if(sum)
               
          }
      }
      
      /* code */
  }
  
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> k >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int ans = matrixsolve(*arr, n);
    }
    return 0;
}
