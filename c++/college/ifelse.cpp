#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout << "\nenter first no.->:-\t";
    cin>>b;
    cout << "\nenter second no.->:-\t";
    cin>>c;
    cout << "\nenter choice:-\t\n";
    cout << "\n '+' -> 1 :-\t";
    cout << "\n '-' -> 2 :-\t";
    cout << "\n '*' -> 3 :-\t";
    cout << "\n '/' -> 4 :-\t";
    cout<<"\n";
    cin>>a;
    switch (a)
    {
    case 1:cout<<b+c;
        break;
    case 2:cout<<b-c;
        break;
    case 3:cout<<b*c;
        break;
    case 4:cout<<b/c;
        break;
    
    default:cout<<"you enter wrong value";
        break;
    }
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a, b, c;
//     cout << "\nenter three no.:-\t";
//     cout << "\nenter value of a:-\t";
//     cin >> a;
//     cout << "\nenter value of b:-\t";
//     cin >> b;
//     cout << "\nenter value of c:-\t";
//     cin >> c;
//     if (a > b && a > c)
//     {cout<<"greter is "<<a;
//     }
//     else{
//         if(b==c)
//         {
//             cout<<"greter is "<<b<<"&"<<c;
//         }
//         if(b>c){
//             cout<<"greter is "<<b;
//         }
//         if(c>b){
//             cout<<"greter is "<<c;
//         }
        
//     }
//     return 0;
// }
