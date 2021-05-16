#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 5, y = 10;
    cout << "Before Swapping: x = "<< x << ", y= " << y<<"\n";
    // Code to swap 'x'  and 'y'
    // to swap two numbers in one
    // line
    x = x ^ y, y = x ^ y, x = x ^ y;
    // printing the swapped variables
    cout << "After Swapping: x = "<< x << ", y= " << y;
    return 0;
}