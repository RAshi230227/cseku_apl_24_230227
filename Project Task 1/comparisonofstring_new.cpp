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
        int stringLength;
        // Read the length of the strings
        cin >> stringLength;

        string str1, str2;
        // Read both input strings
        cin >> str1 >> str2;

        int equivalentCharCount = 0; // To count how many equivalent characters exist

        // Loop through both strings to compare character by character
        for (int i = 0; i < stringLength; i++)
        {
            // Check if the characters are either equal or interchangeable (G and B)
            if ((str1[i] == 'G' && str2[i] == 'B') ||
                (str1[i] == str2[i]) ||
                (str1[i] == 'B' && str2[i] == 'G'))
            {
                equivalentCharCount++;
            }
        }

        // If all characters are equivalent, print "YES", otherwise "NO"
        if (equivalentCharCount == stringLength)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
