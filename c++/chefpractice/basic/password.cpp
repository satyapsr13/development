#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int d = 0,p, u = 0, l = 0, si, a[5] = {'@', '#', '%', '&', '?'};
        string s;
        cin >> s;
        p=s.length()-1;
        for (int f = 0; f < s.length(); f++)
        {
            if (s.length() < 10)
            {
                break;
            }
            if (isdigit(s[0]) || isdigit(s[p]))
            {
                break;
            }

            if (isdigit(s[f]))
            {
                d = 1;
            }
            if (isupper(s[f]))
            {
                u = 1;
            }
            if (islower(s[f]))
            {
                l = 1;
            }
            if (s[f] == '@' || s[f] == '#' || s[f] == '%' || s[f] == '&' || s[f] == '?')
            {
                si = 1;
            }
        }
        if (d == u == l == si == 1)
        {
            cout << "YES\n";
        }
        else
        {

            cout << "NO\n";
        }
    }
    return 0;
}
//  if (isdigit(s[f]))
//             {
//                 d = 1;
//             }
//             if (isupper(s[f]))
//             {
//                 u = 1;
//             }
//             if (islower(s[f]))
//             {
//                 l = 1;
// Chef is planning to setup a secure password for his Codechef account. For a
//  password to be secure the following conditions should be satisfied:

// 1) Password must contain at least one lower case letter [a−z];

// 2) Password must contain at least one upper case letter [A−Z] strictly
//  inside, i.e. not as the first or the last character;

// 3) Password must contain at least one digit [0−9] strictly inside;

// 4) Password must contain at least one special character from the set
//  { '@', '#', '%', '&', '?' } strictly inside;

// 5) Password must be at least 10 characters in length, but it can be longer.

// Chef has generated several strings and now wants you to check whether the passwords
//  are secure based on the above criteria. Please help Chef in doing so.

// Input
// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, string S.
// Output
// For each testcase, output in a single line "YES" if the password is secure
// and "NO" if it is not.

// Constraints
// 1≤|S|≤20
// All the characters in S are one of the following: lower case letters [a−z],
// upper case letters [A−Z], digits [0−9], special characters from the
// set { '@', '#', '%', '&', '?' }
// Sum of length of strings over all tests is atmost 106
// Example Input
// 3
// #cookOff#P1
// U@code4CHEFINA
// gR3@tPWD
// Example Output
// NO
// YES
// NO
// Explanation
// Example case 1: Condition 3 is not satisfied, because the only digit is not
//  strictly inside.

// Example case 2: All conditions are satisfied.

// Example case 3: Condition 5 is not satisfied, because the length of this string is 8.