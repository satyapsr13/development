// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>

// #define db(x) cout << __LINE__ << "->" \
//                    << " " << #x << "\t" << x << "\t\n"
// using namespace std;
// int find(string s)
// {
//     regex rg("[0-9]+");

//     stringstream ss(s);
//     string word;
//     vector<int> v;
//     while (ss >> word)
//     {

//         if (regex_match(word, rg))
//         {
//             v.push_back(stoi(word));
//         }
//     }

//     for (auto it : v)
//     {
//         cerr << it << " ";
//     }
//     //// isdigit(1);

//     sort(v.begin(), v.end());
//     for (int i = 1; i < v.size(); ++i)
//     {
//         if (v[i] <= v[i - 1])
//         {
//             return 0;
//         }
//     }

//     return 1;
// }
// signed main()
// {
//     string s = "Sunset is at 7 51 pm overnight lows will be in the low 50 and 60 s";
//     // getline(cin, s);
//     // cout << find( s);
//     cout << char(s[0] - 'A' + 'a');

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
    int *x;                                 
                                 
    for (int i = 0; i < 4; ++i)                                 
    {                                 
        cin >> x[i];                                 
    }                                 
                                 
    cout << "YES"                                 
         << "\n";                                 
    // return;                                 
    for (int i = 0; i < 4; ++i)                                 
    {                                 
        cout << x[i];                                 
    }                                 
    return 0;                                 
} 