#include <bits/stdc++.h>

#define db(x) cout << "   \n   " << #x<<"  " << x << "   \n   "
using namespace std;

// Number of bits to
// represent int
#define INT_BITS 32

// Function to return
// maximum XOR subset
// in set[]
int maxSubarrayXOR(int set[], int n)
{
    // Initialize index of
    // chosen elements
    int index = 0;
    // db(index);

    // Traverse through all
    // bits of integer
    // starting from the most
    // significant bit (MSB)
    for (int i = INT_BITS - 1; i >= 0; i--)
    {
        cout << "------------------------------------------------------\n";
        db(i);
        // Initialize index of
        // maximum element and
        // the maximum element
        int maxIndex = index;
        db(maxIndex);

        int maxElement = INT_MIN;
        db(maxElement);
        for (int j = index; j < n; j++)
        {
            // If i'th bit of set[j]
            // is set and set[j] is
            // greater than max so far.
            if ((set[j] & (1 << i)) != 0 && set[j] > maxElement)
            {
                maxElement = set[j];
                db(maxElement);

                maxIndex = j;
                db(maxIndex);
            }
        }

        // If there was no
        // element with i'th
        // bit set, move to
        // smaller i
        if (maxElement == INT_MIN)
            continue;

        // Put maximum element
        // with i'th bit set
        // at index 'index'
        swap(set[index], set[maxIndex]);

        // Update maxIndex  and
        // increment index
        maxIndex = index;
        db(maxIndex);

        // Do XOR of set[maxIndex ex]
        // with all numbers having
        // i'th bit as set.
        for (int j = 0; j < n; j++)
        {
            // XOR set[maxIndex ] those
            // numbers which have the
            // i'th bit set
            if (j != maxIndex &&
                (set[j] & (1 << i)) != 0)
            {
                set[j] = set[j] ^ set[maxIndex];
                db(set[j]);
            }
        }

        // Increment index of
        // chosen elements
        index++;
        db(index);
    }

    // Final result is
    // XOR of all elements
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        // res ^= set[i];
        db(set[i]);
    }
    for (int i = 0; i < n; i++)
    {
        res ^= set[i];
        db(res);
    }
    return res;
}

// Driver program
int main()
{
    int set[] = {8, 17, 7,1};
    int n = sizeof(set) / sizeof(set[0]);

    cout << "Max subset XOR is ";
    cout << maxSubarrayXOR(set, n);
    return 0;
}
