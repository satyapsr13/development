#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;

void visit()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
}
void hindustan_jindabad(vector<int> &weight, vector<bool> &visited, vector<int> &realation) {
    
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        // solved_by_satyapsr13();
        int n;
        cin >> n;
        int x;
        int ans = 0;
        vector<int> weight(n);
        vector<bool> visited(n, 0);
        vector<int> relation(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            weight.push_back(x);
            relation.push_back(i + 1 - x);
        }
        hindustan_jindabad(weight, visited, relation);
        for (int i = 0; i < n; ++i)
        {
            if (visited[i + 1] != 0)
            {
                ans++;
            }
        }
        cout << ans;
        cout << "\n";
    }
    return 0;
}