Experiment No: 16
AIM:
To demonstrate the use of 'this' pointer and inline function in C++.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class `Rectangle` with data members `length` and `breadth`.
3. Define:
   - An inline function `setValues()` to assign values to the data members.
   - A member function `area()` that uses the `this` pointer 
     to access the object's own members.
4. In the main function, create an object and use the functions to 
   display results.
5. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // Inline function to set values
    inline void setValues(int length, int breadth) {
        this->length = length;     // Using 'this' pointer
        this->breadth = breadth;   // to distinguish between local and class variables
    }

    // Member function to calculate area
    int area() {
        return this->length * this->breadth;
    }

    void display() {
        cout << "Length = " << length << ", Breadth = " << breadth
             << ", Area = " << area() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setValues(5, 3);
    rect.display();
    return 0;
}

/*
--------------------------------------------
OUTPUT:
Length = 5, Breadth = 3, Area = 15
--------------------------------------------
RESULT:
Thus, the program to demonstrate the use of the 'this' pointer 
and inline function in C++ was successfully executed.
--------------------------------------------
*/
