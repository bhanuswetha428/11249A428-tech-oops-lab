--------------------------------------------
Experiment No: 10(a)
AIM:
To implement a C++ program that demonstrates operator 
overloading of the unary minus (-) operator using a 
member function.
--------------------------------------------
THEORY:
Operator overloading in C++ allows redefining the behavior of 
operators for user-defined data types (like classes and structures).  

The unary minus operator (-) can be overloaded to perform a 
custom negation operation. When overloaded as a member 
function, it operates on the invoking object and returns a 
new object with modified values.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class 'Point' with:
   a) Two private data members 'x' and 'y' for coordinates.
   b) A constructor to initialize these members.
   c) A member function to overload the unary minus (-) operator.
   d) A function 'display()' to show the coordinates.
3. In the overloaded operator function:
   a) Create and return a new 'Point' object with both 
      coordinates negated.
4. In the main() function:
   a) Create an object 'p1' of the class 'Point' and initialize it.
   b) Create another object 'p2' using the overloaded unary operator.
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
    // Constructor to initialize the point
    Point(int x_coord = 0, int y_coord = 0) {
        x = x_coord;
        y = y_coord;
    }

    // Overload the unary minus operator as a member function
    Point operator-() {
        return Point(-x, -y);
    }

    // Function to display the point's coordinates
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, -20);
    Point p2 = -p1; // Calls the overloaded operator-()
    
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
member function in C++.
--------------------------------------------
*/
