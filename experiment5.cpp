 Aim:
To demonstrate the use of constructors (default, parameterized, copy) and destructor in C++.

 Algorithm:

Start the program.
Create a class (e.g., Demo) with a data member (like value).
Define constructors:
Default constructor – initializes value with a default value.
Parameterized constructor – initializes value with a given value.
Copy constructor – copies value from another object.
Define a destructor that displays a message when an object is destroyed.
Define a member function to display the value.
Create objects in main() to invoke different constructors.
Call display function to show values.
Observe destructor calls when objects go out of scope.

 C++ Program:
#include <iostream>
using namespace std;
class Demo {
private:
    int value;
public:
    Demo() {
        value = 10;
        cout << "Default constructor called, value = " << value << endl;
    }
    Demo(int v) {
        value = v;
        cout << "Parameterized constructor called, value = " << value << endl;
    }
    Demo(const Demo &d) {
        value = d.value;
        cout << "Copy constructor called, value = " << value << endl;
    }
    ~Demo() {
        cout << "Destructor called for value = " << value << endl;
    }
    void display() {
        cout << "Value = " << value << endl;
    }
};
int main() {
    cout << "--- Creating object d1 ---" << endl;
    Demo d1;               
    cout << "\n--- Creating object d2 ---" << endl;
    Demo d2(50);           
    cout << "\n--- Creating object d3 ---" << endl;
    Demo d3 = d2;          
    cout << "\n--- Displaying values ---" << endl;
    d1.display();
    d2.display();
    d3.display();
    cout << "\n--- End of main ---" << endl;
    return 0;
}

 Sample Output:

Default constructor called, value = 10
Parameterized constructor called, value = 10
Copy constructor called, value = 10
Destructor called for value = 10
Destructor called for object with  value =10
Destructor called for value = 10

 Result:
The concept of use of constructor with its types and destructor is completed


Destructor is automatically called when an object goes out of scope, releasing resources
