
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define count_1 __builtin_popcountll
long long power(long long a, long long b, long long md)
{
    return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));
}
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"
#define dbarr(arr)           \
    cout << #arr << " ~ [ "; \
    for (auto n : arr)       \
        cout << n << " ";    \
    cout << "]" << endl;
#define dbarrp(arr)                                \
    cout << #arr << " ~ [ ";                       \
    for (auto n : arr)                             \
        cout << n.first << "-" << n.second << " "; \
    cout << "]" << endl;
#define endl "\n"
#define all(v) v.begin(), v.end()
//#define PI 3.141592653589793238462
typedef long long ll;
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T>
void _print(vector<T> v)
{
    cerr << "-> [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
////vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void solved_by_satyapsr13()
{

    string a, b, c;
    cin >> a >> b >> c;

    string res;
    int count = 1;
    int index = -1;
    vector<string> allSubstring;
    unordered_map<string, int> mp;

    for (int i = 1; i <= a.size(); ++i)
    {
        for (int j = 1; j <= b.size(); ++j)
        {
            // index = -1;
            res = a.substr(0, i) + b.substr(0, j);
            allSubstring.push_back(res);
            // debug(res);
            index = c.find(res);
            mp[res] = 1;
            if (index >= 0 and index < c.size())
            {
                count++;
            }
            // else
            // {
            //     break;
            // }
        }
    }
    cerr << "\n";
    cerr << "\n";

    for (int i = 1; i <= a.size(); ++i)
    {
        res = a.substr(0, i);
        allSubstring.push_back(res);
        // debug(res);
        if (mp[res] == 0)
        {
            mp[res] = 1;
            index = c.find(res);
            if (index >= 0 and index < c.size())
            {
                count++;
            }
            else
            {
                break;
            }
        }
        else
        {
            count++;
        }
    }
    for (int i = 1; i <= b.size(); ++i)
    {
        res = b.substr(0, i);
        // debug(res);
        allSubstring.push_back(res);
        if (mp[res] == 0)
        {
            mp[res] = 1;
            index = c.find(res);

            if (index >= 0 and index < c.size())
            {
                count++;
            }
            else
            {
                break;
            }
        }
        else
        {
            count++;
        }
    }
    for (auto it : allSubstring)
    {
        cerr << it << " ";
        cerr << "\n";
    }
    cout << count;
    cout << "\n";
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
        solved_by_satyapsr13();
    cerr << "Time taken : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
    return 0;
}