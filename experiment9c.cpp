Experiment No: 9(c)
AIM:
To implement a C++ program that demonstrates how a member 
function of another class can be declared as a friend function.
--------------------------------------------
THEORY:
In C++, not only standalone functions but also specific member 
functions of other classes can be declared as friends of a class. 
This allows those functions to access the private and protected 
members of the class in which they are declared as friends.

This mechanism is useful when two classes need to collaborate 
closely while still maintaining encapsulation.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Use a forward declaration for the class 'base' since another 
   class 'GFG' will reference it.
3. Define a class 'GFG' containing a member function 
   'GFG_Function(base&)'.
4. Define the class 'base' with:
   a) Private data member 'private_variable'.
   b) Protected data member 'protected_variable'.
   c) A constructor to initialize these members.
   d) A friend declaration for 'GFG::GFG_Function(base&)'.
5. Define the friend function 'GFG::GFG_Function(base&)' 
   outside both classes, allowing it to access private and 
   protected members of 'base'.
6. In the main() function:
   a) Create objects of both 'base' and 'GFG'.
   b) Call the member function 'GFG_Function()' using the 'GFG' object.
7. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

// Forward Declaration needed
class base;

// Another class in which function is declared
class GFG {
public:
    void GFG_Function(base& obj);
};

// Base class declares a member function of another class as friend
class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base() {
        private_variable = 10;
        protected_variable = 99;
    }

    // Friend function declaration
    friend void GFG::GFG_Function(base&);
};

// Friend function definition
void GFG::GFG_Function(base& obj) {
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable << endl;
}

int main() {
    base object1;
    GFG object2;
    object2.GFG_Function(object1);
    return 0;
}

/*
--------------------------------------------
OUTPUT:
Private Variable: 10
Protected Variable: 99
--------------------------------------------
RESULT:
Thus, the program successfully demonstrates how a member 
function of one class can be declared as a friend of another 
class, allowing it to access private and protected members.
--------------------------------------------
*/
