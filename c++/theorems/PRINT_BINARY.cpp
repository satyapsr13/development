// #include <bits/stdc++.h>
// //#define int long long int
// #define mod 1e9 + 7
// #define read1(a) cin >> a
// #define read2(a, b) cin >> a >> b
// #define read3(a, b, c) cin >> a >> b >> c
// #define db(x) cout << "\n" \
//                    << #x << " " << x << "\n"
// using namespace std;
// void printbinary(int num)
// {
//     // for (int i = 10; i >= 0; --i)
//     // {
//     //     db(i);
//     //     db((num >> i));

//     // }

//     for (int i = 10; i >= 0; --i)
//     {
//         cout << ((num >> i) & 1);

//     }
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n;
//     cin >> n;

//     printbinary(n);
//     return 0;
// }
#include <bits/stdc++.h>
//#define int long long int
#define mod 1e9 + 7
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define db(x) cout << "\n" \
                   << #x << " " << x << "\n"
using namespace std;
void printbinary(int num)
{
    // for (int i = 10; i >= 0; --i)
    // {
    //     db(i);
    //     db((num >> i));

    // }

    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<"!  -> ";
    printbinary('!');
    cout<<"@  -> ";
    printbinary('@');
    cout<<"#  -> ";
    printbinary('#');
    cout<<"$  -> ";
    printbinary('$');
    cout<<"%  -> ";
    printbinary('%');
    cout<<"^  -> ";
    printbinary('^');
    cout<<"&  -> ";
    printbinary('&');
    cout<<"*  -> ";
    printbinary('*');
    cout<<"(  -> ";
    printbinary('(');
    cout<<")  -> ";
    printbinary(')');
    cout<<"-  -> ";
    printbinary('-');
    cout<<"_  -> ";
    printbinary('_');
    cout<<"+  -> ";
    printbinary('+');
    cout<<"=  -> ";
    printbinary('=');
    // for (char i = 'a'; i < 'e'; ++i)
    // {
    //     cout << i;
    //     printbinary(int('_'));
    // }
    // for (char i = 'A'; i < 'E'; ++i)
    // {
    //     cout << i;
    //     printbinary(int(i));
    // }

    return 0;
}