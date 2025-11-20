Aim
To implement the use of assignment and comparison operators for strings in C++.

 Algorithm
Start the program.
Declare two string variables, str1 and str2.
Initialize them with different values (e.g., "hello" and "world").
Display both strings before assignment.
Assign the value of one string to another using the assignment operator (=).
Display both strings after assignment.
Compare the two strings using the comparison operator (==) and display the result.
Stop the program.

 C++ Program
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1 = "hello";
    string str2 = "world";
    cout << "Before assignment:\n";
    cout << str1 << endl;
    cout << str2 << endl;
    str2 = str1;
    cout << "After assignment:\n";
    cout << str1 << "? " << str2 << endl;
    if (str1 == str2)
        cout << "Both strings are equal.\n";
    else
        cout << "Strings are not equal.\n";
    return 0;
}

 Sample Output
Before assignment:
hello
world
After assignment:
hello? hello
Both strings are equal.

 Result

The program successfully demonstrates the assignment (=) and comparison (==) of two string objects in C++.
