#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define count_1 __builtin_popcountll
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
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    string s1;
    string s;
     
    s.push_back('0');
    
    cin >> s1;
    s += s1;
    s.push_back('0');
    string p;
    p.push_back('0');
    cin >> s1;
    p += s1;
    p.push_back('0');
    // cin >> p;
    // db(s);
    for (int i = 0; i < n+1; ++i)
    {
        if (p[i] == '1')
        {
            if (s[i] == '0')
            {
                count++;
                continue;
                /* code */
            }
            else if (s[i - 1] == '1')
            {

                s[i - 1] = '0';
                count++;
                continue;
                /* code */
            }
            else if (s[i + 1] == '1')
            {

                s[i + 1] = '0';
                count++;
                continue;
            }

            /* code */
        }
    }
    cout << count;cout <<"\n" ;
    
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




