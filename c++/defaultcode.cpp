#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lp(i, a, b) for (int i = a; i <= b; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cout << "enter\n\t";
    cin >> t;
    lp(i, 0, t)
    {
        cout << "enter\n\t" << i;
    }

    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}
// -------------------------------------------------------------------------------------
// 1.Note that the newline "\n" works faster than endl, because endl always causes
//   a flush operation

// -------------------------------------------------------------------------------------
// 2.The C functions scanf and printf are an alternative to the C++ standard
//   streams. They are usually slightly faster, but also more difficult to use.

// -------------------------------------------------------------------------------------
//3. Sometimes the program should read a whole input line, possibly containing spaces.
//   This can be accomplished by using the getline function:
//     string s;
//     getline(cin, s);

// -------------------------------------------------------------------------------------
//4. int range( −2^31 ... (2^31) − 1 (about −2 · 10^9 ... 2 · 10^9) )
//5.long long range −2^63.. 2^63 − 1 (about −9 · 10^18 ... 9 · 10^18)

// -------------------------------------------------------------------------------------
//6. An important property of remainders is that
//    the following formulas hold:
//    (a + b) mod m = (a mod m + b mod m) mod m
//    (a − b) mod m = (a mod m − b mod m) mod m
//    (a · b) mod m = (a mod m · b mod m) mod m

// -------------------------------------------------------------------------------------
//7.  bit representation of the int
//    number 43 is
//    00000000000000000000000000101011.

// -------------------------------------------------------------------------------------
//8.  opposite number of a number is calculated by first inverting all the bits in the number and
//    then increasing the number by one. For example, the bit representation of the int
//    number

//   −43 ->11111111111111111111111111010101.
//    43 ->00000000000000000000000000101011.

// -------------------------------------------------------------------------------------
//9. int x = -43;
//   unsigned int y = x;
//   cout << x << "\n"; // -43
//   cout << y << "\n"; // 2^32-43= 4294967253

// -------------------------------------------------------------------------------------
//10. int x = 2147483647
//    cout << x << "\n"; // 2147483647
//    x++;
//    cout << x << "\n"; // -2147483648

// -------------------------------------------------------------------------------------
//11. Not Operation The not operation ~x produces a number where all the bits of x have
//   been inverted. The formula ~x = −x −1 holds, for example, ~29 = −30. The result
//   of the not operation at the bit level depends on the length of the bit representation,
//   22 2 Programming Techniques
//   because the operation inverts all bits. For example, if the numbers are 32-bit int
//   numbers, the result is as follows:
//   x = 29 00000000000000000000000000011101
//  ~x = −30 11111111111111111111111111100010

// -------------------------------------------------------------------------------------
// 12.Bit Shifts The left bit shift x << k appends k zero bits to the number, and the right bit
//    shift x >> k removes the k last bits from the number. For example, 14 << 2 = 56,
//    because 14 and 56 correspond to 1110 and 111000. Similarly, 49 >> 3 = 6, because
//    49 and 6 correspond to 110001 and 110. Note that x << k corresponds to multiplying
//    x by 2^k , and x >> k corresponds to dividing x by 2^k rounded down to an integer

// -------------------------------------------------------------------------------------
// The formula ->
//
// x | (1 << k) sets the kth bit of x to one,
// the formula ->
//  x & ~(1 << k) sets the kth bit
// of x to zero,
// the formula ->
//  x ˆ (1 << k) inverts the kth bit of x. Then,
//  the formula ->
//
// x & (x − 1) sets the last one bit of x to zero,
//  formula ->
//  x & −x sets all the one
// bits to zero, except for the last one bit.
//  The formula ->
//  x | (x − 1) inverts all the bits
// after the last one bit. Finally, a positive number x is a power of two exactly when x
// & (x − 1) = 0.

// -------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------