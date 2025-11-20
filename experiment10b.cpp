Experiment No: 10(b)
AIM:
To implement a C++ program that demonstrates operator 
overloading of the unary minus (-) operator using a 
friend function.
--------------------------------------------
THEORY:
Operator overloading allows redefining how operators work 
with user-defined types.  
In this experiment, the unary minus (-) operator is overloaded 
using a *friend function*.  

A friend function is not a member of the class but has access 
to its private and protected members. This allows the operator 
to be defined outside the class while still accessing its internal data.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class 'Point' with:
   a) Private data members 'x' and 'y' for coordinates.
   b) A constructor to initialize the coordinates.
   c) A friend function declaration for operator overloading.
   d) A 'display()' function to show coordinate values.
3. Define the friend function 'operator-' outside the class:
   a) It takes a constant reference to a 'Point' object.
   b) It returns a new 'Point' object with both coordinates negated.
4. In the main() function:
   a) Create an object 'p1' of class 'Point' and initialize it.
   b) Use the overloaded operator to create a negated object 'p2'.
   c) Display both points.
5. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

class Point { 
private:
    int x, y;

public:
    // Constructor
    Point(int x_coord = 0, int y_coord = 0) {
        x = x_coord;
        y = y_coord;
    }

    // Declare the friend function
    friend Point operator-(const Point& p);

    // Function to display the point's coordinates
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

// Define the friend function outside the class
Point operator-(const Point& p) {
    return Point(-p.x, -p.y);
}

int main() {
    Point p1(10, -20);
    Point p2 = -p1; // Calls the friend operator-()
    
    cout << "Original point p1: ";
    p1.display();
    
    cout << "Negated point p2: ";
    p2.display();
    
    return 0;
}

/*
--------------------------------------------
OUTPUT:
Original point p1: Point(10, -20)
Negated point p2: Point(-10, 20)
--------------------------------------------
RESULT:
Thus, the program successfully demonstrates operator 
overloading of the unary minus (-) operator using a 
friend function in C++.
--------------------------------------------
*/
