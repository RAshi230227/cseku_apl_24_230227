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

        // Case 1: When k is not zero and (n - k) is not equal to 1
        if (reverseCount != 0 && (totalNumbers - reverseCount) != 1)
        {
            cout << 1 << " "; // Always print 1 at the start

            // Print numbers from (n-k+1) to n
            for (int i = (totalNumbers - reverseCount + 1); i <= totalNumbers; i++)
            {
                cout << i << " ";
            }

            // Print numbers from (n-k) down to 2
            for (int i = (totalNumbers - reverseCount); i >= 2; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        // Case 2: When (n - k) equals 1 (i.e., special case)
        else if ((totalNumbers - reverseCount) == 1)
        {
            for (int i = 1; i <= totalNumbers; i++)
            {
                cout << i << " "; // Simply print the numbers from 1 to n
            }
        }
        // Case 3: When k is zero (print numbers from n to 1 in reverse order)
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
