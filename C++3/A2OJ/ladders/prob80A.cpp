// https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
using namespace std;
int erothenes(){
    int arr[5];


}
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    for (int t = 2; t*t< m; ++t)
    {
        if (m % t==0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
