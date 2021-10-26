// Space optimized CPP implementation of longest
// common substring.
#include <bits/stdc++.h>
using namespace std;

// Function to find longest common substring.
int LCSubStr(string X, string Y)
{
    // Find length of both the strings.
    int m = X.length();
    int n = Y.length();

    // Variable to store length of longest
    // common substring.
    int result = 0;

    // Matrix to store result of two
    // consecutive rows at a time.
    int len[2][n];

    // Variable to represent which row of
    // matrix is current row.
    int currRow = 0;

    // For a particular value of i and j,
    // len[currRow][j] stores length of longest
    // common substring in string X[0..i] and Y[0..j].
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                len[currRow][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1])
            {
                len[currRow][j] = len[1 - currRow][j - 1] + 1;
                result = max(result, len[currRow][j]);
            }
            else
            {
                len[currRow][j] = 0;
            }
        }

        // Make current row as previous row and previous
        // row as new current row.
        currRow = 1 - currRow;
    }
    cerr << result << "\n";
    return result;
}

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        /* code */

        string X;
        string Y;
        cin >> X;
        cin >> Y;
        int n = X.size();
        int m = Y.size();

        cout << n + m - (2 * LCSubStr(X, Y));
        cout << "\n";
    }

    return 0;
}
