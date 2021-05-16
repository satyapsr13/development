#include <bits/stdc++.h>
using namespace std;
void prime(long long n)
{   vector<int > prim;
    long long z = 0;
    long long prime[n] = {0};
    // bitset<n> prime;
    for (long long i = 2; i <= n; i++)
    {
        for (long long f = i * i; f <= n; f += i)
        {
            prime[f] = 1;
        }
    }
    for (long long i = 2; i < n; i++)
    {
        if (prime[i] != 1)
        {

            // cout << "\n"
            //      << ++z << "  " << i << "\n   ";
                 prim.push_back(i);
        }

        /* code */
    }
        int o=1;
    for(auto s:prim){
        cout<<o++<<"->"<<s<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i;
    cout << "enter num";
    cin >> i;
    prime(i);
    return 0;
}


// ⊕⊕⊕⊕⊕ 




