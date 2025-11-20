 Aim:
To demonstrate the concept of function overloading applied to member functions in C++.
 Algorithm:
Start the program.
Create a class (e.g., MathOperation) with multiple member functions having the same name but different parameters.
Define member functions inside the class with different parameter lists (function overloading).
Example: add(int, int) and add(int, int, int).
Create an object of the class in the main() function.
Call the overloaded functions using the object.
Display the results of each function call.
Stop the program.

C++ Program:
#include <iostream>
using namespace std;
class MathOperation {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }
    // Overloaded function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
    // Overloaded function to add two floating-point numbers
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    MathOperation m1;

    int sum1 = m1.add(10, 20);           // Calls add(int, int)
    int sum2 = m1.add(5, 10, 15);        // Calls add(int, int, int)
    float sum3 = m1.add(4.5f, 5.5f);     // Calls add(float, float)

    cout << "Sum of 10 and 20: " << sum1 << endl;
    cout << "Sum of 5, 10 and 15: " << sum2 << endl;
    cout << "Sum of 4.5 and 5.5: " << sum3 << endl;

    return 0;
}

 Sample Output:
Sum of 10 and 20: 30
Sum of 5, 10 and 15: 30
Sum of 4.5 and 5.5: 10

Result:

The program demonstrates function overloading in C++.
The member function add() is defined multiple times with different parameter lists, and the correct version is called based on arguments provided, showing compile-time polymorphism in action.
