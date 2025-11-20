Experiment No: 9(a)
AIM:
To implement a C++ program that demonstrates the concept
of a friend class and friend function.
--------------------------------------------
THEORY:
A friend class in C++ is a class that is given special access to
the private and protected members of another class. 
Although the friend class is not a member of the class that 
declares it as a friend, it can still access that class’s private and 
protected data. 

This feature is useful when two or more classes need to work
closely together while maintaining encapsulation.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class 'Geeks' with:
   a) A private data member 'private_variable'.
   b) A protected data member 'protected_variable'.
   c) A constructor to initialize both variables.
   d) Declare another class 'GFG' as a friend class.
3. Define the friend class 'GFG' with a member function 'display()'
   that accesses and displays the private and protected members of 'Geeks'.
4. In the main() function:
   a) Create objects of 'Geeks' and 'GFG'.
   b) Call the 'display()' function of 'GFG' using the 'Geeks' object.
5. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

class Geeks {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    Geeks() {
        private_variable = 10;
        protected_variable = 99;
    }

    // Friend class declaration
    friend class GFG;
};

// Class GFG is declared as a friend inside class Geeks.
// Therefore, GFG can access private and protected members of Geeks.
class GFG {
public:
    void display(Geeks& t) {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable << endl;
    }
};

int main() {
    Geeks g;
    GFG fri;
    fri.display(g);
    return 0;
}

/*
--------------------------------------------
OUTPUT:
The value of Private Variable = 10
The value of Protected Variable = 99
--------------------------------------------
RESULT:
Thus, the program successfully demonstrates the concept of 
a friend class in C++, allowing one class to access the private 
and protected members of another class.
--------------------------------------------
*/
