#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << "\n"
             << arr[i];
    }
    return 0;
}
