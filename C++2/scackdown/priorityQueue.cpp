//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
class Solution
{
public:
    int countValidWords(string sentence)
    {
         
         for (auto it: sentence  )
            {
                // cout << it<<" ";
                if(it==" "){
                    it = '+';
                }
            }
    }
};
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}