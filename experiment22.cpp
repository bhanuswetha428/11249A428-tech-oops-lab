Experiment No: 22
AIM:
To implement user defined namespace in C++.
--------------------------------------------
THEORY:
Namespaces in C++ are used to organize code into logical groups and 
prevent name conflicts. A user-defined namespace allows the user 
to declare identifiers (like variables, classes, functions) 
that can be accessed using the scope resolution operator (::).
--------------------------------------------
ALGORITHM:
1. Create a user-defined namespace.
2. Define variables and functions inside the namespace.
3. Access these elements using the scope resolution operator.
4. Call the namespace functions in main().
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
    int multiply(int a, int b) {
        return a * b;
    }
}

int main() {
    cout << "Sum: " << MathOperations::add(10, 5) << endl;
    cout << "Product: " << MathOperations::multiply(10, 5) << endl;
    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT:
Sum: 15
Product: 50
--------------------------------------------
RESULT:
Thus, a user-defined namespace was successfully created 
and implemented in C++.
--------------------------------------------
*/
