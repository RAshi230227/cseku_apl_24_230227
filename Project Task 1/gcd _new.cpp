#include <iostream>

// Function to compute the GCD of two integers using the Euclidean algorithm
int computeGcd(int num1, int num2)
{
    // Continue the loop until num2 becomes 0
    while (num2 != 0)
    {
        int temp = num2;    // Store the value of num2 temporarily
        num2 = num1 % num2; // Set num2 to the remainder of num1 divided by num2
        num1 = temp;        // Update num1 to the old value of num2
    }
    return num1; // When num2 is 0, num1 contains the GCD
}

int main()
{
    int num1, num2;

    // Prompt the user to enter two integers
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    // Output the result of the GCD function
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << computeGcd(num1, num2) << std::endl;

    return 0;
}
