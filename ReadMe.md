# C++ Lab: Recursion (CMPSC 272)

## Overview

This lab focuses on **Recursion**, a fundamental programming technique where a function calls itself to solve a smaller instance of the same problem. You will implement recursive functions to solve two classic challenges, helping you learn to identify recursive patterns, define base cases, and analyze the flow of recursive function calls.

## Learning Objectives

* Define the concept of recursion and its components (base case, recursive step).
* Implement recursive functions for mathematical sequences and calculations.
* Solve problems by breaking them down into smaller, self-similar subproblems.
* Analyze the flow of control and call stack in recursive function calls.

---

## Challenge 1: Recursive Mathematical Functions

### Problem

Implement common mathematical functions using recursion. You will also create a menu-driven interface in your `main` function to test them.

### Your Tasks

You will need to implement the following functions. Look for the corresponding files (e.g., `math_functions.cpp`, `math_functions.h`) and complete the function bodies.

1.  **Factorial:** Calculates the factorial of a non-negative integer `n`.
    * (e.g., 5! = 5 * 4 * 3 * 2 * 1)
    ```cpp
    // Prototype:
    long long factorial(int n);
    ```

2.  **Fibonacci:** Calculates the *n*th Fibonacci number.
    * (e.g., F(0)=0, F(1)=1, F(n) = F(n-1) + F(n-2))
    ```cpp
    // Prototype:
    int fibonacci(int n);
    ```

3.  **Sum of Digits:** Calculates the sum of the digits of a non-negative integer `n`.
    * (e.g., sumDigits(123) = 1 + 2 + 3 = 6)
    ```cpp
    // Prototype:
    int sumDigits(int n);
    ```

4.  **Main Function (`main.cpp`):**
    * Create a menu-driven interface that allows the user to:
        1.  Calculate factorial for a given number.
        2.  Calculate Fibonacci number for a given position.
        3.  Calculate the sum of digits for a given number.
        4.  Quit.
    * For each option, prompt the user for input, call the appropriate recursive function, and display the result.
    * Ensure you have robust input validation for non-negative integers.

---

## Challenge 2: Recursive Tower of Hanoi

### Problem

Implement the classic Tower of Hanoi puzzle using a recursive function. This problem is a perfect illustration of how a complex problem can be solved elegantly with recursion.

### Your Task

You will need to implement the `towerOfHanoi` function.

1.  **Tower of Hanoi Function:**
    * This function should print each step required to move the discs (e.g., "Move disc 1 from A to C").
    ```cpp
    // Prototype:
    void towerOfHanoi(int n, char source, char auxiliary, char destination);
    ```

2.  **Main Function (`main.cpp` or a separate file):**
    * Prompt the user to enter the number of discs (e.g., 1 to 5).
    * Call the `towerOfHanoi` function with the initial pegs (e.g., 'A', 'B', 'C').

---

## How to Complete

1.  **Find the `// TODO:` comments:** Look through the provided source files (`.cpp`, `.h`).
2.  **Implement the functions:** Write the code for the base cases and recursive steps for all required functions.
3.  **Add Headers:** Make sure all your source files (`.cpp` and `.h`) have the required header comments (User, Program, Data).
4.  **Compile and Test:** Compile your code and test it thoroughly to ensure all functions and the menu work as expected.

---

## Submission

Once your lab is complete, clean, and tested:

1.  Commit all your changes to this repository.
2.  Push your completed code to your new public `RecursionLab` repository on GitHub.
3.  Follow the submission instructions on Canvas to submit the `.txt` file containing the URL to your repository.