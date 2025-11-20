 Aim:
To demonstrate how to allocate and deallocate a dynamic variable in C++.

 Algorithm:
Start the program.
Declare a pointer to the required data type (e.g., int).
Use new to allocate memory dynamically for a variable at runtime.
Assign a value to the dynamically allocated variable.
Display the value.
Use delete to deallocate the memory.
Stop the program.

 C++ Program:
#include <iostream>
using namespace std;
int main() {
    int *ptr;   
    ptr = new int;
    *ptr = 50;
    cout << "Value of dynamic variable: " << *ptr << endl;
    delete ptr;
    cout << "Memory deallocated successfully." << endl;
    return 0;
}

 Output:
 Enter the numbers of elements for the dynamic array : 3
 Enter 3 integer values:
 2 5 6 
 The elements of the dynamic array are: 256

   Result:
   Allocating and deallocating a dynamic array is completed.

🧠 Result
