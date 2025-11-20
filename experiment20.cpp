Experiment No: 20
AIM:
To implement the use of File Handling in C++.
--------------------------------------------
THEORY:
File handling in C++ allows reading from and writing to files using
streams such as:
- ofstream → for writing to files
- ifstream → for reading from files
- fstream  → for both reading and writing

These classes are defined in the <fstream> library.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Create an ofstream object to open a file in write mode.
3. Write some data (text) into the file.
4. Close the file.
5. Reopen the same file using ifstream to read the contents.
6. Display the contents on the screen.
7. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string text;

    // Writing to a file
    ofstream outFile("sample.txt");
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    outFile << "This is a sample file.\n";
    outFile << "File handling in C++ is easy!\n";
    outFile.close();
    cout << "Data written to file successfully.\n\n";

    // Reading from the file
    ifstream inFile("sample.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "Reading data from file:\n";
    while (getline(inFile, text)) {
        cout << text << endl;
    }

    inFile.close();
    return 0;
}

/*
--------------------------------------------
OUTPUT:
Data written to file successfully.

Reading data from file:
This is a sample file.
File handling in C++ is easy!
--------------------------------------------
RESULT:
Thus, the program to demonstrate file handling operations 
(reading and writing) in C++ was successfully executed.
--------------------------------------------
*/
