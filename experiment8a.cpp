 Aim:
To demonstrate how to allocate and deallocate memory for a single variable dynamically in C++.

 Algorithm:

Start the program.
Declare a pointer to the required data type (e.g., int).
Use new to allocate memory dynamically for a single variable.
Assign a value to the dynamically allocated memory.
Display the value.
Use delete to deallocate the memory.
Stop the program.

 C++ Program:
  
#include <iostream>
using namespace std;
int main() {
    int *ptr;   
    ptr = new int;
    *ptr = 10;
    cout << "Value of the dynamically allocated variable: " << *ptr << endl;
    delete ptr;
    cout << "Memory deallocated successfully." << endl;
    return 0;
}

 Output:
Value of the dynamically allocated variable: 10
Memory deallocated successfully.

 Result:

Allocating and deallocating a single variable is completed.

delete frees the allocated memory to prevent memory leak
