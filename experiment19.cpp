Experiment No: 18
AIM:
To implement the use of Class Template in C++.
--------------------------------------------
THEORY:
Templates in C++ allow the creation of generic classes or functions 
that can operate with any data type. 
A class template is defined using the keyword 'template' followed 
by a type parameter (usually T).
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class template `Calculator` with a type parameter `T`.
3. Add member functions to perform basic arithmetic operations:
   addition, subtraction, multiplication, and division.
4. Create objects of the template class with different data types 
   (int, float, etc.).
5. Display the results for both types.
6. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResults() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
    }
};

int main() {
    cout << "Integer Calculation:" << endl;
    Calculator<int> intCalc(10, 5);
    intCalc.displayResults();

    cout << "\nFloating Point Calculation:" << endl;
    Calculator<float> floatCalc(7.5, 2.5);
    floatCalc.displayResults();

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Integer Calculation:
Numbers: 10 and 5
Addition: 15
Subtraction: 5
Multiplication: 50
Division: 2

Floating Point Calculation:
Numbers: 7.5 and 2.5
Addition: 10
Subtraction: 5
Multiplication: 18.75
Division: 3
--------------------------------------------
RESULT:
Thus, the program to implement the use of class templates 
in C++ was successfully executed.
--------------------------------------------
*/
