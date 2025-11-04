#include <iostream>
#include <string>
#include <limits> // Used for input validation
#include "recursiveFunctions.h"

// Using namespace std for simplicity, as is common in introductory labs.
using namespace std;

/**
 * @brief Utility function to get a non-negative integer from the user.
 * * This function handles invalid inputs (like text) and ensures the
 * number is not negative.
 *
 * @param prompt The message to display to the user.
 * @return A valid, non-negative integer.
 */
int getNonNegativeIntInput(string prompt) {

}

/**
 * @brief Utility function to get a positive integer from the user.
 *
 * This function handles invalid inputs (like text) and ensures the
 * number is positive (>= 1).
 *
 * @param prompt The message to display to the user.
 * @return A valid, positive integer.
 */
int getPositiveIntInput(string prompt) {

}


// --- Main Program ---

int main() {
    bool running = true;
    while (running) {
        cout << "\n--- C++ Recursion Lab Menu ---" << endl;
        cout << "1. Calculate Factorial" << endl;
        cout << "2. Calculate Fibonacci Number" << endl;
        cout << "3. Calculate Sum of Digits" << endl;
        cout << "4. Solve Tower of Hanoi" << endl;
        cout << "5. Quit" << endl;
        cout << "--------------------------------" << endl;

        int choice = getPositiveIntInput("Enter your choice (1-5): ");
        int n;

        switch (choice) {
            case 1: // Factorial
                n = getNonNegativeIntInput("Enter a non-negative number for factorial: ");
                // Factorial grows very fast, warn user about potential overflow
                if (n > 20) {
                    cout << "Input is very large. Result may overflow 'long long'." << endl;
                }
                cout << "Factorial of " << n << " is: " << factorial(n) << endl;
                break;

            case 2: // Fibonacci
                n = getNonNegativeIntInput("Enter a position (n) for Fibonacci: ");
                // Naive recursion is very slow for Fibonacci
                if (n > 40) {
                    cout << "Calculating... This may take a while due to O(2^n) complexity." << endl;
                }
                cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
                break;

            case 3: // Sum of Digits
                n = getNonNegativeIntInput("Enter a non-negative number to sum its digits: ");
                cout << "The sum of the digits in " << n << " is: " << sumDigits(n) << endl;
                break;

            case 4: // Tower of Hanoi
                n = getPositiveIntInput("Enter the number of discs for Tower of Hanoi (e.g., 3): ");
                if (n > 10) {
                     cout << "This will produce a very large number of steps!" << endl;
                }
                cout << "Solving Tower of Hanoi for " << n << " discs:" << endl;
                towerOfHanoi(n, 'A', 'B', 'C');
                break;

            case 5: // Quit
                running = false;
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
                break;
        }
    }

    return 0;
}


// --- Challenge 1: Function Implementations ---

long long factorial(int n) {
    // Base Case: 0! is 1
    if (n == 0) {
        return 1;
    }
    // Recursive Step: n! = n * (n-1)!
    else {
        return (long long)n * factorial(n - 1);
    }
}

int fibonacci(int n) {
    // Base Case 0: F(0) = 0
    if (n == 0) {
        return 0;
    }
    // Base Case 1: F(1) = 1
    else if (n == 1) {
        return 1;
    }
    // Recursive Step: F(n) = F(n-1) + F(n-2)
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int sumDigits(int n) {
    // Base Case: If n is a single digit, return n
    if (n < 10) {
        return n;
    }
    // Recursive Step: (last digit) + (sum of rest of digits)
    // n % 10 gets the last digit (e.g., 123 % 10 = 3)
    // n / 10 performs integer division (e.g., 123 / 10 = 12)
    else {
        return (n % 10) + sumDigits(n / 10);
    }
}


// --- Challenge 2: Function Implementation ---

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base Case: Only one disc to move
    if (n == 1) {
        cout << "Move disc 1 from " << source << " to " << destination << endl;
        return;
    }

    // Recursive Step 1:
    // Move n-1 discs from source to auxiliary, using destination as temp
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth (largest) disc from source to destination
    cout << "Move disc " << n << " from " << source << " to " << destination << endl;

    // Recursive Step 2:
    // Move the n-1 discs from auxiliary to destination, using source as temp
    towerOfHanoi(n - 1, auxiliary, source, destination);
}
