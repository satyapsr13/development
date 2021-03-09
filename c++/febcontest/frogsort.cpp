#include<iostream>

int main(int argc, char const *argv[])
{
    int n;
    return 0;
}

// There are N frogs (numbered 1 through N) in a line. For each valid i, the i-th
// frog is initially at the position i, it has weight Wi, and whenever you hit
//  its back, it jumps a distance Li to the right, i.e. its position increases by
//   Li. The weights of the frogs are pairwise distinct.

// You can hit the back of each frog any number of times (possibly zero,
// not necessarily the same for all frogs) in any order. The frogs do not intefere
//  with each other, so there can be any number of frogs at the same time at
//  each position.

// Your task is to sort the frogs in the increasing order of weight using the
// smallest possible number of hits. In other words, after all the hits are
// performed, then for each pair of frogs (i,j) such that Wi<Wj, the position
// of the i-th frog should be strictly smaller than the position of the j-th
//  frog. Find the smallest number of hits needed to achieve such a state.

// Input
// The first line of the input contains a single integer T denoting the number of
// test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains N space-separated integers W1,W2,…,WN.
// The third line contains N space-separated integers L1,L2,…,LN.
// Output
// For each test case, print a single line containing one integer ― the
// smallest number of times you need to hit the backs of the frogs.

// Constraints
// 1≤T≤2⋅104
// 2≤N≤4
// 1≤Wi≤N for each valid i
// 1≤Li≤5 for each valid i
// no two frogs have the same weight
// Subtasks
// Subtask #1 (50 points):

// T=50
// N=2
// Subtask #2 (50 points): original constraints

// Example Input
// 3
// 3
// 3 1 2
// 1 4 5
// 3
// 3 2 1
// 1 1 1
// 4
// 2 1 4 3
// 4 1 2 4
// Example Output
// 3
// 6
// 5
// Explanation
// Example case 1: We can hit the back of the first frog three times.

// Example case 2: We can hit the back of the
// first frog four times, then hit the back of the second frog two times.