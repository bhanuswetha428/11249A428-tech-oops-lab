Experiment No: 13
AIM:
To implement a C++ program to demonstrate the
concept of inheritance and access specifiers
(public, protected, private) in public inheritance.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Create a base class `Base` with:
   - Public, protected, and private data members.
   - A constructor to initialize them.
   - Functions to display each member.
3. Create a derived class `DerivedPublic` using
   public inheritance from the `Base` class.
4. In the derived class:
   - Access and display public and protected members
     from the base class.
   - Access the private member indirectly through
     a public member function of the base class.
5. In the main function:
   - Create an object of the derived class.
   - Call its display functions to show inheritance.
6. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

class Base {
public:
    int public_member_base;
protected:
    int protected_member_base;
private:
    int private_member_base;

public:
    Base() : public_member_base(1), protected_member_base(2), private_member_base(3) {}

    void displayBasePublic() {
        cout << "Base Public: " << public_member_base << endl;
    }

    void displayBaseProtected() {
        cout << "Base Protected: " << protected_member_base << endl;
    }

    int getPrivateMemberBase() { // Public function to access private member
        return private_member_base;
    }
};

class DerivedPublic : public Base { // Public inheritance
public:
    int public_member_derived;

    DerivedPublic() : public_member_derived(4) {}

    void displayDerived() {
        cout << "Derived Public: " << public_member_derived << endl;
        cout << "Inherited Base Public: " << public_member_base << endl; // Accessible
        cout << "Inherited Base Protected: " << protected_member_base << endl; // Accessible
        // cout << "Inherited Base Private: " << private_member_base << endl; // Error: Inaccessible
        cout << "Inherited Base Private (via function): " << getPrivateMemberBase() << endl;
    }
};

int main() {
    DerivedPublic dp;
    dp.displayDerived();
    dp.displayBasePublic(); // Accessible
    // dp.displayBaseProtected(); // Error: Inaccessible from outside DerivedPublic
    return 0;
}

/*
--------------------------------------------
OUTPUT:
Derived Public: 4
Inherited Base Public: 1
Inherited Base Protected: 2
Inherited Base Private (via function): 3
Base Public: 1
--------------------------------------------
RESULT:
Thus, the program to demonstrate inheritance and
access control (public, protected, private) using
public inheritance in C++ was successfully executed.
--------------------------------------------
*/
