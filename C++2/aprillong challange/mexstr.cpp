// https://www.codechef.com/APRIL21C/problems/MEXSTR
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
bool sub(string s1, string s2)
{
    if (s1.length() == 0)
    {
        return true;
    }
    long long int i, j;
    i = j = 0;
    while (i < s1.length() and j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            i++;
        }
        if (s1.length() == i)
        {
            return true;
        }
        j++;

        /* code */
    }
    return false;
}
long long int binary_decimal(string s) //perfectly  working
{
    long long int t, sum = 0, j = 0;

    for (long long int i = s.length() - 1; i >= 0; i--)
    {
        // cout << stoi(s.substr(i, 1)) << endl;
        t = pow(2, j++);
        if (stoi(s.substr(i, 1)) == 1)
        {
            sum += t;
        }
        /* code */
    }

    return sum;
}
string decimal_binary(long long int t)
{
    string s1;
    if (t == 0)
    {
        s1.push_back('0');
        return s1;
    }
    long long int d = log2(t), a;
    for (long long int i = 0; i <= d; i++)
    {
        a = pow(2, i);
        if (!(t & a))
        {
            s1.push_back('0');
        }
        else
        {
            s1.push_back('1');
        }

        /* code */
    }

    // cout<<"before s1";

    reverse(s1.begin(), s1.end());
    // cout << s1;
    return s1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    cin >> t;

    // cout<<"after s1";
    while (t--)
    {

        string s1, s2;
        cin >> s1;
        for (  long long int i = 0; i <= binary_decimal(s1); i++)
        {
            // cout << "we r indide loop";
            s2 = (decimal_binary(i));
            // cout<<s2;
            if (sub(s2, s1))
            {
            }
            else
            {

                break;
            }
            // cout << "we r outof  loop\n";
        }
        // cout << "we going to prlong long int s2";
        cout << s2 << endl;
    }
    return 0;
}
