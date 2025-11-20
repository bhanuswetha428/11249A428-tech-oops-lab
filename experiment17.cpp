Experiment No: 17
AIM:
To implement the concept of Pure Virtual Function in C++.
--------------------------------------------
THEORY:
A pure virtual function is a virtual function that has no definition
in the base class and must be overridden in derived classes.
It is declared using the syntax:
    virtual void functionName() = 0;
A class containing at least one pure virtual function is called
an abstract class and cannot be instantiated.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define an abstract base class `Shape` with a pure virtual function `area()`.
3. Derive classes `Rectangle` and `Circle` from `Shape`.
4. Implement the `area()` function in both derived classes.
5. In the main function:
   - Create pointers of type `Shape*` and assign addresses of
     derived class objects.
   - Call the overridden `area()` functions using base class pointers.
6. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

// Derived class 1
class Rectangle : public Shape {
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

// Derived class 2
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* shape; // Base class pointer

    Rectangle rect(5, 3);
    Circle circ(4);

    shape = &rect;
    shape->area(); // Calls Rectangle's area()

    shape = &circ;
    shape->area(); // Calls Circle's area()

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Area of Rectangle: 15
Area of Circle: 50.24
--------------------------------------------
RESULT:
Thus, the program to implement the concept of pure virtual
functions and abstract classes in C++ was successfully executed.
--------------------------------------------
*/
