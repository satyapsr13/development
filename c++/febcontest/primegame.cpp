#include <bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    int t;
    return 0;
}
// Chef and Divyam are playing a game with the following rules:

// First, an integer $X!$ is written on a board.
// Chef and Divyam alternate turns; Chef plays first.
// In each move, the current player should choose a positive 
// integer $D$ which is divisible by up to $Y$ distinct 
// primes and does not exceed the integer currently written on
//  the board. Note that $1$ is not a prime.

// $D$ is then subtracted from the integer on the board,
//  i.e. if the integer written on the board before this move
//   was $A$, it is erased and replaced by $A-D$.
// When one player writes $0$ on the board, the game ends and this player wins.
// Given $X$ and $Y$, determine the winner of the game.

// Input
// The first line of the input contains a single integer $T$ denoting the
//  number of test cases. The description of $T$ test cases follows.
// The first and only line of each test case contains two 
// space-separated integers $X$ and $Y$.
// Output
// For each test case, print a single line containing the
//  string "Chef" if Chef wins the game or "Divyam" if Divyam wins (without quotes).

// Constraints
// $1 \leq T \leq 10^6$
// $1 \leq X,Y \leq 10^6$
// Subtasks
// Subtask #1 (5 points): $Y=1$

// Subtask #2 (10 points):

// $1 \leq T \leq 10^2$
// $1 \leq X \leq 6$
// Subtask #3 (85 points): original constraints

// Example Input
// 3
// 1 2
// 3 1
// 2021 42
// Example Output
// Chef
// Divyam 
// Divyam
// Explanation
// Example case 1: Since $D = 1$ is divisible by $0$
//  primes, Chef will write $0$ and win the game in the first move.

// Example case 2: Chef must choose $D$ between $1$ and $5$
//  inclusive, since $D = 6$ is divisible by more than one prime.
//   Then, Divyam can always choose $6-D$, write $0$ on the board and win the game.
