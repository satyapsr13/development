#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int x, y;
    cin >> x >> y;
    cout << "Before Swapping \n";
    cout << "X"<<x;cout <<"\n" ;
    cout << "Y"<<y;cout <<"\n" ;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << "After Swapping \n";
    cout << "X" << x;
    cout << "\n";
    cout << "Y" << y;
    cout << "\n";

    return 0;
}
