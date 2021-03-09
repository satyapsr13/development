#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cout << "How many time range you want to enter";
    cin >> n;
    string s[n];
    cout << "enter duration in format ex. {  09PM-12AM   }  ";
    int a[n * 2];
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << "  duration";
        cin >> s[i];
    }
    for (int i = 0; i < 2 * n; i + 2)
    {

        a[i] = stoi(s[i].substr(0, 2)) + (s[i][2] = "P" ? 12 : 0);

        a[i + 1] = stoi(s[i].substr(5, 2)) + (s[i][7] = "P" ? 12 : 0);
    }

    return 0;
}
