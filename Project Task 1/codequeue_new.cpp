#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Read the number of children (n) and the time in seconds (t)
    int numChildren, timeInSeconds;
    cin >> numChildren >> timeInSeconds;

    // Read the initial arrangement of the queue
    string queue;
    cin >> queue;

    // Simulate the process for t seconds
    while (timeInSeconds--)
    {
        for (int i = 0; i < numChildren - 1; i++)
        {
            // If a boy ('B') is in front of a girl ('G'), swap their positions
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                swap(queue[i], queue[i + 1]);
                // Skip the next position to avoid consecutive swaps in the same second
                i++;
            }
        }
    }

    // Output the final arrangement after t seconds
    cout << queue << endl;

    return 0;
}
