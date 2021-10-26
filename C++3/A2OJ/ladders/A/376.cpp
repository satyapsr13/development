//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define google(n) cout << "Case #1: " << n
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    string s;
    cin >> s;
    int size = s.size(); //s.find('^');
    int point;
    int left = 0, right = 0;
    for (int i = 0; i < size; ++i)
    {
        if (s[i] == '^')
        {
            point = i;
            break;
            /* code */
        }
    }

    for (int i = point - 1; i >= 0; --i)
    {
        if (isdigit(s[i]))
        {
            left += ((point - i) * stoi(s.substr(i, 1)));
        }
    }
    for (int i = point + 1; i < size; ++i)
    {
        if (isdigit(s[i]))
        {
            right += ((i - point) * stoi(s.substr(i, 1)));
        }
        // stoi(s.substr(i, 1))
    }
    if (right > left)
    {
        cout << "right" << endl;
        /* code */
    }
    else if (right < left)
    {
        cout << "left" << endl;
        /* code */
    }else
    {
        cout << "balance" << endl;
        
    }
    
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases = 1;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}