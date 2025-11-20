Experiment No: 21
AIM:
To implement the use of Exception Handling in C++.
--------------------------------------------
THEORY:
Exception handling in C++ is used to handle runtime errors gracefully.
It uses three main keywords:
- try:   Block of code where exceptions may occur.
- throw: Used to signal the occurrence of an exception.
- catch: Block that handles the thrown exception.
This mechanism prevents program crashes and allows error handling.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a function to perform division of two numbers.
3. Use a try block to detect division by zero.
4. Throw an exception if the denominator is zero.
5. Catch the exception using a catch block and display an error message.
6. Display the result for valid inputs.
7. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0)
            throw "Division by zero error!";
        result = static_cast<double>(numerator) / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues normally after exception handling." << endl;
    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT 1:
Enter numerator: 10
Enter denominator: 2
Result: 5
Program continues normally after exception handling.

SAMPLE OUTPUT 2:
Enter numerator: 8
Enter denominator: 0
Exception caught: Division by zero error!
Program continues normally after exception handling.
--------------------------------------------
RESULT:
Thus, the program to demonstrate exception handling in C++ 
was successfully executed.
--------------------------------------------
*/
