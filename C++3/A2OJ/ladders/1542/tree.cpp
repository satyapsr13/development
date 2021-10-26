#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;
const double EPS = 1e-9;

const int MX = 1e6 + 5;
const int MOD = 1000000007;
int N, S, freq[MX], a[MX], b[MX], color[MX], par[MX], deg[MX];
vector<vector<int>> adj, F;

void dfs(int u, int p)
{
    par[u] = p;
    deg[u] = 0;

    for (auto &v : adj[u])
    {
        if (v != p)
        {
            dfs(v, u);
            ++deg[u];
        }
    }
}
void upd(int x, int delta, int &nonZero)
{
    if (!freq[x])
        ++nonZero;
    freq[x] += delta;
    if (!freq[x])
        --nonZero;
}

int f(int u)
{
    int ret = 1 + F[u].size();

    for (auto &v : F[u])
        ret = (ret * 1LL * f(v)) % MOD;

    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.precision(10);
    cin.tie(0);

    int T;

    cin >> T;
    int inv = 0;

    for (int tc = 1; tc <= T; ++tc)
    {

        // taking input

        cin >> N >> S;

        adj.assign(N + 1, vector<int>());

        for (int i = 1; i <= N - 1; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 1; i <= N; ++i)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= N; ++i)
        {
            cin >> b[i];
        }

        // building deg[] and par[]

        dfs(1, 0);

        // finding if a solution exists

        queue<int> leaves;

        for (int i = 1; i <= N; ++i)
        {
            if (!deg[i])
                leaves.push(i);
        }

        for (int i = 1; i <= N; ++i)
        {
            color[i] = -1;
        }

        int nonZero = 0;

        bool invalid = false;

        while (!leaves.empty())
        {
            int cur = leaves.front();
            leaves.pop();

            int id = cur;
            bool good = false;

            while (true)
            {
                color[cur] = id;

                // nonZero is passed by reference, could be changed by upd
                upd(a[cur], 1, nonZero);
                upd(b[cur], -1, nonZero);

                --deg[par[cur]];

                if (!nonZero)
                {
                    good = true;
                    if (color[par[cur]] == -1 && !deg[par[cur]])
                        leaves.push(par[cur]);
                    break;
                }

                if (color[par[cur]] == -1)
                    cur = par[cur];
                else
                    break;
            }

            if (!good)
            {
                invalid = true;
                break;
            }
        }

        inv += invalid;

        if (invalid)
            cout << "0\n";
        else
        {

            if (S == 1)
                cout << "1\n";
            else
            {

                // building F

                F.assign(N + 1, vector<int>());
                vector<int> roots;
                for (int i = 1; i <= N; ++i)
                {
                    if (color[i] != color[par[i]])
                    {
                        if (i > 1 && color[par[i]] == par[i])
                            F[color[par[i]]].push_back(color[i]);
                        else
                            roots.push_back(color[i]);
                    }
                }

                int ans = 1;

                for (auto &root : roots)
                    ans = (ans * 1LL * f(root)) % MOD;

                cout << ans << '\n';
            }
        }

        for (int i = 1; i <= N; ++i)
        {
            freq[a[i]] = freq[b[i]] = 0;
        }
    }

    return 0;
}

vector<int> buildArray(vector<int> &nums)
{
     
    for (int i = 0; i < nums.size(); ++i)
    {
        cout << v[v[i]] << " ";
    }
}