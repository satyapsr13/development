#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    x = 3 ^ 5 ^ 7 ^ 1;
    cout << x;
    return 0;
}

// Salmon is playing a game!

// He is given two integers N and K. His goal is to output K pairs (xi,yi).
// He creates a function f such that f(xi)=yi and f is undefined for all other
//  values of x. His pairs must then meet the following conditions:

// All xi are distinct.
// All yi are distinct.
// All xi,yi are in the range [0,2N−1] and are integers.
// f(f(xi)) is defined for all i.
// Let H(x) be the number of set bits in the binary representation of x.
//  Then, H(xi)≠H(f(f(xi))) for all i.
// Unfortunately, Salmon is unable to solve this. Help Salmon win the game!
// If there are multiple correct solutions, you may output any one of them.
// It can be proven that a solution exists for all N and K that meet constraints.

// Input
// The first line input contains a single integer T denoting the number of testcases
// Each of the next T lines contains two space-separated integers N and K respectively.
// Output
// Output K lines for each testcase.
// The i-th line of a testcase should contain two space-separated integers: xi and yi,
// following the given constraints.

// Constraints
// 1≤T≤215
// 3≤N≤18
// 3≤K≤2N
// The sum of 2N over all testcases doesn't exceed 218
// Subtasks
// Subtask 1 [20 points]: K≤8
// Subtask 2 [40 points]: K=2N
// Subtask 3 [40 points]: No additional constraints.

// Sample Input
// 2
// 3 7
// 4 6

// Sample Output

// 5 3
// 1 7
// 0 4
// 2 5
// 3 1
// 4 2
// 7 0
// 1 10
// 10 14
// 15 1
// 14 13
// 5 15
// 13 5

// Explanation
// In the answer to the first testcase, there are 7 pairs. xi and yi
// are all in the range [0,23−1], which is the range [0,7].
// All values of xi are distinct, and all values of yi are distinct.
//  However, note that some integers appear in both lists.
//   For example, 5 appears both as x1 and as y4. This is allowed.
//    For all xi, f(f(xi)) is defined and H(f(f(xi)))≠H(xi). For example, f(f(7))=4.
//     H(7)=3, but H(4)=1. Therefore, H(f(f(7)))≠H(7), as desired.


