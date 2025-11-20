Experiment No: 9(b)
AIM:
To implement a C++ program that demonstrates the concept 
of a friend function.
--------------------------------------------
THEORY:
A friend function in C++ is a non-member function that is 
granted access to the private and protected members of a class. 
It is declared inside the class using the 'friend' keyword, but 
defined outside the class scope.

Friend functions are useful when an external function needs 
to operate on private data of a class without being a member of it.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class named 'base' with:
   a) A private data member 'private_variable'.
   b) A protected data member 'protected_variable'.
   c) A constructor to initialize both members.
   d) Declare a non-member function 'friendFunction()' as a friend.
3. Define the 'friendFunction()' outside the class:
   a) Access and display the private and protected members.
4. In the main() function:
   a) Create an object of the 'base' class.
   b) Call 'friendFunction()' with the object as an argument.
5. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

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
    friend void friendFunction(base& obj);
};

// Friend function definition
void friendFunction(base& obj) {
    cout << "Private Variable: " 
         << obj.private_variable << endl;
    cout << "Protected Variable: " 
         << obj.protected_variable << endl;
}

int main() {
    base object1;
    friendFunction(object1);
    return 0;
}

/*
--------------------------------------------
OUTPUT:
Private Variable: 10
Protected Variable: 99
--------------------------------------------
RESULT:
Thus, the program successfully demonstrates the use of a 
friend function in C++, which allows access to private and 
protected data members of a class from a non-member function.
--------------------------------------------
*/
