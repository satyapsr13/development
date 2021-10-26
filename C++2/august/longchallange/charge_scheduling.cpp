
#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;

int cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.second.first == b.second.first and b.second.second == a.second.second)
    {
        return a.first < b.first;
        /* code */
}


    return a.second.first != b.second.first ? a.second.first < b.second.first : a.second.second < b.second.second;
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, l, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> n;
    int arr[2][n];
    vector<pair<int, pair<int, int>>> v_pair(n);

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }
    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[0][i] <= arr[1][i])
        {
            v_pair[j].second.first = arr[0][i];
            v_pair[j].first = i + 1;
            v_pair[j].second.second = arr[1][i];
            if (v_pair[j].second.second == 0 and v_pair[j].second.first == 0)
            {
                ans++;
                /* code */
            }

            mx = max(mx, v_pair[j].second.second);
            j++;
        }
    }

    sort(v_pair.begin(), v_pair.end(), cmp);
    int danger = n;
    int start = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += v_pair[i].second.first;
        if (sum > mx)
        {
            danger = i;
            /* code */
        }
        if (v_pair[i].second.first == 0)
        {
            start = i;
            /* code */
        }
    }
    // cout << sum;cout <<"\n" ;
    // cout << "start " << start;
    // cout << "\tdanger " << danger;
    // cout << "\n";

    int chutiya_sum = 0;
    danger - start ? cout << danger - start - 1 + ans : cout << 0;
    // cout << j;
    cout << "\n";
    if (v_pair[0].second.first != 0 and v_pair[0].first!=0)
    {
        start--;
    }if (ans!=0)
    {
        start -= ans;
        /* code */
    }
    // db(ans);
    // db(start);
    for (int i = start + 1; i < danger; ++i)
    {
        if (chutiya_sum + v_pair[i].second.first > mx)
        {
            // db(chutiya_sum + v_pair[i].second.first);
            break;
        }
        
        cout << v_pair[i].first << " " << chutiya_sum << " " << chutiya_sum + v_pair[i].second.first;
        chutiya_sum += v_pair[i].second.first;
        cout << "\n";
    }
    // cout << "NO" << endl;
    // cout << "\n";
    // cout << "\n";
    // cout << "\n";

    // // // return;
    // for (auto it : v_pair)
    // {
    //     cout << it.first << "   ";
    //     cout << it.second.first << "   ";
    //     cout << it.second.second;
    //     cout << "\n";
    // }

    // int lg=*max_element(arr[1],arr)
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
        solved_by_satyapsr13();
    }
    return 0;
}