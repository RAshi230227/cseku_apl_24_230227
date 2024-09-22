#include <iostream>
using namespace std;

int main()
{
    int testCases;
    // Read the number of test cases
    cin >> testCases;

    // Process each test case
    while (testCases--)
    {
        int totalNumbers, reverseCount;
        // Read the values of n (total numbers) and k (reverse count)
        cin >> totalNumbers >> reverseCount;

        // Case 1: When reverseCount is not zero and (totalNumbers - reverseCount) is not equal to 1
        if (reverseCount != 0 && (totalNumbers - reverseCount) != 1)
        {
            cout << 1 << " "; // Always print 1 at the start

            // Print numbers from (totalNumbers - reverseCount + 1) to totalNumbers
            for (int i = (totalNumbers - reverseCount + 1); i <= totalNumbers; i++)
            {
                cout << i << " ";
            }

            // Print numbers from (totalNumbers - reverseCount) down to 2
            for (int i = (totalNumbers - reverseCount); i >= 2; i--)
            {
                cout << i << " ";
            }
            cout << endl; // End of output for this test case
        }
        // Case 2: When (totalNumbers - reverseCount) equals 1 (special case)
        else if ((totalNumbers - reverseCount) == 1)
        {
            // Simply print the numbers from 1 to totalNumbers
            for (int i = 1; i <= totalNumbers; i++)
            {
                cout << i << " ";
            }
        }
        // Case 3: When reverseCount is zero (print numbers from totalNumbers to 1 in reverse order)
        else
        {
            while (totalNumbers > 0)
            {
                cout << totalNumbers << " "; // Print the numbers in reverse
                totalNumbers--;
            }
        }
        cout << endl; // Move to the next test case
    }

    return 0;
}
