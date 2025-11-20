Experiment No: 8(c)
AIM:
To implement a C++ program that demonstrates dynamic object
creation using constructors and destructors.
--------------------------------------------
THEORY:
When a class object is dynamically allocated using the 'new' operator,
its constructor is automatically called. Similarly, when the object is
deallocated using 'delete', the destructor is automatically invoked.
This mechanism helps manage resources such as memory, files, etc.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class 'Box' with:
   a) A constructor that initializes the box length and displays a message.
   b) A destructor that displays a message when the object is destroyed.
3. In the main() function:
   a) Dynamically allocate a single object of 'Box' using 'new'.
   b) Use 'delete' to deallocate the object and trigger the destructor.
   c) Dynamically allocate an array of 'Box' objects using 'new[]'.
   d) Deallocate the array using 'delete[]' to call destructors for all elements.
4. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

class Box {
public:
    // Constructor
    Box(int length) {
        this->length = length;
        cout << "Constructor for a box of length " << length << " is called." << endl;
    }

    // Destructor
    ~Box() {
        cout << "Destructor for a box of length " << length << " is called." << endl;
    }

private:
    int length;
};

int main() {
    // Create a single Box object dynamically
    Box* myBox = new Box(5);

    // Deallocate the object, which calls the destructor
    delete myBox;
    myBox = nullptr;

    // Create a dynamic array of Box objects
    Box* boxArray = new Box[3]{Box(1), Box(2), Box(3)};

    // Deallocate the array, calling the destructor for each element
    delete[] boxArray;
    boxArray = nullptr;

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Constructor for a box of length 5 is called.
Destructor for a box of length 5 is called.
Constructor for a box of length 1 is called.
Constructor for a box of length 2 is called.
Constructor for a box of length 3 is called.
Destructor for a box of length 3 is called.
Destructor for a box of length 2 is called.
Destructor for a box of length 1 is called.
--------------------------------------------
RESULT:
Thus, the program successfully demonstrates dynamic object creation
and destruction using constructors and destructors in C++.
--------------------------------------------
*/
