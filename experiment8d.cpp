Experiment No: 8(d)
AIM:
To implement an illustrative C++ program that demonstrates
dynamic memory allocation for both single variables and arrays
using 'new' and 'delete' operators.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Dynamically allocate memory for a single integer using 'new'.
3. Assign a value to the dynamically allocated integer.
4. Display the value of the single integer.
5. Declare an integer variable 'size' to define the array length.
6. Dynamically allocate memory for an array of integers using 'new'.
7. Initialize array elements using a loop.
8. Display the array elements.
9. Deallocate memory for the single integer using 'delete'.
10. Deallocate memory for the integer array using 'delete[]'.
11. Set all pointers to nullptr after deletion (best practice).
12. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

int main() {
    // Dynamic allocation for a single integer
    int* singleInt = new int;
    *singleInt = 25;
    cout << "Value of singleInt: " << *singleInt << endl;

    // Dynamic allocation for an array of integers
    int size = 3;
    int* dynamicArray = new int[size];
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = (i + 1) * 10;
    }

    cout << "Elements of dynamicArray: ";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete singleInt;
    singleInt = nullptr; // Good practice to set pointer to nullptr after deletion

    delete[] dynamicArray;
    dynamicArray = nullptr; // Good practice to set pointer to nullptr after deletion

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Value of singleInt: 25
Elements of dynamicArray: 10 20 30
--------------------------------------------
RESULT:
Thus, the program successfully demonstrates the use of dynamic
memory allocation and deallocation for both single variables and
arrays using 'new' and 'delete' operators in C++.
--------------------------------------------
*/
